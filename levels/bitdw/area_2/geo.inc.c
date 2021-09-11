#include "src/game/envfx_snow.h"

const GeoLayout bitdw_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(5, 11274, 3060, -3927, bitdw_dl_area_2_torus_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, 11274, 3060, -3927, bitdw_dl_area_2_torus_001_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 10193, -7329, -2930),
		GEO_DISPLAY_LIST(1, bitdw_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 10193, -10741, -15458, bitdw_dl_final_warp_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 4117, 8418, 17605, bitdw_dl_pipe_1_final_002_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bitdw_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_GREEN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bitdw_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(5, bitdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, bitdw_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
