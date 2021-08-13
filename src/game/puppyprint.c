#include <ultra64.h>

#include "config.h"
#include "game_init.h"
#include "memory.h"
#include "print.h"
#include "segment2.h"
#include "string.h"
#include "engine/math_util.h"
#include "engine/behavior_script.h"
#include "camera.h"
#include "puppyprint.h"
#include "level_update.h"
#include "object_list_processor.h"
#include "engine/surface_load.h"
#include "audio/data.h"

u8 currEnv[4];

//Profiler values
s8 perfIteration = 0;
s16 benchmarkLoop = 0;
s32 benchmarkTimer = 0;
//General
OSTime cpuTime = 0;
OSTime rspTime = 0;
OSTime rdpTime = 0;
OSTime ramTime = 0;
OSTime loadTime = 0;
OSTime gLastOSTime = 0;
OSTime rspDelta = 0;
s32 benchMark[NUM_BENCH_ITERATIONS+2];
//CPU
OSTime collisionTime[NUM_PERF_ITERATIONS+1];
OSTime behaviourTime[NUM_PERF_ITERATIONS+1];
OSTime scriptTime[NUM_PERF_ITERATIONS+1];
OSTime graphTime[NUM_PERF_ITERATIONS+1];
OSTime audioTime[NUM_PERF_ITERATIONS+1];
OSTime dmaTime[NUM_PERF_ITERATIONS+1];
OSTime dmaAudioTime[NUM_PERF_ITERATIONS+1];
//RSP
OSTime audioTime[NUM_PERF_ITERATIONS+1];
OSTime rspGenTime[NUM_PERF_ITERATIONS+1];
//RDP
OSTime bufferTime[NUM_PERF_ITERATIONS+1];
OSTime tmemTime[NUM_PERF_ITERATIONS+1];
OSTime busTime[NUM_PERF_ITERATIONS+1];
//RAM
s8 ramViewer = 0;
s32 ramsizeSegment[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
s32 audioPool[12];

extern u8 _mainSegmentStart[];
extern u8 _mainSegmentEnd[];
extern u8 _engineSegmentStart[];
extern u8 _engineSegmentEnd[];
extern u8 _framebuffersSegmentBssStart[];
extern u8 _framebuffersSegmentBssEnd[];
extern u8 _buffersSegmentBssStart[];
extern u8 _buffersSegmentBssEnd[];
extern u8 _goddardSegmentStart[];
extern u8 _goddardSegmentEnd[];

s32 ramP[5][2] = {
    {&_buffersSegmentBssStart, &_buffersSegmentBssEnd},
    {&_mainSegmentStart, &_mainSegmentEnd},
    {&_engineSegmentStart, &_engineSegmentEnd},
    {&_framebuffersSegmentBssStart, &_framebuffersSegmentBssEnd},
    {&_goddardSegmentStart, &_goddardSegmentEnd},
};

void puppyprint_calculate_ram_usage(void)
{
    s32 temp[2];
    s32 i = 0;

    for (i = 0; i < 5; i++)
    {
        if (ramP[i][0] == NULL || ramP[i][1] == NULL)
            continue;
        temp[0] = ramP[i][0];
        temp[1] = ramP[i][1];
        ramsizeSegment[i] = temp[1] - temp[0];
    }

    //gEffectsMemoryPool is 0x4000, gObjectsMemoryPool is 0x800. Epic C limitations mean I can't just sizeof their values :)
    ramsizeSegment[5] = 0x4000 + 0x800;
    ramsizeSegment[6] = (SURFACE_NODE_POOL_SIZE * sizeof(struct SurfaceNode)) + (SURFACE_POOL_SIZE * sizeof(struct Surface));
    ramsizeSegment[7] = gAudioHeapSize + gAudioInitPoolSize;
    ramsizeSegment[8] = audioPool[0] + audioPool[1] + audioPool[2] + audioPool[3] + audioPool[4] + audioPool[5] +
                        audioPool[6] + audioPool[7] + audioPool[8] + audioPool[9] + audioPool[10] + audioPool[11];


    //Unaccounted for RAM
    /*ramsizeSegment[32] = mempool - main_pool_available() - (ramsizeSegment[4] + ramsizeSegment[5] +
                         ramsizeSegment[6] + ramsizeSegment[7] + ramsizeSegment[8] + ramsizeSegment[9] + ramsizeSegment[10] +
                         ramsizeSegment[11] + ramsizeSegment[12] + ramsizeSegment[13] + ramsizeSegment[14] + ramsizeSegment[15] +
                         ramsizeSegment[16] + ramsizeSegment[17] + ramsizeSegment[18] + ramsizeSegment[19] + ramsizeSegment[20] +
                         ramsizeSegment[21] + ramsizeSegment[22] + ramsizeSegment[23] + ramsizeSegment[24] + ramsizeSegment[25] +
                         ramsizeSegment[26] + ramsizeSegment[27] + ramsizeSegment[28] + ramsizeSegment[29] + ramsizeSegment[30] +
                         ramsizeSegment[31]);*/
}

void puppyprint_profiler_finished(void)
{
    s32 i = 0;
    benchMark[NUM_BENCH_ITERATIONS] = 0;
    benchMark[NUM_BENCH_ITERATIONS+1] = 0;
    benchmarkTimer = 500;
    for (i = 0; i < NUM_BENCH_ITERATIONS-2; i++)
    {
        benchMark[NUM_BENCH_ITERATIONS] += benchMark[i];
        if (benchMark[i] > benchMark[NUM_BENCH_ITERATIONS+1])
            benchMark[NUM_BENCH_ITERATIONS+1] = benchMark[i];
    }
    benchMark[NUM_BENCH_ITERATIONS] /= NUM_BENCH_ITERATIONS;
}

u8 colourChart[33][3] = {
    {255, 0, 0},
    {0, 0, 255},
    {0, 255, 0},
    {255, 255, 0},
    {255, 0, 255},
    {255, 127, 0},
    {0, 255, 255},
    {51, 255, 51},
    {255, 153, 153},
    {204, 0, 102},
    {0, 153, 153},
    {153, 255, 153},
    {0, 0, 128},
    {128, 0, 128},
    {218, 165, 32},
    {107, 142, 35},
    {188, 143, 143},
    {210, 105, 30},
    {154, 205, 50},
    {165, 42, 42},
    {255, 105, 180},
    {139, 69, 19},
    {250, 240, 230},
    {95, 158, 160},
    {60, 179, 113},
    {255, 69, 0},
    {128, 0, 0},
    {216, 191, 216},
    {244, 164, 96},
    {176, 196, 222},
    {255, 255, 255}};

#define BAR_LENGTH 200

void print_ram_bar(void)
{
    s32 i = 0;
    f32 perfPercentage;
    s32 graphPos = 0;
    s32 prevGraph = 160-(BAR_LENGTH/2);
    s32 ramsize = osGetMemSize();

    prepare_blank_box();

    for (i = 0; i < 32; i++)
    {
        if (ramsizeSegment[i] == 0)
            continue;
        perfPercentage = (f32)ramsizeSegment[i]/ramsize;
        graphPos = prevGraph + CLAMP((BAR_LENGTH*perfPercentage), 1, 160+(BAR_LENGTH/2));
        render_blank_box(prevGraph, 210, graphPos, 218, colourChart[i][0], colourChart[i][1], colourChart[i][2], 255);
        prevGraph = graphPos;
    }
    perfPercentage = (f32)ramsizeSegment[32]/ramsize;
    graphPos = prevGraph + CLAMP((BAR_LENGTH*perfPercentage), 1, 160+(BAR_LENGTH/2));
    render_blank_box(prevGraph, 210, graphPos, 218, 255, 255, 255, 255);
    prevGraph = graphPos;

    render_blank_box(prevGraph, 210, 160+(BAR_LENGTH/2), 218, 0, 0, 0, 255);

    finish_blank_box();
}

u8 ramNames[9][32] = {
    "Buffers",
    "Main",
    "Engine",
    "Framebuffers",
    "Goddard",
    "Pools",
    "Collision",
    "Audio Heap",
    "Audio Pools",
};

void print_ram_overview(void)
{
    s32 i = 0;
    s8 textBytes[32];
    s32 x = 80;
    s32 y = 16;
    s32 drawn = 0;
    prepare_blank_box();
    render_blank_box(0, 0, 320, 240, 0, 0, 0, 192);
    finish_blank_box();
    for (i = 0; i < 33; i++)
    {
        if (drawn == 16)
        {
            x = 240;
            y = 16;
        }
        if (ramsizeSegment[i] == 0)
            continue;
        if (i < 9 && i != 24)
        {
            sprintf(textBytes, "%s: %X", ramNames[i], ramsizeSegment[i]);
        }
        else
        if (i == 32)
        {
            sprintf(textBytes, "Unaccounted: %X", ramsizeSegment[i]);
        }
        else
        {
            sprintf(textBytes, "Segment %02X: %X",i-7, ramsizeSegment[i]);
        }
        print_set_envcolour(colourChart[i][0], colourChart[i][1], colourChart[i][2], 255);
        print_small_text(x, y, textBytes, PRINT_TEXT_ALIGN_CENTRE, PRINT_ALL);
        y += 12;
        drawn++;
    }
}

void puppyprint_render_profiler(void)
{
    f32 perfPercentage[5];
    f32 perfPercentage2[5];
    s32 graphPos = 0;
    s32 prevGraph = 0;
    s8 textBytes[80];

    sprintf(textBytes, "RAM: %06X /%06X (%d_)", main_pool_available(), mempool, (s32)(((f32)main_pool_available()/(f32)mempool)*100));
    print_small_text(160, 224, textBytes, PRINT_TEXT_ALIGN_CENTRE, PRINT_ALL);

    if (!ramViewer)
    {
        print_fps(16,40);
        sprintf(textBytes, "CPU: %dus (%d_)#RSP: %dus (%d_)#RDP: %dus (%d_)", (s32)cpuTime/56, (s32)cpuTime/16666, (s32)rspTime/56, (s32)rspTime/16666, (s32)rdpTime/56, (s32)rdpTime/16666);
        print_small_text(16, 52, textBytes, PRINT_TEXT_ALIGN_LEFT, PRINT_ALL);

        sprintf(textBytes, "OBJ: %d/%d", gObjectCounter, OBJECT_POOL_CAPACITY);
        print_small_text(16, 124, textBytes, PRINT_TEXT_ALIGN_LEFT, PRINT_ALL);

        print_small_text(16, 140, "", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL);
        sprintf(textBytes, "Mario Pos#X: %d#Y: %d#Z: %d#D: %X", (s32)(gMarioState->pos[0]), (s32)(gMarioState->pos[1]), (s32)(gMarioState->pos[2]), (u16)(gMarioState->faceAngle[1]));
        print_small_text(16, 140, textBytes, PRINT_TEXT_ALIGN_LEFT, PRINT_ALL);

        sprintf(textBytes, "Camera Pos#X: %d#Y: %d#Z: %d#D: %X", (s32)(gCamera->pos[0]), (s32)(gCamera->pos[1]), (s32)(gCamera->pos[2]), (u16)(gCamera->yaw));
        print_small_text(304, 140, textBytes, PRINT_TEXT_ALIGN_RIGHT, PRINT_ALL);

        if (benchmarkTimer > 0)
        {
            benchmarkTimer--;
            prepare_blank_box();
            sprintf(textBytes, "Benchmark: %dus#High: %dus", (s32)benchMark[NUM_BENCH_ITERATIONS]/56, (s32)benchMark[NUM_BENCH_ITERATIONS+1]/56);
            render_blank_box(160-(get_text_width(textBytes)/2)-4, 168, 160+(get_text_width(textBytes)/2)+4, 196, 0, 0, 0, 255);
            print_set_envcolour(255, 255, 255, 255);
            print_small_text(160, 170, textBytes, PRINT_TEXT_ALIGN_CENTRE, PRINT_ALL);
            finish_blank_box();
        }

        #define ADDTIMES (f32)MAX(collisionTime[NUM_PERF_ITERATIONS] + graphTime[NUM_PERF_ITERATIONS] + behaviourTime[NUM_PERF_ITERATIONS] + audioTime[NUM_PERF_ITERATIONS] + dmaTime[NUM_PERF_ITERATIONS], 1)

        perfPercentage[0] = (f32)collisionTime[NUM_PERF_ITERATIONS]/ADDTIMES;
        perfPercentage[1] = (f32)graphTime[NUM_PERF_ITERATIONS]/ADDTIMES;
        perfPercentage[2] = (f32)behaviourTime[NUM_PERF_ITERATIONS]/ADDTIMES;
        perfPercentage[3] = (f32)audioTime[NUM_PERF_ITERATIONS]/ADDTIMES;
        perfPercentage[4] = (f32)dmaTime[NUM_PERF_ITERATIONS]/ADDTIMES;

        perfPercentage2[0] = (f32)collisionTime[NUM_PERF_ITERATIONS]/MAX(1666666, ADDTIMES);
        perfPercentage2[1] = (f32)graphTime[NUM_PERF_ITERATIONS]/MAX(1666666, ADDTIMES);
        perfPercentage2[2] = (f32)behaviourTime[NUM_PERF_ITERATIONS]/MAX(1666666, ADDTIMES);
        perfPercentage2[3] = (f32)audioTime[NUM_PERF_ITERATIONS]/MAX(1666666, ADDTIMES);
        perfPercentage2[4] = (f32)dmaTime[NUM_PERF_ITERATIONS]/MAX(1666666, ADDTIMES);

        #undef ADDTIMES

        sprintf(textBytes, "Collision: <COL_99505099>%dus", (s32)collisionTime[NUM_PERF_ITERATIONS]/56);
        print_small_text(304, 40, textBytes, PRINT_TEXT_ALIGN_RIGHT, PRINT_ALL);
        sprintf(textBytes, "Graph: <COL_50509999>%dus", (s32)graphTime[NUM_PERF_ITERATIONS]/56);
        print_small_text(304, 52, textBytes, PRINT_TEXT_ALIGN_RIGHT, PRINT_ALL);
        sprintf(textBytes, "Behaviour: <COL_50995099>%dus", (s32)behaviourTime[NUM_PERF_ITERATIONS]/56);
        print_small_text(304, 64, textBytes, PRINT_TEXT_ALIGN_RIGHT, PRINT_ALL);
        sprintf(textBytes, "Audio: <COL_99995099>%dus", (s32)audioTime[NUM_PERF_ITERATIONS]/56);
        print_small_text(304, 76, textBytes, PRINT_TEXT_ALIGN_RIGHT, PRINT_ALL);
        sprintf(textBytes, "DMA: <COL_99509999>%dus", (s32)dmaTime[NUM_PERF_ITERATIONS]/56);
        print_small_text(304, 88, textBytes, PRINT_TEXT_ALIGN_RIGHT, PRINT_ALL);

        //Render CPU breakdown bar.
        prepare_blank_box();
        graphPos = 224 + CLAMP((80*perfPercentage[0]), 1, 224+80);
        render_blank_box(224, 104, graphPos, 112, 255, 0, 0, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage[1]), 1, 224+80);
        render_blank_box(prevGraph, 104, graphPos, 112, 0, 0, 255, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage[2]), 1, 224+80);
        render_blank_box(prevGraph, 104, graphPos, 112, 0, 255, 0, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage[3]), 1, 224+80);
        render_blank_box(prevGraph, 104, graphPos, 112, 255, 255, 0, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage[4]), 1, 224+80);
        render_blank_box(prevGraph, 104, MAX(304, graphPos), 112, 255, 0, 255, 255);
        //Render secondary CPU breakdown bar, in relation 33333ms of overhead.
        graphPos = 224 + CLAMP((80*perfPercentage2[0]), 1, 224+80);
        render_blank_box(224, 116, graphPos, 124, 255, 0, 0, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage2[1]), 1, 224+80);
        render_blank_box(prevGraph, 116, graphPos, 124, 0, 0, 255, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage2[2]), 1, 224+80);
        render_blank_box(prevGraph, 116, graphPos, 124, 0, 255, 0, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage2[3]), 1, 224+80);
        render_blank_box(prevGraph, 116, graphPos, 124, 255, 255, 0, 255);
        prevGraph = graphPos;
        graphPos += CLAMP((80*perfPercentage2[4]), 1, 224+80);
        render_blank_box(prevGraph, 116, graphPos, 124, 255, 0, 255, 255);
        prevGraph = graphPos;
        render_blank_box(prevGraph, 116, MAX(304, graphPos), 124, 0, 0, 0, 255);
        finish_blank_box();
    }
    else
    {
        if (ramViewer)
            print_ram_overview();
    }
    print_ram_bar();
}

