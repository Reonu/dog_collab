Lights1 rmine_camo_lights = gdSPDefLights1(
	0x4A, 0x4A, 0x4A,
	0x95, 0x95, 0x95, 0x28, 0x28, 0x28);

Lights1 rmine_mine_scroll_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx rmine_camo_motos_ci8_aligner[] = {gsSPEndDisplayList()};
u8 rmine_camo_motos_ci8[] = {
	0x00, 0x00, 0x01, 0x02, 0x03, 0x03, 0x03, 0x04, 
	0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 
	0x07, 0x08, 0x03, 0x03, 0x08, 0x09, 0x0a, 0x0a, 
	0x0a, 0x0b, 0x0b, 0x06, 0x06, 0x0c, 0x0d, 0x0d, 
	0x00, 0x0e, 0x0f, 0x10, 0x11, 0x03, 0x12, 0x13, 
	0x0c, 0x0c, 0x09, 0x09, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x0a, 0x15, 
	0x0b, 0x05, 0x10, 0x10, 0x10, 0x11, 0x12, 0x16, 
	0x00, 0x0f, 0x10, 0x10, 0x17, 0x11, 0x03, 0x13, 
	0x09, 0x09, 0x18, 0x07, 0x12, 0x0a, 0x0a, 0x0a, 
	0x09, 0x09, 0x14, 0x09, 0x0a, 0x0a, 0x12, 0x12, 
	0x06, 0x19, 0x10, 0x03, 0x11, 0x10, 0x12, 0x1a, 
	0x0a, 0x0f, 0x10, 0x0f, 0x11, 0x17, 0x03, 0x13, 
	0x09, 0x09, 0x18, 0x0b, 0x15, 0x08, 0x15, 0x12, 
	0x07, 0x07, 0x1b, 0x1c, 0x1d, 0x12, 0x15, 0x12, 
	0x0f, 0x1e, 0x10, 0x10, 0x11, 0x10, 0x12, 0x0c, 
	0x02, 0x03, 0x10, 0x03, 0x10, 0x10, 0x11, 0x13, 
	0x06, 0x0a, 0x0a, 0x12, 0x07, 0x08, 0x07, 0x15, 
	0x12, 0x1d, 0x00, 0x1f, 0x06, 0x09, 0x1b, 0x1b, 
	0x0a, 0x20, 0x10, 0x10, 0x10, 0x10, 0x21, 0x06, 
	0x02, 0x12, 0x03, 0x10, 0x10, 0x10, 0x03, 0x22, 
	0x06, 0x1b, 0x0a, 0x0a, 0x23, 0x1f, 0x07, 0x07, 
	0x24, 0x1d, 0x06, 0x08, 0x07, 0x1b, 0x1b, 0x1b, 
	0x0a, 0x06, 0x10, 0x10, 0x10, 0x25, 0x21, 0x16, 
	0x02, 0x15, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x06, 0x26, 0x0a, 0x0a, 0x27, 0x00, 0x26, 0x1d, 
	0x28, 0x26, 0x08, 0x08, 0x0c, 0x0c, 0x0c, 0x07, 
	0x07, 0x12, 0x02, 0x29, 0x2a, 0x00, 0x1d, 0x1e, 
	0x22, 0x15, 0x15, 0x02, 0x2b, 0x2a, 0x02, 0x02, 
	0x06, 0x00, 0x28, 0x00, 0x07, 0x09, 0x14, 0x14, 
	0x0a, 0x0a, 0x09, 0x07, 0x07, 0x0c, 0x06, 0x06, 
	0x0c, 0x1a, 0x1a, 0x1c, 0x1d, 0x1b, 0x08, 0x2c, 
	0x06, 0x07, 0x0f, 0x02, 0x1c, 0x16, 0x16, 0x24, 
	0x08, 0x08, 0x00, 0x09, 0x0a, 0x14, 0x14, 0x14, 
	0x14, 0x14, 0x0a, 0x09, 0x13, 0x06, 0x06, 0x06, 
	0x06, 0x0c, 0x1c, 0x1a, 0x08, 0x08, 0x03, 0x22, 
	0x02, 0x03, 0x0f, 0x25, 0x24, 0x16, 0x24, 0x00, 
	0x00, 0x00, 0x00, 0x09, 0x14, 0x27, 0x27, 0x14, 
	0x14, 0x0a, 0x09, 0x09, 0x06, 0x06, 0x06, 0x06, 
	0x0c, 0x06, 0x06, 0x05, 0x08, 0x08, 0x03, 0x22, 
	0x0f, 0x03, 0x0f, 0x25, 0x03, 0x03, 0x03, 0x0f, 
	0x07, 0x26, 0x1d, 0x1d, 0x0a, 0x27, 0x27, 0x27, 
	0x14, 0x0a, 0x0a, 0x07, 0x08, 0x02, 0x02, 0x13, 
	0x06, 0x06, 0x04, 0x06, 0x06, 0x0f, 0x25, 0x2d, 
	0x03, 0x25, 0x0f, 0x03, 0x03, 0x03, 0x0f, 0x0f, 
	0x0f, 0x2e, 0x26, 0x26, 0x26, 0x0a, 0x15, 0x0a, 
	0x15, 0x14, 0x0a, 0x07, 0x08, 0x02, 0x02, 0x02, 
	0x06, 0x0c, 0x04, 0x04, 0x06, 0x08, 0x1e, 0x2f, 
	0x02, 0x02, 0x0f, 0x03, 0x03, 0x0f, 0x0f, 0x0f, 
	0x12, 0x12, 0x30, 0x26, 0x26, 0x31, 0x0a, 0x18, 
	0x0a, 0x0a, 0x0a, 0x09, 0x07, 0x13, 0x06, 0x06, 
	0x06, 0x02, 0x03, 0x22, 0x05, 0x08, 0x25, 0x10, 
	0x03, 0x08, 0x0a, 0x08, 0x06, 0x08, 0x0f, 0x0f, 
	0x0a, 0x0a, 0x0a, 0x27, 0x14, 0x18, 0x18, 0x18, 
	0x0a, 0x0a, 0x0a, 0x09, 0x13, 0x0c, 0x13, 0x13, 
	0x06, 0x13, 0x05, 0x2d, 0x25, 0x03, 0x25, 0x10, 
	0x06, 0x27, 0x27, 0x08, 0x06, 0x06, 0x08, 0x0f, 
	0x12, 0x0a, 0x1c, 0x27, 0x27, 0x32, 0x31, 0x15, 
	0x12, 0x08, 0x07, 0x09, 0x13, 0x13, 0x0c, 0x0c, 
	0x06, 0x06, 0x25, 0x1e, 0x25, 0x03, 0x11, 0x10, 
	0x06, 0x27, 0x27, 0x09, 0x07, 0x06, 0x0f, 0x15, 
	0x0f, 0x28, 0x26, 0x2e, 0x26, 0x26, 0x15, 0x15, 
	0x15, 0x15, 0x08, 0x07, 0x13, 0x0c, 0x06, 0x0c, 
	0x06, 0x06, 0x25, 0x1e, 0x25, 0x03, 0x11, 0x10, 
	0x06, 0x0a, 0x18, 0x0a, 0x15, 0x15, 0x08, 0x0f, 
	0x0f, 0x0b, 0x0f, 0x12, 0x0f, 0x2e, 0x12, 0x09, 
	0x07, 0x09, 0x07, 0x0c, 0x03, 0x02, 0x02, 0x02, 
	0x04, 0x04, 0x04, 0x05, 0x25, 0x03, 0x25, 0x1e, 
	0x06, 0x15, 0x31, 0x15, 0x12, 0x12, 0x15, 0x12, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x06, 0x07, 
	0x09, 0x07, 0x07, 0x03, 0x03, 0x02, 0x02, 0x03, 
	0x05, 0x22, 0x05, 0x22, 0x22, 0x03, 0x22, 0x1e, 
	0x03, 0x15, 0x31, 0x12, 0x15, 0x15, 0x15, 0x15, 
	0x0f, 0x0f, 0x12, 0x08, 0x08, 0x08, 0x0f, 0x03, 
	0x06, 0x03, 0x03, 0x03, 0x22, 0x02, 0x03, 0x03, 
	0x22, 0x22, 0x2c, 0x16, 0x33, 0x24, 0x33, 0x2d, 
	0x03, 0x15, 0x31, 0x15, 0x15, 0x15, 0x15, 0x15, 
	0x12, 0x07, 0x08, 0x08, 0x08, 0x08, 0x06, 0x06, 
	0x06, 0x02, 0x02, 0x02, 0x22, 0x22, 0x1e, 0x16, 
	0x16, 0x33, 0x33, 0x33, 0x33, 0x24, 0x33, 0x2d, 
	0x02, 0x08, 0x31, 0x31, 0x12, 0x0a, 0x15, 0x0a, 
	0x07, 0x08, 0x02, 0x08, 0x0f, 0x08, 0x08, 0x08, 
	0x02, 0x02, 0x02, 0x05, 0x22, 0x11, 0x25, 0x16, 
	0x34, 0x34, 0x34, 0x34, 0x33, 0x16, 0x35, 0x20, 
	0x06, 0x07, 0x31, 0x2e, 0x2e, 0x23, 0x26, 0x26, 
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x16, 0x1d, 0x08, 
	0x02, 0x03, 0x25, 0x05, 0x22, 0x1e, 0x1f, 0x16, 
	0x16, 0x16, 0x34, 0x34, 0x33, 0x33, 0x33, 0x2c, 
	0x06, 0x07, 0x36, 0x2e, 0x26, 0x1d, 0x1d, 0x1d, 
	0x37, 0x02, 0x00, 0x00, 0x29, 0x06, 0x02, 0x02, 
	0x02, 0x02, 0x25, 0x25, 0x1e, 0x1e, 0x16, 0x16, 
	0x16, 0x16, 0x16, 0x34, 0x33, 0x33, 0x33, 0x33, 
	0x07, 0x07, 0x31, 0x07, 0x1d, 0x00, 0x00, 0x00, 
	0x02, 0x02, 0x03, 0x03, 0x25, 0x03, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x25, 0x1e, 0x25, 0x03, 0x16, 
	0x16, 0x16, 0x16, 0x16, 0x34, 0x34, 0x16, 0x16, 
	0x02, 0x07, 0x08, 0x08, 0x16, 0x16, 0x16, 0x38, 
	0x02, 0x02, 0x25, 0x25, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x25, 0x25, 0x25, 0x25, 0x25, 0x05, 0x1b, 
	0x06, 0x13, 0x1d, 0x16, 0x02, 0x29, 0x2a, 0x24, 
	0x08, 0x07, 0x08, 0x28, 0x1d, 0x1d, 0x39, 0x2a, 
	0x02, 0x02, 0x02, 0x02, 0x03, 0x0f, 0x02, 0x02, 
	0x03, 0x03, 0x03, 0x25, 0x25, 0x25, 0x06, 0x13, 
	0x06, 0x09, 0x06, 0x3a, 0x19, 0x2c, 0x1e, 0x05, 
	0x02, 0x12, 0x03, 0x03, 0x17, 0x25, 0x21, 0x25, 
	0x25, 0x25, 0x25, 0x02, 0x0f, 0x08, 0x0f, 0x02, 
	0x03, 0x03, 0x02, 0x02, 0x06, 0x06, 0x06, 0x13, 
	0x09, 0x06, 0x17, 0x17, 0x17, 0x17, 0x11, 0x06, 
	0x0c, 0x03, 0x11, 0x11, 0x25, 0x17, 0x25, 0x0f, 
	0x03, 0x22, 0x03, 0x02, 0x0f, 0x03, 0x03, 0x03, 
	0x0f, 0x25, 0x02, 0x02, 0x02, 0x06, 0x13, 0x13, 
	0x06, 0x06, 0x17, 0x25, 0x10, 0x17, 0x10, 0x06, 
	0x0a, 0x0f, 0x17, 0x11, 0x17, 0x17, 0x17, 0x03, 
	0x0f, 0x03, 0x03, 0x06, 0x06, 0x06, 0x0f, 0x03, 
	0x03, 0x03, 0x25, 0x05, 0x06, 0x0d, 0x06, 0x07, 
	0x0c, 0x19, 0x10, 0x11, 0x10, 0x17, 0x17, 0x06, 
	0x0a, 0x11, 0x17, 0x17, 0x17, 0x17, 0x17, 0x03, 
	0x22, 0x06, 0x03, 0x06, 0x06, 0x0f, 0x0f, 0x03, 
	0x03, 0x03, 0x25, 0x04, 0x05, 0x06, 0x0d, 0x06, 
	0x0c, 0x0d, 0x10, 0x10, 0x10, 0x17, 0x10, 0x06, 
	0x07, 0x11, 0x17, 0x17, 0x17, 0x17, 0x25, 0x22, 
	0x03, 0x2d, 0x25, 0x25, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x25, 0x0c, 0x0d, 0x0d, 0x06, 0x06, 0x06, 
	0x05, 0x05, 0x11, 0x10, 0x17, 0x10, 0x11, 0x25, 
	0x12, 0x11, 0x11, 0x11, 0x1e, 0x1e, 0x1e, 0x19, 
	0x0d, 0x11, 0x11, 0x25, 0x11, 0x11, 0x11, 0x11, 
	0x1e, 0x05, 0x0d, 0x0d, 0x05, 0x05, 0x05, 0x22, 
	0x02, 0x02, 0x02, 0x0c, 0x06, 0x25, 0x25, 0x25, 
	
};

