#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "actors/group14.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM, wdw_geo_0005802), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_NPC, koopa_npc_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMCELEVATOR, hmcelevator_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_DOORS, doors_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x03, 0x33, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_HMC, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_HMC, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_HMC_WOODEN_DOOR, 341, 1491, -732, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMCELEVATOR, 908, 1441, -40, 0, 0, 0, 0x00010000, bhvHMCElevator),
		OBJECT(MODEL_NONE, 583, -85, -859, 0, 0, 0, 0x00000000, bhvFazAmbient),
		OBJECT(MODEL_NONE, 908, 252, -40, 0, 0, 0, 0x000C0000, bhvPerservePosWarp),
		OBJECT(MODEL_NONE, -1333, 0, 1846, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		TERRAIN(hmc_area_1_collision),
		ROOMS(hmc_area_1_collision_rooms),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, hmc_area_2),
		WARP_NODE(0x10, LEVEL_HMC, 0x02, 0x10, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_HMC, 0x02, 0x11, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_HMC, 0x02, 0x10, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_HMC, 0x02, 0x11, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x03, 0x34, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x03, 0x66, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_HMC, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_HMC, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_1UP, 906, 10061, -5211, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_BLACK_BOBOMB, -2285, 4215, -6054, 0, 0, 0, 0x008A0000, bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 1301, 4215, -3520, 0, 0, 0, 0x00850000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, -5829, 4215, -1128, 0, 0, 0, 0x008F0000, bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 4357, 5576, -3617, 0, 0, 0, 0x00910000, bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 10408, 6156, -8841, 0, 0, 0, 0x00930000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 6139, 5575, -9562, 0, 0, 0, 0x00940000, bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 5971, 5575, -9591, 0, 0, 0, 0x00950000, bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 3845, 5576, -4302, 0, 0, 0, 0x00860000, bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 5945, 6097, -11022, 0, 0, 0, 0x00960000, bhvBobombBuddy),
		OBJECT(MODEL_EXCLAMATION_BOX, 1822, 7404, -5973, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 3048, 4518, -536, 0, 0, 0, 0x00050000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -9121, 4409, -6413, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1908, 4728, -8540, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -1131, 4518, -2877, 0, 0, 0, 0x00050000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -4091, 6149, -2187, 0, 0, 0, 0x00050000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 3828, 6095, -11009, 0, 0, 0, 0x00060000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 5076, 5841, -8573, 0, 0, 0, 0x00050000, bhvExclamationBox),
		OBJECT(MODEL_NONE, -44, 7050, -6497, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 841, 4501, -5781, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -491, 4215, -1029, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2303, 4215, -1205, 0, 146, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5338, 4215, -976, 0, -165, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5759, 5889, -2212, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1530, 5889, -1545, 0, -16, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2062, 4215, -4342, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1065, 4215, -6132, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2590, 4215, -6140, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4438, 5575, -7657, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9792, 6280, -10987, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 8845, 6156, -9366, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -8582, 5749, -7756, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -7234, 4003, -8196, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6665, 3400, -10456, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -9549, 4369, -4623, 0, 0, 0, 0x00100000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -8635, 3457, -3889, 0, 90, 0, 0x18120000, bhvWarp),
		OBJECT(MODEL_NONE, -8643, 4130, -6845, 0, -90, 0, 0x00110000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -9625, 3185, -10410, 0, 90, 0, 0x18130000, bhvWarp),
		OBJECT(MODEL_HMC_METAL_DOOR, -1031, 5889, -3768, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_METAL_DOOR, -276, 5264, -8945, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_METAL_DOOR, 2100, 4390, -8945, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_METAL_DOOR, 3963, 5576, -4187, 0, -180, 0, 0x00000000, bhvDoorDog),
		OBJECT(MODEL_HMC_METAL_DOOR, 10746, 6156, -8053, 0, -180, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMCELEVATOR, 908, 4219, 26, 0, 0, 0, 0x00000000, bhvHMCElevator),
		OBJECT_WITH_ACTS(MODEL_HMC_DOORS, 234, 4559, -3226, 0, 0, 0, 0x00000000, bhvHMCDoors, ACT_1),
		OBJECT_WITH_ACTS(MODEL_HMC_DOORS, 234, 4945, -3226, 0, 0, 0, 0x00000000, bhvHMCDoors, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_GOOMBA, 189, 4215, -710, 0, 0, 0, 0x008D0000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, 536, 4273, -1500, 0, 0, 0, 0x00820000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, -3690, 4215, 1259, 0, 0, 0, 0x008E0000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, -3153, 5672, -1312, 0, 0, 0, 0x009E0000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, -3, 4215, -707, 0, 0, 0, 0x008C0000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, 1782, 8317, -6346, 0, 0, 0, 0x009D0000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, 3020, 4448, -9942, 0, 0, 0, 0x00970000, bhvGoombaDialog),
		OBJECT(MODEL_GOOMBA, 9202, 6156, -8840, 0, 0, 0, 0x00920000, bhvGoombaDialog),
		OBJECT(MODEL_KOOPA_NPC, 3105, 4215, -379, 0, 0, 0, 0x00830000, bhvKoopaDialog),
		OBJECT_WITH_ACTS(MODEL_KOOPA_NPC, 1440, 4215, -811, 0, 17, 0, 0x009B0000, bhvKoopaDialog, ACT_6),
		OBJECT(MODEL_KOOPA_NPC, 764, 4215, -1584, 0, 0, 0, 0x00840000, bhvKoopaDialog),
		OBJECT_WITH_ACTS(MODEL_KOOPA_NPC, 1056, 4215, -1583, 0, 0, 0, 0x009A0000, bhvKoopaDialog, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(MODEL_KOOPA_NPC, -4795, 4215, -3039, 0, 0, 0, 0x00900000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, 195, 4501, -5567, 0, 0, 0, 0x009C0000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, 5361, 4215, -7555, 0, 0, 0, 0x00880000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, 5531, 4215, -7523, 0, 0, 0, 0x00890000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, 764, 5264, -9307, 0, 0, 0, 0x00990000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, 761, 5264, -9099, 0, 0, 0, 0x00980000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, -1251, 5889, -3667, 0, 0, 0, 0x009F0000, bhvKoopaDialog),
		OBJECT(MODEL_KOOPA_NPC, -2469, 4215, -5984, 0, 0, 0, 0x008B0000, bhvKoopaDialog),
		MARIO_POS(0x02, 0, 891, 4263, -489),
		OBJECT(MODEL_RED_COIN, -3238, 4730, -1577, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, -4315, 4208, -2658, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_RED_COIN, -3352, 5373, -1309, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4016, 4701, 905, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2374, 4215, 1168, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3701, 5739, -288, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3685, 4683, -3357, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2390, 5889, 1113, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3763, 5819, -2304, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 32, 5741, -6433, 0, 0, 0, 0x00780000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -51, 6477, -5851, 0, 0, 0, 0x00300000, bhvPoleGrabbing),
		OBJECT(MODEL_WDW_SQUARE_FLOATING_PLATFORM, 1727, 6797, -7715, 0, 0, 0, 0x00000000, bhvWdwSquareFloatingPlatform2),
		OBJECT(MODEL_WDW_SQUARE_FLOATING_PLATFORM, 588, 6797, -7851, 0, 0, 0, 0x00000000, bhvWdwSquareFloatingPlatform2),
		OBJECT(MODEL_NONE, 1762, 8538, -7649, 0, 0, 0, 0x00D00000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 1762, 7287, -7649, 0, 0, 0, 0x00300000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 3459, 4485, -10554, 0, 0, 0, 0x00700000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -8582, 5749, -7756, 0, 0, 0, 0x00A00000, bhvCoinFormation),
		OBJECT(MODEL_DOG, 6070, 4215, -8526, 0, 0, 0, 0x00000000, bhvGoddardHMC),
		OBJECT(MODEL_NONE, 903, 4263, -393, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 908, 8255, 0, 0, 0, 0, 0x000B0000, bhvPerservePosWarp),
		OBJECT(MODEL_STAR, 827, 8702, -6554, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 5093, 5877, -3585, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_NONE, -4315, 4543, -2658, 0, 0, 0, 0x02000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_STAR, 10768, 6579, -5364, 0, 0, 0, 0x03000000, bhvStar),
		TERRAIN(hmc_area_2_collision),
		ROOMS(hmc_area_2_collision_rooms),
		MACRO_OBJECTS(hmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x02, 0, 891, 4263, -489),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