void profiler_update(OSTime *time, OSTime time2)
{
    time[perfIteration] = osGetTime() - time2;
}

void get_average_perf_time(OSTime *time)
{
    //This takes all but the last index of the timer array, and creates an average value, which is written to the last index.
    s32 i = 0;
    s32 total = 0;
    for (i = 0; i < NUM_PERF_ITERATIONS-1; i++)
    {
        total += time[i];
    }
    time[NUM_PERF_ITERATIONS] = total/NUM_PERF_ITERATIONS;
}

void puppyprint_profiler_process(void)
{
    bufferTime[perfIteration] = (IO_READ(DPC_BUFBUSY_REG));
    tmemTime[perfIteration] = (IO_READ(DPC_TMEM_REG));
    busTime[perfIteration] = (IO_READ(DPC_PIPEBUSY_REG));
    OSTime newTime = osGetTime();

    if (gGlobalTimer % 15 == 0)
    {
        get_average_perf_time(scriptTime);
        get_average_perf_time(behaviourTime);
        get_average_perf_time(collisionTime);
        get_average_perf_time(graphTime);
        get_average_perf_time(audioTime);
        get_average_perf_time(dmaTime);
        get_average_perf_time(dmaAudioTime);

        dmaTime[NUM_PERF_ITERATIONS] += dmaAudioTime[NUM_PERF_ITERATIONS];

        get_average_perf_time(rspGenTime);

        get_average_perf_time(bufferTime);
        get_average_perf_time(tmemTime);
        get_average_perf_time(busTime);

        rdpTime = bufferTime[NUM_PERF_ITERATIONS];
        rdpTime = MAX(rdpTime, tmemTime[NUM_PERF_ITERATIONS]);
        rdpTime = MAX(rdpTime, busTime[NUM_PERF_ITERATIONS]);
        cpuTime = scriptTime[NUM_PERF_ITERATIONS];
        rspTime = rspGenTime[NUM_PERF_ITERATIONS];
        puppyprint_calculate_ram_usage();
    }

    gLastOSTime = newTime;
    IO_WRITE(DPC_STATUS_REG, DPC_CLR_CLOCK_CTR | DPC_CLR_CMD_CTR | DPC_CLR_PIPE_CTR | DPC_CLR_TMEM_CTR);

    if (gPlayer1Controller->buttonDown & L_JPAD && gPlayer1Controller->buttonPressed & L_TRIG)
    {
        benchmarkLoop = NUM_BENCH_ITERATIONS;
    }
    else
    if (gPlayer1Controller->buttonPressed & U_JPAD && gPlayer1Controller->buttonPressed & L_TRIG == 0)
    {
        ramViewer ^= 1;
    }

    if (perfIteration++ == NUM_PERF_ITERATIONS-1)
        perfIteration = 0;
}