Gfx rmine_camo_motos_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rmine_camo_motos_ci8_pal_rgba16[] = {
	0xad, 0x23, 0xb5, 0xa7, 0x73, 0x5b, 0x6b, 0x5b, 
	0x73, 0x99, 0x6b, 0x59, 0x73, 0x9b, 0x7b, 0xdd, 
	0x7b, 0x9d, 0x7c, 0x1d, 0x84, 0x1f, 0x84, 0x21, 
	0x73, 0xdb, 0x6b, 0x99, 0xa5, 0x29, 0x73, 0x9d, 
	0x52, 0x95, 0x5a, 0xd7, 0x7b, 0xdf, 0x7b, 0xdb, 
	0x84, 0x5f, 0x83, 0xdf, 0xa4, 0xe1, 0x4a, 0x53, 
	0x8c, 0x61, 0x6b, 0x57, 0xac, 0xe3, 0x84, 0x1d, 
	0xa5, 0x23, 0xad, 0x25, 0x63, 0x17, 0x83, 0xdd, 
	0x63, 0x57, 0x8c, 0x63, 0x6b, 0x19, 0xad, 0x65, 
	0xa4, 0xe3, 0x63, 0x19, 0xb5, 0x65, 0x8c, 0x5f, 
	0xb5, 0x25, 0x7b, 0x9b, 0x9c, 0xa1, 0x83, 0xdb, 
	0x6b, 0x17, 0x62, 0xd7, 0xb5, 0x67, 0x5a, 0x95, 
	0x9c, 0xa3, 0x8c, 0x21, 0x8c, 0xa1, 0x9c, 0x9f, 
	0xa4, 0x9f, 0x73, 0x57, 0x94, 0xa3, 0xa5, 0x25, 
	0x94, 0x5f, 0xac, 0xe1, 0x63, 0x15, 
};

