#include "src/game/envfx_snow.h"

const GeoLayout bbh_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(2, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, bbh_dl_11__Ground_geo),
		GEO_CLOSE_NODE(),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 0, 90, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bbh_dl_11__Ground_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 0, 90, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -10316, 516, -5779, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog_big),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud_003_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -11117, 2339, -4308, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog_big),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud_004_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -5388, 1261, 3841, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog_big),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud2_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -5388, 1261, 3841, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog_big),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud2Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8231, -150, 9439, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog_big),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud3_mesh_layer_1),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_BigCloud3_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8231, -150, 9439, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog_big),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud3Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -13097, -847, 3265, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog_big),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud4_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -13097, -847, 3265, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog_big),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_BigCloud4Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -12627, -380, -1318, 0, -90, 0, bbh_dl_BridgeVisual_mesh_layer_4),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -12627, -380, -1318, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-2048, 4096),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_BridgeVisual_001_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3729, 1998, 3477, 0, -109, 0, bbh_dl_Building_001_mesh_layer_1),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 5514, 1118, 16717, 0, -104, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_CloudIsland_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 9668, 1030, 11428, 0, 26, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_CloudIsland2_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 9668, 1030, 11428, 0, 26, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_CloudIsland2Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -13891, -705, 11030, 0, -83, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_CloudIsland3_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 5514, 1118, 16717, 0, -104, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_CloudIslandConsole_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9600, -215, -15922, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Clouds_001_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 662, 331, -13699, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Clouds_003_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 14826, 2445, -791, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Clouds_005_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 9306, 1771, -11591, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ASM(1, geo_comit_cpu_fog),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Clouds_006_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8371, 96, -6158, 0, -83, 0, bbh_dl_Fence_mesh_layer_4),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -13085, -682, 2987, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_Flower_001_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8665, 67, -5160, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_Flower_002_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -7108, 83, 8784, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_Flower_003_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -5381, 1452, 3149, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_Flower_004_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -12017, 2774, -4382, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_Flower_005_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 17426, 3449, 14743, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3041, 309, -14062, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 4568, 1118, -11972, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13307, 2558, -8487, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats_003_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 17161, 2858, 4642, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats_004_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2501, 1722, 5477, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -13865, -2300, 4880, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8429, 101, -5969, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2549, 2089, -738, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2_003_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8664, 1638, 7538, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2_004_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2527, 1658, 5489, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -2549, 2089, -738, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2Console_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8429, 101, -5969, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2Console_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -13865, -2300, 4880, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2Console_003_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8669, 1587, 7518, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats2Console_004_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 6805, 1862, 19010, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -5504, 2951, 12331, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1345, 2345, 14599, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2832, 129, 15408, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3_003_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -5504, 2951, 12331, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1345, 2345, 14599, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3Console_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2832, 129, 15408, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3Console_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 6805, 1862, 19010, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats3Console_003_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9512, 2684, -4103, 0, -103, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats4_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9512, 2684, -4103, 0, -103, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats4Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9823, -928, 10343, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats5_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -21640, -928, 2035, 0, -45, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats5_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -21640, -928, 2035, 0, -45, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats5Console_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9823, -928, 10343, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlats5Console_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 17427, 3372, 14712, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlatsConsole_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13307, 2558, -8487, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlatsConsole_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 4568, 1118, -11972, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlatsConsole_002_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -3041, 309, -14062, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlatsConsole_003_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 17170, 2780, 4612, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(8192, 20000),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_GenericCloudPlatsConsole_004_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9326, 1155, -9299, 0, -90, 0, bbh_dl_PrisonWalls_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 8847, 684, 17197, 0, -3, 0, bbh_dl_RCloudFenceSet_mesh_layer_4),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_RCloudFenceSet_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 8885, 411, 17504, 0, -3, 0),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_ASM(1, geo_comit_cpu_fog),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_RCloudFenceSet_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13215, 3690, -4773, 0, -90, 0, bbh_dl_Scaffolding_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11136, -1247, 11641, 0, -90, 0, bbh_dl_Scaffolding2_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9081, 1117, 10104, 0, -90, 0, bbh_dl_Shack_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_Shack_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13915, 290, 4883, 0, -90, 0, bbh_dl_Shack_001_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12167, 89, 2119, 0, -90, 0, bbh_dl_Shack_002_mesh_layer_1),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -6345, 183, -2757, 11, 0, 90),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Shell_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -8059, 2918, -3221, 11, 0, 90),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Shell2_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -6709, 1571, 4670, -10, 73, 97),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Shell3_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -10589, 197, 9233, -10, 154, 97),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(-4096, 8192),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Shell4_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7764, 207, -1892, 0, 180, 0, bbh_dl_Sign_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bbh_dl_Sign_mesh_layer_6),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7115, 1551, 3325, 0, 100, 0, bbh_dl_Sign2_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bbh_dl_Sign2_mesh_layer_6),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8498, 219, -1804, 0, -170, 0, bbh_dl_Sign3_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bbh_dl_Sign3_mesh_layer_6),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12131, -533, 5930, 0, -163, 0, bbh_dl_Sign4_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bbh_dl_Sign4_mesh_layer_6),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11610, -533, 5942, 0, 160, 0, bbh_dl_Sign5_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bbh_dl_Sign5_mesh_layer_6),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9199, 75, 10806, 0, -90, 0, bbh_dl_Teleporter_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -15014, 1571, 12501, 0, -109, 0, bbh_dl_ZBuilding_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bbh_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_CUSTOM_COMIT_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bbh_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, bbh_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
