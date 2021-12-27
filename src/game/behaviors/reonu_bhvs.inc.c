#include "src/game/game_init.h"
#include "src/game/level_update.h"

void bhv_2d_snapper_loop(void) {
    if (o->oDistanceToMario < 5000) {
        if (gMarioState->floor != NULL) {
                g2dMode = 1;
                g2dPosZ = o->oPosZ;
                g2dPosX = o->oPosX;
            }
    } else {
        g2dMode = 0;
    }
    switch ((gForce2 >> 8) & 0xFF)  {
        case 0x06:
        case 0x07:
            if (g2dPosZ) {
                if (!g2dMode) {
                    gMarioState->pos[2] = g2dPosZ;
                } else {
                    f32 d = g2dPosZ - gMarioState->pos[2];
                    if (d < -60) {
                        d = -60;
                    }
                    if (d > 60) {
                        d = 60;
                    }
                    gMarioState->pos[2] += d;
                }
            } else if (!g2dPosZ) {
                g2dPosZ = gMarioState->pos[2];
            }
            break;
        case 0x08:
        case 0x09:
             if (g2dPosX) {
                if (!g2dMode) {
                    gMarioState->pos[0] = g2dPosX;
                } else {
                    f32 d = g2dPosX - gMarioState->pos[0];
                    if (d < -60) {
                        d = -60;
                    }
                    if (d > 60) {
                        d = 60;
                    }
                    gMarioState->pos[0] += d;
                }
            } else if (!g2dPosX) {
                g2dPosX = gMarioState->pos[0];
            }
            break;       
        default:
            g2dPosX = 0;
            break;
    }

}