void print_set_envcolour(s32 r, s32 g, s32 b, s32 a)
{
    if (r != currEnv[0] || g != currEnv[1] || b != currEnv[2] || a != currEnv[3])
    {
        gDPSetEnvColor(gDisplayListHead++, (u8)r, (u8)g, (u8)b, (u8)a);
        currEnv[0] = r;
        currEnv[1] = g;
        currEnv[2] = b;
        currEnv[3] = a;
    }
}

#define BLANK 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT

void prepare_blank_box(void)
{
    gDPSetCombineMode(gDisplayListHead++, BLANK, BLANK);
}

void finish_blank_box(void)
{
    print_set_envcolour(255, 255, 255, 255);
    gSPDisplayList(gDisplayListHead++,dl_hud_img_end);
}

//This does some epic shenanigans to figure out the optimal way to draw this.
//If the width is a multiple of 4, then use fillmode (fastest)
//Otherwise, if there's transparency, it uses that rendermode, which is slower than using opaque rendermodes.
void render_blank_box(s16 x1, s16 y1, s16 x2, s16 y2, u8 r, u8 g, u8 b, u8 a)
{
    s32 cycleadd = 0;
    if (ABS(x1 - x2) % 4 == 0 && a == 255)
    {
        gDPSetCycleType(gDisplayListHead++, G_CYC_FILL);
        gDPSetRenderMode(gDisplayListHead++, G_RM_NOOP, G_RM_NOOP);
        cycleadd = 1;
    }
    else
    {
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
        if (a == 255)
        {
            gDPSetRenderMode(gDisplayListHead++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
        }
        else
        {
            gDPSetRenderMode(gDisplayListHead++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        }
        cycleadd = 0;
    }
    gDPPipeSync(gDisplayListHead++);
    gDPSetFillColor(gDisplayListHead++, GPACK_RGBA5551(r, g, b, 1) << 16 | GPACK_RGBA5551(r, g, b, 1));
    print_set_envcolour(r, g, b, a);
    gDPFillRectangle(gDisplayListHead++, x1, y1, x2-cycleadd, y2-cycleadd);
}


u8 textLen[] = {
    /*0*/ 6, /*1*/ 5, /*2*/ 7, /*3*/ 7, /*4*/ 7, /*5*/ 7, /*6*/ 8, /*7*/ 7, /*8*/ 7, /*9*/ 6, /*-*/ 8, /*+*/ 8, /*(*/ 5, /*)*/ 5, /*!*/ 4, /*?*/ 6,
    /*A*/ 7, /*B*/ 7, /*C*/ 7, /*D*/ 7, /*E*/ 6, /*F*/ 5, /*G*/ 8, /*H*/ 6, /*I*/ 6, /*J*/ 5, /*K*/ 7, /*L*/ 6, /*M*/ 7, /*N*/ 7, /*O*/ 7, /*P*/ 6,
    /*Q*/ 8, /*R*/ 6, /*S*/ 7, /*T*/ 7, /*U*/ 7, /*V*/ 7, /*W*/ 8, /*X*/ 7, /*Y*/ 7, /*Z*/ 7, /*"*/ 5, /*'*/ 2, /*:*/ 3, /*;*/ 3, /*.*/ 3, /*,*/ 3,
    /*a*/ 7, /*b*/ 7, /*c*/ 6, /*d*/ 7, /*e*/ 7, /*f*/ 7, /*g*/ 7, /*h*/ 7, /*i*/ 3, /*j*/ 5, /*k*/ 8, /*l*/ 4, /*m*/ 7, /*n*/ 7, /*o*/ 7, /*p*/ 7,
    /*q*/ 7, /*r*/ 6, /*s*/ 6, /*t*/ 6, /*u*/ 6, /*v*/ 7, /*w*/ 8, /*x*/ 6, /*y*/ 8, /*z*/ 7, /*~*/ 8, /*..*/ 7, /*^*/ 8, /*/*/ 8, /*%*/ 8, /*&*/ 8,
};

#include "level_update.h"

void get_char_from_byte(u8 letter, s32 *textX, s32 *textY, s32 *spaceX, s32 *offsetY)
{
    *offsetY = 0;
    //Line 1
    if (letter >= '0' && letter <= '9')
    {
        *textX = (letter - '0') * 4;
        *textY = 0;
        *spaceX = textLen[letter - '0'];
    }
    else
    //Line 2
    if (letter >= 'A' && letter <= 'P')
    {
        *textX = ((letter - 'A') * 4);
        *textY = 6;
        *spaceX = textLen[letter - 'A'+16];
    }
    else
    //Line 3
    if (letter >= 'Q' && letter <= 'Z')
    {
        *textX = ((letter - 'Q') * 4);
        *textY = 12;
        *spaceX = textLen[letter - 'Q'+32];
    }
    else
    //Line 4
    if (letter >= 'a' && letter <= 'p')
    {
        *textX = ((letter - 'a') * 4);
        *textY = 18;
        *spaceX = textLen[letter - 'a'+48];
    }
    else
    //Line 5
    if (letter >= 'q' && letter <= 'z')
    {
        *textX = ((letter - 'q') * 4);
        *textY = 24;
        *spaceX = textLen[letter - 'q'+64];
    }
    else
    {
        *textX = 128;
        *textY = 0;
        *spaceX = 2;
    }

    switch (letter)
    {
        case '-': *textX = 40; *textY = 0; *spaceX = textLen[10]; break;
        case '+': *textX = 44; *textY = 0; *spaceX = textLen[11]; break;
        case '(': *textX = 48; *textY = 0; *spaceX = textLen[12]; break;
        case ')': *textX = 52; *textY = 0; *spaceX = textLen[13]; break;
        case '!': *textX = 56; *textY = 0; *spaceX = textLen[14]; break;
        case '?': *textX = 60; *textY = 0; *spaceX = textLen[15]; break;

        case '"': *textX = 40; *textY = 12; *spaceX = textLen[42]; break;
        case 0x27: *textX = 44; *textY = 12; *spaceX = textLen[43]; break; //Apostrophe.
        case ':': *textX = 48; *textY = 12; *spaceX = textLen[44]; break;
        case ';': *textX = 52; *textY = 12; *spaceX = textLen[45]; break;
        case '.': *textX = 56; *textY = 12; *spaceX = textLen[46]; break;
        case ',': *textX = 60; *textY = 12; *spaceX = textLen[47]; break;

        case '~': *textX = 40; *textY = 24; *spaceX = textLen[74]; break;
        case '@': *textX = 44; *textY = 24; *spaceX = textLen[75]; break;
        case '^': *textX = 48; *textY = 24; *spaceX = textLen[76]; break;
        case '/': *textX = 52; *textY = 24; *spaceX = textLen[77]; break;
        case '_': *textX = 56; *textY = 24; *spaceX = textLen[78]; break;
        case '&': *textX = 60; *textY = 24; *spaceX = textLen[79]; break;

        case 'g': *offsetY = 1; break;
        case 'q': *offsetY = 1; break;
        case 'p': *offsetY = 3; break;
        case 'y': *offsetY = 1; break;
    }
}

u8 shakeToggle = 0;
u8 waveToggle = 0;

s32 text_iterate_command(u8 *str, s32 i, s32 runCMD)
{
    s32 len = 0;
    while (str[i+len] != '>' && i+len < strlen(str))
        len++;
    len++;

    if (runCMD)
    {
        if (strncmp(str+i, "<COL_xxxxxxxx>", 5) == 0) //Simple text colour effect. goes up to 99 for each, so 99000000 is red.
        {
            s32 r, g, b, a;
            //Each value is taken from the strong. The first is multiplied by 10, because it's a larger significant value, then it adds the next digit onto it.
            r = (str[i+5] - '0')*10;
            r += str[i+6] - '0';
            g = (str[i+7] - '0')*10;
            g += str[i+8] - '0';
            b = (str[i+9] - '0')*10;
            b += str[i+10] - '0';
            a = (str[i+11] - '0')*10;
            a += str[i+12] - '0';
            //Multiply each value afterwards by 2.575f to make 255.
            print_set_envcolour(r*2.575f, g*2.575f, b*2.575f, a*2.575f);
        }
        else
        if (strncmp(str+i, "<FADE_xxxxxxxx,xxxxxxxx,xx>", 6) == 0) //Same as above, except it fades between two colours. The third set of numbers is the speed it fades.
        {
            s32 r, g, b, a, r2, g2, b2, a2, spd, r3, g3, b3, a3, r4, g4, b4, a4;
            r = (str[i+6] - '0')*10;
            r += str[i+7] - '0';
            g = (str[i+8] - '0')*10;
            g += str[i+9] - '0';
            b = (str[i+10] - '0')*10;
            b += str[i+11] - '0';
            a = (str[i+12] - '0')*10;
            a += str[i+13] - '0';
            r2 = (str[i+15] - '0')*10;
            r2 += str[i+16] - '0';
            g2 = (str[i+17] - '0')*10;
            g2 += str[i+18] - '0';
            b2 = (str[i+19] - '0')*10;
            b2 += str[i+20] - '0';
            a2 = (str[i+21] - '0')*10;
            a2 += str[i+22] - '0';
            spd = (str[i+24] - '0')*10;
            spd += str[i+25] - '0';

            //Find the median.
            r3 = (r + r2)*1.2875f;
            g3 = (g + g2)*1.2875f;
            b3 = (b + b2)*1.2875f;
            a3 = (a + a2)*1.2875f;
            //Find the difference.
            r4 = (r - r2)*1.2875f;
            g4 = (g - g2)*1.2875f;
            b4 = (b - b2)*1.2875f;
            a4 = (a - a2)*1.2875f;
            //Now start from the median, and wave from end to end with the difference, to create the fading effect.
            print_set_envcolour(r3 + ((sins(gGlobalTimer*spd*50)) * r4), g3 + ((sins(gGlobalTimer*spd*50)) * g4), b3 + ((sins(gGlobalTimer*spd*50)) * b4), a3 + ((sins(gGlobalTimer*spd*50)) * a4));
        }
        else
        if (strncmp(str+i, "<RAINBOW>", 8) == 0) //Toggles the happy colours :o) Do it again to disable it.
        {
            s32 r, g, b;
            r = (coss(gGlobalTimer*600)+1)*127;
            g = (coss((gGlobalTimer*600)+21845)+1)*127;
            b = (coss((gGlobalTimer*600)-21845)+1)*127;
            print_set_envcolour(r, g, b, 255);
        }
        else
        if (strncmp(str+i, "<SHAKE>", 7) == 0) //Toggles text that shakes on the spot. Do it again to disable it.
        {
            shakeToggle^=1;
        }
        else
        if (strncmp(str+i, "<WAVE>", 6) == 0) //Toggles text that waves around. Do it again to disable it.
        {
            waveToggle^=1;
        }

    }

    return len;
}

s32 get_text_width(u8 *str)
{
    s32 i= 0;
    s32 textPos = 0;
    s32 wideX = 0;
    s32 textX, textY, offsetY, spaceX;

    for (i = 0; i < strlen(str); i++)
    {
    if (str[i] == '#')
    {
        i++;
        textPos = 0;
    }
    if (str[i] == '<')
    {
        i+= text_iterate_command(str, i, FALSE);
    }
    get_char_from_byte(str[i], &textX, &textY, &spaceX, &offsetY);
    textPos+=spaceX+1;
    wideX = MAX(textPos, wideX);
    }
    return wideX;
}

s32 get_text_height(u8 *str)
{
    s32 i= 0;
    s32 textPos = 0;

    for (i = 0; i < strlen(str); i++)
    {
    if (str[i] == '#')
    {
        i++;
        textPos+=12;
    }
    }
    return textPos;
}

void print_small_text(s32 x, s32 y, u8 *str, s32 align, s32 amount)
{
    s32 textX = 0;
    s32 textY = 0;
    s32 offsetY = 0;
    s32 i = 0;
    s32 textPos[2] = {0,0};
    s32 spaceX = 0;
    s32 centreX = 0;
    s32 wideX[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    s32 tx = amount;
    s32 shakePos[2];
    s32 wavePos;
    s32 lines = 0;
    s32 xlu = currEnv[3];
    s32 prevxlu = 256; //Set out of bounds, so it will *always* be different at first.

    shakeToggle = 0;
    waveToggle = 0;

    if (amount == PRINT_ALL)
        tx = strlen(str);
    gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    gDPSetTexturePersp(gDisplayListHead++, G_TP_NONE);
    gDPSetCombineMode(gDisplayListHead++, G_CC_FADEA, G_CC_FADEA);
    gDPSetTextureFilter(gDisplayListHead++, G_TF_POINT);
    if (align == PRINT_TEXT_ALIGN_CENTRE)
    {
        for (i = 0; i < strlen(str); i++)
        {
        if (str[i] == '#')
        {
            i++;
            textPos[0] = 0;
            lines++;
        }
        if (str[i] == '<')
        {
            i+= text_iterate_command(str, i, FALSE);
        }
        get_char_from_byte(str[i], &textX, &textY, &spaceX, &offsetY);
        textPos[0]+=spaceX+1;
        wideX[lines] = MAX(textPos[0], wideX[lines]);
        }
        textPos[0] = -(wideX[0]/2);
    }
    else
    if (align == PRINT_TEXT_ALIGN_RIGHT)
    {
        for (i = 0; i < strlen(str); i++)
        {
        if (str[i] == '#')
        {
            i++;
            textPos[0] = 0;
            lines++;
        }
        else
        {
            textPos[0]+=spaceX+1;
        }
        if (str[i] == '<')
        {
            i+= text_iterate_command(str, i, FALSE);
        }
        get_char_from_byte(str[i], &textX, &textY, &spaceX, &offsetY);

        wideX[lines] = MAX(textPos[0], wideX[lines]);
        }
        textPos[0] = -wideX[0];
    }
    lines = 0;
    gDPLoadTextureBlock_4b(gDisplayListHead++, segmented_to_virtual(small_font), G_IM_FMT_I, 128, 60, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 0, 0, 0, 0, 0);
    for (i = 0; i < tx; i++)
    {
        if (str[i] == '#')
        {
            i++;
            lines++;
            if (align == PRINT_TEXT_ALIGN_RIGHT)
                textPos[0] = -(wideX[lines]);
            else
                textPos[0] = -(wideX[lines]/2);
            textPos[1] += 12;
        }
        if (str[i] == '<')
        {
            i+= text_iterate_command(str, i, TRUE);
        }
        if (shakeToggle)
        {
            shakePos[0] = -1+(random_u16() % 2);
            shakePos[1] = -1+(random_u16() % 2);
        }
        else
        {
            shakePos[0] = 0;
            shakePos[1] = 0;
        }
        if (waveToggle)
        {
            wavePos = (sins((gGlobalTimer*3000)+(i*10000)))*2;
        }
        else
        {
            wavePos = 0;
        }
        get_char_from_byte(str[i], &textX, &textY, &spaceX, &offsetY);
        if (xlu != prevxlu)
        {
            prevxlu = xlu;
            if (xlu > 250)
            {
                gDPSetRenderMode(gDisplayListHead++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
            }
            else
            {
                gDPSetRenderMode(gDisplayListHead++, G_RM_XLU_SURF, G_RM_XLU_SURF);
            }
        }
        gSPScisTextureRectangle(gDisplayListHead++, (x+shakePos[0]+textPos[0]) << 2, (y+shakePos[1]+offsetY+textPos[1]+wavePos) << 2, (x+textPos[0]+shakePos[0]+8) << 2, (y+wavePos+offsetY+shakePos[1]+12+textPos[1]) << 2, G_TX_RENDERTILE, textX << 6, textY << 6, 1 << 10, 1 << 10);
        textPos[0]+=spaceX+1;
    }
    gSPDisplayList(gDisplayListHead++, dl_rgba16_text_end);
}

void render_multi_image(Texture *image, s32 x, s32 y, s32 width, s32 height, s32 scaleX, s32 scaleY, s32 mode)
{
    s32 posW, posH, imW, imH, peakH, maskW, maskH, cycles, num, i, storeMode, modeSC, mOne;
    i = 0;
    num = 256;
    maskW = 1;
    maskH = 1;

    if (mode == G_CYC_COPY)
    {
        gDPSetCycleType(gDisplayListHead++, mode);
        gDPSetRenderMode(gDisplayListHead++, G_RM_NOOP, G_RM_NOOP2);
        modeSC = 4;
        mOne = 1;
    }
    else
    {
        gDPSetCycleType(gDisplayListHead++, mode);
        gDPSetRenderMode(gDisplayListHead++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        modeSC = 1;
        mOne = 0;
    }


    //Find how best to seperate the horizontal. Keep going until it finds a whole value.
    while (1)
    {
        f32 val =  (f32)width/(f32)num;

        if ((s32)val == val && (s32) val >= 1)
        {
            imW = num;
            break;
        }
        num /= 2;
        if (num == 1)
        {
            print_text(32,32,"IMAGE WIDTH FAILURE");
            return;
        }
    }
    //Find the tile height
    imH = 64/(imW/32); //This gets the vertical amount.

    num = 2;
    //Find the width mask
    while (1)
    {
        if ((s32) num == imW)
            break;

        num*=2;
        maskW++;
        if (maskW == 9)
        {
            print_text(32,32,"WIDTH MASK FAILURE");
            return;
        }
    }
    num = 2;
    //Find the height mask
    while (1)
    {
        if ((s32) num == imH)
            break;

        num*=2;
        maskH++;
        if (maskH == 9)
        {
            print_text(32,32,"HEIGHT MASK FAILURE");
            return;
        }
    }
    num = height;
    //Find the height remainder
    peakH = height - (height % imH);
    cycles = (width*peakH)/(imW*imH);

    //Pass 1
    for (i = 0; i < cycles; i++)
    {
        posW = 0;
        posH = (i*imH);
        while (posH >= peakH)
        {
            posW += imW;
            posH -= peakH;
        }
        gDPLoadSync(gDisplayListHead++);
        gDPLoadTextureTile(gDisplayListHead++, image, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height, posW, posH, posW+imW-1, posH+imH-1, 0,  G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, maskW, maskH, 0, 0);
            gSPScisTextureRectangle(gDisplayListHead++, (x + posW) << 2, (y + posH) << 2, (x + posW+imW-mOne) << 2,(y + posH + imH-mOne) << 2, G_TX_RENDERTILE, 0, 0, modeSC << 10, 1 << 10);
    }
    //If there's a remainder on the vertical side, then it will cycle through that too.
    if (height-peakH != 0)
    {
        posW = 0;
        posH = peakH;
        for (i = 0; i < (width/imW); i++)
        {
            posW = i*imW;
            gDPLoadSync(gDisplayListHead++);
            gDPLoadTextureTile(gDisplayListHead++, image, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height, posW, posH, posW+imW-1, height-1, 0,  G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, maskW, maskH, 0, 0);
            gSPScisTextureRectangle(gDisplayListHead++, (x + posW) << 2, (y + posH) << 2, (x + posW+imW-mOne) << 2,(y + posH + imH-mOne) << 2, G_TX_RENDERTILE, 0, 0, modeSC << 10, 1 << 10);
        }
    }
}