Gfx rmine_mine_scroll_ci4_aligner[] = {gsSPEndDisplayList()};
u8 rmine_mine_scroll_ci4[] = {
	0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 
	
};

Gfx rmine_mine_scroll_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rmine_mine_scroll_ci4_pal_rgba16[] = {
	0xf8, 0x01, 0xfd, 0xad, 
};

Vtx rmine_Cylinder_006_mesh_layer_1_vtx_cull[8] = {
	{{{-95, 0, 81},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-95, 39, 81},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-95, 39, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-95, 0, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{95, 0, 81},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{95, 39, 81},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{95, 39, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{95, 0, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx rmine_Cylinder_006_mesh_layer_1_vtx_0[10] = {
	{{{0, 0, -100},0, {28, 813},{0x0, 0x76, 0xD0, 0xFF}}},
	{{{0, 29, -29},0, {398, 547},{0x0, 0x6C, 0xBD, 0xFF}}},
	{{{28, 29, -9},0, {386, 445},{0x3F, 0x6D, 0xEC, 0xFF}}},
	{{{-95, 0, -31},0, {633, 1004},{0xD3, 0x76, 0xF2, 0xFF}}},
	{{{-28, 29, -9},0, {496, 574},{0xC1, 0x6D, 0xEC, 0xFF}}},
	{{{-59, 0, 81},0, {999, 488},{0xE4, 0x76, 0x27, 0xFF}}},
	{{{-17, 29, 24},0, {548, 486},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{59, 0, 81},0, {622, -20},{0x1C, 0x76, 0x27, 0xFF}}},
	{{{17, 29, 24},0, {481, 408},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{95, 0, -31},0, {21, 183},{0x2D, 0x76, 0xF2, 0xFF}}},
};

Gfx rmine_Cylinder_006_mesh_layer_1_tri_0[] = {
	gsSPVertex(rmine_Cylinder_006_mesh_layer_1_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 2, 8, 0, 0, 2, 9, 0),
	gsSPEndDisplayList(),
};

Vtx rmine_Cylinder_006_mesh_layer_1_vtx_1[25] = {
	{{{-28, 29, -9},0, {32, 56},{0xC1, 0x6D, 0xEC, 0xFF}}},
	{{{-17, 29, 24},0, {32, 56},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{-12, 39, 17},0, {32, 56},{0xD7, 0x6B, 0x38, 0xFF}}},
	{{{-20, 39, -6},0, {32, 56},{0xBE, 0x6B, 0xEB, 0xFF}}},
	{{{12, 39, 17},0, {32, 56},{0x29, 0x6B, 0x38, 0xFF}}},
	{{{20, 39, -6},0, {32, 56},{0x42, 0x6B, 0xEB, 0xFF}}},
	{{{0, 39, -21},0, {32, 56},{0x0, 0x6B, 0xBB, 0xFF}}},
	{{{-12, 39, 17},0, {32, 56},{0xD7, 0x6B, 0x38, 0xFF}}},
	{{{-20, 39, -6},0, {32, 56},{0xBE, 0x6B, 0xEB, 0xFF}}},
	{{{17, 29, 24},0, {32, 56},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{28, 29, -9},0, {32, 56},{0x3F, 0x6D, 0xEC, 0xFF}}},
	{{{20, 39, -6},0, {32, 56},{0x42, 0x6B, 0xEB, 0xFF}}},
	{{{12, 39, 17},0, {32, 56},{0x29, 0x6B, 0x38, 0xFF}}},
	{{{0, 29, -29},0, {32, 56},{0x0, 0x6C, 0xBD, 0xFF}}},
	{{{-28, 29, -9},0, {32, 56},{0xC1, 0x6D, 0xEC, 0xFF}}},
	{{{-20, 39, -6},0, {32, 56},{0xBE, 0x6B, 0xEB, 0xFF}}},
	{{{0, 39, -21},0, {32, 56},{0x0, 0x6B, 0xBB, 0xFF}}},
	{{{28, 29, -9},0, {32, 56},{0x3F, 0x6D, 0xEC, 0xFF}}},
	{{{0, 29, -29},0, {32, 56},{0x0, 0x6C, 0xBD, 0xFF}}},
	{{{0, 39, -21},0, {32, 56},{0x0, 0x6B, 0xBB, 0xFF}}},
	{{{20, 39, -6},0, {32, 56},{0x42, 0x6B, 0xEB, 0xFF}}},
	{{{-17, 29, 24},0, {32, 56},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{17, 29, 24},0, {32, 56},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{12, 39, 17},0, {32, 56},{0x29, 0x6B, 0x38, 0xFF}}},
	{{{-12, 39, 17},0, {32, 56},{0xD7, 0x6B, 0x38, 0xFF}}},
};

Gfx rmine_Cylinder_006_mesh_layer_1_tri_1[] = {
	gsSPVertex(rmine_Cylinder_006_mesh_layer_1_vtx_1 + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
	gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
	gsSP1Triangle(21, 23, 24, 0),
	gsSPEndDisplayList(),
};


Gfx mat_rmine_camo[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rmine_camo_motos_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 58),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, rmine_camo_motos_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(rmine_camo_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rmine_camo[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_rmine_mine_scroll[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rmine_mine_scroll_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, rmine_mine_scroll_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 3, 2048),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0, G_TX_WRAP | G_TX_NOMIRROR, 2, 0),
	gsDPSetTileSize(0, 0, 0, 12, 12),
	gsSPSetLights1(rmine_mine_scroll_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rmine_mine_scroll[] = {
	gsDPPipeSync(),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx rmine_Cylinder_006_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(rmine_Cylinder_006_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_rmine_camo),
	gsSPDisplayList(rmine_Cylinder_006_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_rmine_camo),
	gsSPDisplayList(mat_rmine_mine_scroll),
	gsSPDisplayList(rmine_Cylinder_006_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_rmine_mine_scroll),
	gsSPEndDisplayList(),
};

Gfx rmine_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

