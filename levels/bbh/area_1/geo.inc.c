#include "src/game/envfx_snow.h"

const GeoLayout bbh_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1483, -157, 13488, bbh_dl_BigCloud_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, -4357, 94, 13123, bbh_dl_BigCloud_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, 18122, 79, -1739, bbh_dl_BigCloud_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 14080, 452, -6200, bbh_dl_BigCloud_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, -756, -352, 17490, bbh_dl_Bridge_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, -12784, 245, 3080, bbh_dl_Clouds_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, -10364, 325, 14251, bbh_dl_Gate_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, -12613, 892, 1861, bbh_dl_GenericCloudPlat_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -5969, 101, 13387, bbh_dl_GenericCloudPlat_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 16908, 129, 626, bbh_dl_GenericCloudPlat_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -7323, -757, 4104, bbh_dl_Metal_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 4077, 874, -7723, bbh_dl_Metal_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -10250, 1072, 14251, bbh_dl_PrisonWalls_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 18738, 193, -4929, bbh_dl_RCloudFenceSet_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, bbh_dl_RCloudFenceSet_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 6194, 77, 20232, bbh_dl_Shack_mesh_layer_1),
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
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
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
		GEO_DISPLAY_LIST(1, bbh_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, bbh_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
