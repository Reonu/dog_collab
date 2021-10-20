Lights1 rainbow_chain_f3d_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx rainbow_chain_weird_texture_ci8_aligner[] = {gsSPEndDisplayList()};
u8 rainbow_chain_weird_texture_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x02, 0x04, 0x05, 0x06, 
	0x07, 0x08, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 
	0x0e, 0x03, 0x0f, 0x10, 0x03, 0x08, 0x11, 0x12, 
	0x0b, 0x13, 0x14, 0x15, 0x16, 0x17, 0x00, 0x18, 
	0x19, 0x1a, 0x1b, 0x1c, 0x1c, 0x02, 0x1d, 0x1e, 
	0x07, 0x0a, 0x0a, 0x08, 0x08, 0x1f, 0x20, 0x21, 
	0x07, 0x22, 0x22, 0x13, 0x03, 0x07, 0x0a, 0x12, 
	0x0b, 0x23, 0x24, 0x25, 0x0f, 0x1e, 0x26, 0x27, 
	0x14, 0x03, 0x1c, 0x28, 0x28, 0x29, 0x16, 0x2a, 
	0x1c, 0x2b, 0x12, 0x0b, 0x1c, 0x2c, 0x1a, 0x07, 
	0x0a, 0x09, 0x0a, 0x0b, 0x2d, 0x28, 0x08, 0x0b, 
	0x1c, 0x2e, 0x1b, 0x2f, 0x2f, 0x28, 0x02, 0x30, 
	0x26, 0x0e, 0x1c, 0x2f, 0x28, 0x2c, 0x21, 0x31, 
	0x07, 0x32, 0x1f, 0x1c, 0x0c, 0x2e, 0x25, 0x2f, 
	0x11, 0x11, 0x11, 0x33, 0x34, 0x02, 0x29, 0x2c, 
	0x0d, 0x1a, 0x07, 0x0a, 0x11, 0x35, 0x28, 0x36, 
	0x14, 0x1e, 0x1c, 0x1c, 0x1c, 0x13, 0x1b, 0x08, 
	0x0a, 0x2f, 0x29, 0x1c, 0x1c, 0x37, 0x1b, 0x07, 
	0x11, 0x11, 0x11, 0x38, 0x1e, 0x39, 0x16, 0x15, 
	0x3a, 0x3b, 0x35, 0x11, 0x11, 0x11, 0x22, 0x3c, 
	0x05, 0x10, 0x29, 0x1c, 0x2c, 0x2d, 0x31, 0x0a, 
	0x11, 0x09, 0x0b, 0x2f, 0x35, 0x08, 0x28, 0x28, 
	0x09, 0x11, 0x0a, 0x0b, 0x3d, 0x3e, 0x3f, 0x40, 
	0x41, 0x03, 0x0a, 0x11, 0x11, 0x11, 0x22, 0x1e, 
	0x3e, 0x42, 0x3c, 0x21, 0x0d, 0x43, 0x07, 0x0a, 
	0x11, 0x11, 0x2b, 0x08, 0x11, 0x11, 0x08, 0x1c, 
	0x0b, 0x22, 0x33, 0x1c, 0x15, 0x44, 0x45, 0x46, 
	0x19, 0x0f, 0x2f, 0x11, 0x11, 0x11, 0x33, 0x47, 
	0x48, 0x24, 0x24, 0x01, 0x42, 0x49, 0x37, 0x2b, 
	0x11, 0x35, 0x0b, 0x2f, 0x11, 0x11, 0x2b, 0x22, 
	0x1c, 0x13, 0x2c, 0x2d, 0x21, 0x1a, 0x4a, 0x3f, 
	0x4b, 0x4c, 0x28, 0x2b, 0x09, 0x12, 0x4d, 0x4e, 
	0x0e, 0x1b, 0x21, 0x4f, 0x3e, 0x26, 0x03, 0x07, 
	0x2b, 0x08, 0x1c, 0x28, 0x08, 0x09, 0x11, 0x35, 
	0x1c, 0x50, 0x51, 0x03, 0x1c, 0x2c, 0x4e, 0x3e, 
	0x52, 0x26, 0x03, 0x28, 0x0b, 0x1c, 0x53, 0x54, 
	0x31, 0x08, 0x28, 0x13, 0x1d, 0x19, 0x4f, 0x29, 
	0x28, 0x1c, 0x55, 0x56, 0x1c, 0x0a, 0x11, 0x35, 
	0x1f, 0x57, 0x4a, 0x10, 0x58, 0x59, 0x5a, 0x52, 
	0x52, 0x26, 0x03, 0x1c, 0x1c, 0x13, 0x5b, 0x0e, 
	0x35, 0x0a, 0x2b, 0x28, 0x3c, 0x3e, 0x41, 0x5c, 
	0x0d, 0x0d, 0x5d, 0x4a, 0x0f, 0x22, 0x2b, 0x33, 
	0x0c, 0x5e, 0x19, 0x30, 0x17, 0x3e, 0x5f, 0x60, 
	0x61, 0x14, 0x56, 0x1c, 0x1c, 0x47, 0x54, 0x1b, 
	0x0a, 0x11, 0x09, 0x22, 0x23, 0x3e, 0x62, 0x63, 
	0x21, 0x02, 0x51, 0x3a, 0x1a, 0x2c, 0x1c, 0x13, 
	0x48, 0x64, 0x65, 0x3e, 0x5f, 0x60, 0x46, 0x46, 
	0x46, 0x19, 0x24, 0x56, 0x2d, 0x02, 0x0e, 0x1c, 
	0x0a, 0x11, 0x09, 0x0b, 0x0d, 0x66, 0x67, 0x1b, 
	0x31, 0x1c, 0x29, 0x4c, 0x4c, 0x5c, 0x59, 0x1d, 
	0x40, 0x00, 0x66, 0x68, 0x5f, 0x46, 0x46, 0x46, 
	0x46, 0x69, 0x66, 0x5b, 0x1b, 0x07, 0x28, 0x1c, 
	0x08, 0x09, 0x12, 0x1f, 0x0d, 0x14, 0x21, 0x31, 
	0x32, 0x08, 0x28, 0x56, 0x42, 0x6a, 0x65, 0x66, 
	0x19, 0x00, 0x52, 0x52, 0x61, 0x6b, 0x6c, 0x46, 
	0x46, 0x46, 0x6d, 0x1a, 0x31, 0x08, 0x08, 0x2f, 
	0x28, 0x0b, 0x28, 0x2c, 0x1d, 0x14, 0x03, 0x07, 
	0x08, 0x08, 0x22, 0x34, 0x16, 0x4a, 0x4a, 0x6e, 
	0x6f, 0x26, 0x00, 0x70, 0x71, 0x4a, 0x30, 0x45, 
	0x46, 0x46, 0x72, 0x25, 0x07, 0x0a, 0x09, 0x08, 
	0x1c, 0x1c, 0x1c, 0x0d, 0x73, 0x26, 0x03, 0x07, 
	0x09, 0x08, 0x33, 0x13, 0x16, 0x10, 0x2a, 0x03, 
	0x03, 0x74, 0x6a, 0x5b, 0x21, 0x03, 0x3c, 0x30, 
	0x5f, 0x46, 0x72, 0x25, 0x07, 0x11, 0x11, 0x2b, 
	0x31, 0x2f, 0x07, 0x23, 0x66, 0x14, 0x03, 0x07, 
	0x2b, 0x08, 0x1f, 0x29, 0x75, 0x1b, 0x1c, 0x1c, 
	0x1c, 0x13, 0x6f, 0x0e, 0x1c, 0x31, 0x29, 0x76, 
	0x45, 0x5f, 0x71, 0x75, 0x07, 0x2b, 0x12, 0x33, 
	0x07, 0x0a, 0x22, 0x34, 0x3a, 0x63, 0x1b, 0x1c, 
	0x28, 0x1f, 0x1c, 0x1c, 0x1c, 0x2f, 0x2b, 0x28, 
	0x1c, 0x29, 0x77, 0x03, 0x28, 0x2f, 0x1c, 0x56, 
	0x26, 0x78, 0x6e, 0x31, 0x2f, 0x2f, 0x33, 0x2c, 
	0x07, 0x08, 0x0b, 0x23, 0x24, 0x03, 0x07, 0x2f, 
	0x1c, 0x03, 0x0f, 0x0e, 0x2f, 0x11, 0x11, 0x2f, 
	0x1c, 0x13, 0x56, 0x1b, 0x28, 0x32, 0x31, 0x1c, 
	0x56, 0x6a, 0x79, 0x31, 0x2b, 0x2b, 0x22, 0x1c, 
	0x28, 0x33, 0x1c, 0x2e, 0x0e, 0x1c, 0x31, 0x32, 
	0x1f, 0x28, 0x28, 0x1c, 0x08, 0x11, 0x11, 0x2b, 
	0x1c, 0x2d, 0x1b, 0x07, 0x08, 0x2f, 0x08, 0x0b, 
	0x29, 0x48, 0x79, 0x1c, 0x08, 0x08, 0x22, 0x2c, 
	0x1c, 0x1c, 0x0d, 0x3c, 0x03, 0x07, 0x22, 0x28, 
	0x07, 0x08, 0x08, 0x1c, 0x22, 0x09, 0x11, 0x33, 
	0x13, 0x25, 0x28, 0x35, 0x09, 0x08, 0x2b, 0x08, 
	0x1c, 0x21, 0x7a, 0x03, 0x28, 0x0b, 0x1c, 0x55, 
	0x7a, 0x2d, 0x1a, 0x06, 0x1c, 0x2f, 0x08, 0x0b, 
	0x08, 0x09, 0x08, 0x1f, 0x28, 0x2b, 0x12, 0x1f, 
	0x53, 0x0e, 0x07, 0x7b, 0x11, 0x7c, 0x7c, 0x22, 
	0x1f, 0x28, 0x56, 0x4f, 0x29, 0x1c, 0x0c, 0x7d, 
	0x10, 0x2d, 0x2d, 0x77, 0x03, 0x07, 0x08, 0x1f, 
	0x08, 0x11, 0x08, 0x1c, 0x21, 0x28, 0x1c, 0x0c, 
	0x26, 0x1e, 0x22, 0x2b, 0x35, 0x08, 0x08, 0x0b, 
	0x08, 0x0b, 0x13, 0x26, 0x04, 0x7d, 0x7e, 0x7f, 
	0x0d, 0x10, 0x0d, 0x50, 0x51, 0x1c, 0x28, 0x1c, 
	0x28, 0x08, 0x0b, 0x2c, 0x59, 0x80, 0x47, 0x1d, 
	0x66, 0x4f, 0x28, 0x08, 0x08, 0x1f, 0x0b, 0x28, 
	0x08, 0x33, 0x13, 0x17, 0x14, 0x7e, 0x7e, 0x7e, 
	0x7a, 0x50, 0x26, 0x6a, 0x4a, 0x21, 0x1c, 0x2c, 
	0x29, 0x1c, 0x1c, 0x55, 0x81, 0x24, 0x4a, 0x66, 
	0x82, 0x26, 0x02, 0x1c, 0x1c, 0x2c, 0x2c, 0x28, 
	0x1f, 0x1c, 0x20, 0x71, 0x4a, 0x7e, 0x2e, 0x16, 
	0x26, 0x3a, 0x6a, 0x64, 0x19, 0x4f, 0x21, 0x83, 
	0x3c, 0x2d, 0x77, 0x58, 0x75, 0x29, 0x13, 0x84, 
	0x3f, 0x00, 0x4a, 0x0d, 0x0d, 0x4e, 0x16, 0x13, 
	0x1c, 0x13, 0x0d, 0x21, 0x43, 0x16, 0x26, 0x3a, 
	0x85, 0x58, 0x24, 0x6a, 0x86, 0x66, 0x39, 0x48, 
	0x17, 0x41, 0x71, 0x03, 0x07, 0x32, 0x28, 0x13, 
	0x1d, 0x87, 0x05, 0x85, 0x42, 0x24, 0x16, 0x01, 
	0x24, 0x7e, 0x1b, 0x1c, 0x1c, 0x34, 0x01, 0x05, 
	0x58, 0x2d, 0x0d, 0x17, 0x88, 0x69, 0x88, 0x45, 
	0x89, 0x3f, 0x79, 0x31, 0x2f, 0x2b, 0x08, 0x1c, 
	0x8a, 0x66, 0x14, 0x81, 0x26, 0x7e, 0x7e, 0x85, 
	0x17, 0x1a, 0x1c, 0x1c, 0x28, 0x29, 0x80, 0x17, 
	0x10, 0x2d, 0x83, 0x48, 0x87, 0x18, 0x18, 0x18, 
	0x00, 0x70, 0x8b, 0x07, 0x35, 0x11, 0x35, 0x0b, 
	0x0d, 0x3e, 0x14, 0x85, 0x8c, 0x1a, 0x43, 0x1a, 
	0x24, 0x1e, 0x1c, 0x0b, 0x28, 0x1c, 0x3c, 0x14, 
	0x4f, 0x56, 0x59, 0x17, 0x89, 0x18, 0x18, 0x00, 
	0x01, 0x7f, 0x1b, 0x07, 0x0a, 0x11, 0x35, 0x0b, 
	0x3d, 0x3e, 0x05, 0x3a, 0x24, 0x1b, 0x28, 0x28, 
	0x8d, 0x1a, 0x1c, 0x28, 0x1c, 0x1c, 0x4e, 0x05, 
	0x14, 0x15, 0x14, 0x65, 0x45, 0x69, 0x6c, 0x8e, 
	0x02, 0x1b, 0x31, 0x08, 0x7c, 0x12, 0x08, 0x1c, 
	0x59, 0x87, 0x87, 0x41, 0x3b, 0x2f, 0x35, 0x2b, 
	0x0b, 0x83, 0x29, 0x1c, 0x1c, 0x0c, 0x71, 0x00, 
	0x00, 0x66, 0x01, 0x24, 0x26, 0x66, 0x8f, 0x67, 
	0x31, 0x31, 0x08, 0x11, 0x11, 0x33, 0x1c, 0x55, 
	0x15, 0x24, 0x26, 0x8c, 0x03, 0x08, 0x11, 0x35, 
	0x22, 0x0c, 0x10, 0x21, 0x0c, 0x59, 0x65, 0x89, 
	
};

Gfx rainbow_chain_weird_texture_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rainbow_chain_weird_texture_ci8_pal_rgba16[] = {
	0x6c, 0xc1, 0x5f, 0x81, 0x7f, 0x9d, 0x3f, 0xb1, 
	0xaf, 0x81, 0x07, 0x81, 0x97, 0x91, 0x04, 0xbf, 
	0x02, 0xbf, 0x01, 0x3f, 0x01, 0x7f, 0x05, 0xbf, 
	0x77, 0xa1, 0xbf, 0x8b, 0x4f, 0xad, 0x4f, 0xab, 
	0xcf, 0x87, 0x00, 0xbf, 0x02, 0x7f, 0x57, 0xa9, 
	0x27, 0x81, 0x7f, 0x81, 0xb7, 0x81, 0x17, 0x81, 
	0xe0, 0x81, 0x3e, 0x01, 0xaf, 0x91, 0x1f, 0xb9, 
	0x07, 0xbf, 0x3f, 0x81, 0x8f, 0x99, 0x06, 0xff, 
	0xa7, 0x91, 0x6f, 0xa5, 0x03, 0xff, 0x87, 0x99, 
	0x9f, 0x81, 0x5f, 0xa7, 0x4f, 0x81, 0x9b, 0x41, 
	0x06, 0x7f, 0x27, 0xb7, 0x9f, 0x97, 0x02, 0x3f, 
	0x37, 0xb3, 0x8f, 0x9b, 0xcf, 0x85, 0x03, 0x7f, 
	0x2e, 0xc1, 0x05, 0xff, 0x05, 0x3f, 0x04, 0x7f, 
	0x6f, 0xa3, 0x01, 0xff, 0x57, 0x87, 0x26, 0x77, 
	0x04, 0x3f, 0x47, 0x81, 0x2f, 0x81, 0x47, 0xad, 
	0x97, 0x8b, 0x6f, 0x91, 0x55, 0x81, 0x6c, 0x81, 
	0x74, 0x01, 0x36, 0xc1, 0x37, 0x81, 0xa7, 0x95, 
	0x46, 0x01, 0x7c, 0x01, 0xe0, 0x41, 0x87, 0x8b, 
	0x6f, 0x81, 0x87, 0x87, 0x57, 0x81, 0x74, 0x41, 
	0x8f, 0x87, 0x36, 0xf3, 0x6f, 0x85, 0xa7, 0x87, 
	0xa7, 0x81, 0x87, 0x91, 0x84, 0x01, 0x57, 0x97, 
	0xcf, 0x81, 0x97, 0x97, 0x9f, 0x95, 0x5f, 0x85, 
	0xc7, 0x8b, 0x97, 0x85, 0x3e, 0x41, 0x97, 0x81, 
	0x67, 0x87, 0x37, 0x85, 0x46, 0x41, 0xc1, 0xc1, 
	0xd1, 0x01, 0x9b, 0x01, 0x2f, 0x01, 0xa7, 0x8b, 
	0x74, 0x81, 0x36, 0x41, 0x26, 0xc1, 0x77, 0x8b, 
	0x45, 0xc1, 0xc9, 0x41, 0x0f, 0x81, 0x5c, 0x81, 
	0xaa, 0x81, 0x4d, 0x81, 0x7f, 0x8b, 0xbf, 0x81, 
	0x1f, 0x01, 0x67, 0x81, 0x4e, 0x01, 0x5d, 0x81, 
	0x77, 0x95, 0x5f, 0xa9, 0x5f, 0x87, 0xd7, 0x85, 
	0x55, 0x41, 0x67, 0x91, 0xe7, 0x81, 0x00, 0xff, 
	0x01, 0xbf, 0xa7, 0x85, 0xdf, 0x81, 0xc7, 0x81, 
	0x5f, 0x8b, 0x8f, 0x81, 0x9b, 0x81, 0xaf, 0x93, 
	0x9f, 0x87, 0x77, 0x81, 0xb2, 0x41, 0x8c, 0x01, 
	0x9a, 0xc1, 0xba, 0x01, 0x57, 0x8b, 0x67, 0x9d, 
	0x87, 0x81, 0x37, 0xb1, 0x37, 0x01, 0x64, 0xc1, 
	
};

Vtx rainbow_chain_000_displaylist_mesh_layer_1_vtx_0[261] = {
	{{{-831, 0, -450},0, {2787, 3056},{0x70, 0x0, 0x3C, 0xFF}}},
	{{{-932, 0, -156},0, {3056, 3056},{0x7D, 0x0, 0x15, 0xFF}}},
	{{{-1118, -326, -187},0, {3056, 2203},{0x39, 0x8F, 0x9, 0xFF}}},
	{{{-997, -326, -539},0, {2787, 2203},{0x33, 0x8F, 0x1B, 0xFF}}},
	{{{-1488, -326, -248},0, {3056, 1349},{0xBD, 0x95, 0xF5, 0xFF}}},
	{{{-1327, -326, -718},0, {2787, 1349},{0xC4, 0x95, 0xE0, 0xFF}}},
	{{{-1674, 0, -279},0, {3056, 496},{0x83, 0x0, 0xEB, 0xFF}}},
	{{{-1492, 0, -808},0, {2787, 496},{0x90, 0x0, 0xC4, 0xFF}}},
	{{{-1488, 326, -248},0, {3056, -357},{0xBD, 0x6B, 0xF5, 0xFF}}},
	{{{-1327, 326, -718},0, {2787, -357},{0xC4, 0x6B, 0xE0, 0xFF}}},
	{{{-1118, 326, -187},0, {3056, -1211},{0x39, 0x71, 0x9, 0xFF}}},
	{{{-997, 326, -539},0, {2787, -1211},{0x33, 0x71, 0x1B, 0xFF}}},
	{{{-932, 0, -156},0, {3056, -2064},{0x7D, 0x0, 0x15, 0xFF}}},
	{{{-831, 0, -450},0, {2787, -2064},{0x70, 0x0, 0x3C, 0xFF}}},
	{{{-767, 326, -834},0, {2517, -1211},{0x27, 0x71, 0x2B, 0xFF}}},
	{{{-640, 0, -695},0, {2517, -2064},{0x56, 0x0, 0x5E, 0xFF}}},
	{{{-455, 326, -1038},0, {2248, -1211},{0x17, 0x71, 0x35, 0xFF}}},
	{{{-767, 326, -834},0, {2517, -1211},{0x27, 0x71, 0x2B, 0xFF}}},
	{{{-640, 0, -695},0, {2517, -2064},{0x56, 0x0, 0x5E, 0xFF}}},
	{{{-380, 0, -866},0, {2248, -2064},{0x33, 0x0, 0x74, 0xFF}}},
	{{{-94, 326, -1129},0, {1978, -1211},{0x4, 0x71, 0x3A, 0xFF}}},
	{{{-78, 0, -942},0, {1978, -2064},{0xA, 0x0, 0x7F, 0xFF}}},
	{{{278, 326, -1098},0, {1709, -1211},{0xF2, 0x71, 0x38, 0xFF}}},
	{{{232, 0, -916},0, {1709, -2064},{0xE1, 0x0, 0x7B, 0xFF}}},
	{{{620, 326, -949},0, {1439, -1211},{0xE0, 0x71, 0x31, 0xFF}}},
	{{{517, 0, -791},0, {1439, -2064},{0xBA, 0x0, 0x6A, 0xFF}}},
	{{{894, 326, -696},0, {1170, -1211},{0xD2, 0x71, 0x24, 0xFF}}},
	{{{746, 0, -581},0, {1170, -2064},{0x9B, 0x0, 0x4E, 0xFF}}},
	{{{1072, 326, -368},0, {900, -1211},{0xC9, 0x71, 0x13, 0xFF}}},
	{{{894, 0, -307},0, {900, -2064},{0x88, 0x0, 0x29, 0xFF}}},
	{{{1133, 326, 0},0, {631, -1211},{0xC6, 0x71, 0x0, 0xFF}}},
	{{{945, 0, 0},0, {631, -2064},{0x81, 0x0, 0x0, 0xFF}}},
	{{{1072, 326, 368},0, {361, -1211},{0xC9, 0x71, 0xED, 0xFF}}},
	{{{1133, 326, 0},0, {631, -1211},{0xC6, 0x71, 0x0, 0xFF}}},
	{{{945, 0, 0},0, {631, -2064},{0x81, 0x0, 0x0, 0xFF}}},
	{{{894, 0, 307},0, {361, -2064},{0x88, 0x0, 0xD7, 0xFF}}},
	{{{894, 326, 696},0, {92, -1211},{0xD2, 0x71, 0xDC, 0xFF}}},
	{{{746, 0, 581},0, {92, -2064},{0x9B, 0x0, 0xB2, 0xFF}}},
	{{{620, 326, 949},0, {-178, -1211},{0xE0, 0x71, 0xCF, 0xFF}}},
	{{{517, 0, 791},0, {-178, -2064},{0xBA, 0x0, 0x96, 0xFF}}},
	{{{278, 326, 1098},0, {-447, -1211},{0xF2, 0x71, 0xC8, 0xFF}}},
	{{{232, 0, 916},0, {-447, -2064},{0xE1, 0x0, 0x85, 0xFF}}},
	{{{-94, 326, 1129},0, {-717, -1211},{0x4, 0x71, 0xC6, 0xFF}}},
	{{{-78, 0, 942},0, {-717, -2064},{0xA, 0x0, 0x81, 0xFF}}},
	{{{-455, 326, 1038},0, {-986, -1211},{0x17, 0x71, 0xCB, 0xFF}}},
	{{{-380, 0, 866},0, {-986, -2064},{0x33, 0x0, 0x8C, 0xFF}}},
	{{{-767, 326, 834},0, {-1256, -1211},{0x27, 0x71, 0xD5, 0xFF}}},
	{{{-640, 0, 695},0, {-1256, -2064},{0x56, 0x0, 0xA2, 0xFF}}},
	{{{-997, 326, 539},0, {-1525, -1211},{0x33, 0x71, 0xE5, 0xFF}}},
	{{{-767, 326, 834},0, {-1256, -1211},{0x27, 0x71, 0xD5, 0xFF}}},
	{{{-640, 0, 695},0, {-1256, -2064},{0x56, 0x0, 0xA2, 0xFF}}},
	{{{-831, 0, 450},0, {-1525, -2064},{0x70, 0x0, 0xC4, 0xFF}}},
	{{{-1118, 326, 187},0, {-1795, -1211},{0x39, 0x71, 0xF7, 0xFF}}},
	{{{-932, 0, 156},0, {-1795, -2064},{0x7D, 0x0, 0xEB, 0xFF}}},
	{{{-1118, 326, -187},0, {-2064, -1211},{0x39, 0x71, 0x9, 0xFF}}},
	{{{-932, 0, -156},0, {-2064, -2064},{0x7D, 0x0, 0x15, 0xFF}}},
	{{{-1488, 326, -248},0, {-2064, -357},{0xBD, 0x6B, 0xF5, 0xFF}}},
	{{{-1488, 326, 248},0, {-1795, -357},{0xBD, 0x6B, 0xB, 0xFF}}},
	{{{-1674, 0, -279},0, {-2064, 496},{0x83, 0x0, 0xEB, 0xFF}}},
	{{{-1674, 0, 279},0, {-1795, 496},{0x83, 0x0, 0x15, 0xFF}}},
	{{{-1488, -326, -248},0, {-2064, 1349},{0xBD, 0x95, 0xF5, 0xFF}}},
	{{{-1488, -326, 248},0, {-1795, 1349},{0xBD, 0x95, 0xB, 0xFF}}},
	{{{-1118, -326, -187},0, {-2064, 2203},{0x39, 0x8F, 0x9, 0xFF}}},
	{{{-1118, -326, 187},0, {-1795, 2203},{0x39, 0x8F, 0xF7, 0xFF}}},
	{{{-932, 0, -156},0, {-2064, 3056},{0x7D, 0x0, 0x15, 0xFF}}},
	{{{-1118, -326, 187},0, {-1795, 2203},{0x39, 0x8F, 0xF7, 0xFF}}},
	{{{-1118, -326, -187},0, {-2064, 2203},{0x39, 0x8F, 0x9, 0xFF}}},
	{{{-932, 0, 156},0, {-1795, 3056},{0x7D, 0x0, 0xEB, 0xFF}}},
	{{{-997, -326, 539},0, {-1525, 2203},{0x33, 0x8F, 0xE5, 0xFF}}},
	{{{-831, 0, 450},0, {-1525, 3056},{0x70, 0x0, 0xC4, 0xFF}}},
	{{{-767, -326, 834},0, {-1256, 2203},{0x27, 0x8F, 0xD5, 0xFF}}},
	{{{-640, 0, 695},0, {-1256, 3056},{0x56, 0x0, 0xA2, 0xFF}}},
	{{{-455, -326, 1038},0, {-986, 2203},{0x17, 0x8F, 0xCB, 0xFF}}},
	{{{-380, 0, 866},0, {-986, 3056},{0x33, 0x0, 0x8C, 0xFF}}},
	{{{-94, -326, 1129},0, {-717, 2203},{0x4, 0x8F, 0xC6, 0xFF}}},
	{{{-78, 0, 942},0, {-717, 3056},{0xA, 0x0, 0x81, 0xFF}}},
	{{{278, -326, 1098},0, {-447, 2203},{0xF2, 0x8F, 0xC8, 0xFF}}},
	{{{232, 0, 916},0, {-447, 3056},{0xE1, 0x0, 0x85, 0xFF}}},
	{{{620, -326, 949},0, {-178, 2203},{0xE0, 0x8F, 0xCF, 0xFF}}},
	{{{517, 0, 791},0, {-178, 3056},{0xBA, 0x0, 0x96, 0xFF}}},
	{{{517, 0, 791},0, {-178, 3056},{0xBA, 0x0, 0x96, 0xFF}}},
	{{{894, -326, 696},0, {92, 2203},{0xD2, 0x8F, 0xDC, 0xFF}}},
	{{{620, -326, 949},0, {-178, 2203},{0xE0, 0x8F, 0xCF, 0xFF}}},
	{{{746, 0, 581},0, {92, 3056},{0x9B, 0x0, 0xB2, 0xFF}}},
	{{{1072, -326, 368},0, {361, 2203},{0xC9, 0x8F, 0xED, 0xFF}}},
	{{{894, 0, 307},0, {361, 3056},{0x88, 0x0, 0xD7, 0xFF}}},
	{{{1133, -326, 0},0, {631, 2203},{0xC6, 0x8F, 0x0, 0xFF}}},
	{{{945, 0, 0},0, {631, 3056},{0x81, 0x0, 0x0, 0xFF}}},
	{{{1072, -326, -368},0, {900, 2203},{0xC9, 0x8F, 0x13, 0xFF}}},
	{{{894, 0, -307},0, {900, 3056},{0x88, 0x0, 0x29, 0xFF}}},
	{{{894, -326, -696},0, {1170, 2203},{0xD2, 0x8F, 0x24, 0xFF}}},
	{{{746, 0, -581},0, {1170, 3056},{0x9B, 0x0, 0x4E, 0xFF}}},
	{{{620, -326, -949},0, {1439, 2203},{0xE0, 0x8F, 0x31, 0xFF}}},
	{{{517, 0, -791},0, {1439, 3056},{0xBA, 0x0, 0x6A, 0xFF}}},
	{{{278, -326, -1098},0, {1709, 2203},{0xF2, 0x8F, 0x38, 0xFF}}},
	{{{232, 0, -916},0, {1709, 3056},{0xE1, 0x0, 0x7B, 0xFF}}},
	{{{232, 0, -916},0, {1709, 3056},{0xE1, 0x0, 0x7B, 0xFF}}},
	{{{-94, -326, -1129},0, {1978, 2203},{0x4, 0x8F, 0x3A, 0xFF}}},
	{{{278, -326, -1098},0, {1709, 2203},{0xF2, 0x8F, 0x38, 0xFF}}},
	{{{-78, 0, -942},0, {1978, 3056},{0xA, 0x0, 0x7F, 0xFF}}},
	{{{-455, -326, -1038},0, {2248, 2203},{0x17, 0x8F, 0x35, 0xFF}}},
	{{{-380, 0, -866},0, {2248, 3056},{0x33, 0x0, 0x74, 0xFF}}},
	{{{-767, -326, -834},0, {2517, 2203},{0x27, 0x8F, 0x2B, 0xFF}}},
	{{{-640, 0, -695},0, {2517, 3056},{0x56, 0x0, 0x5E, 0xFF}}},
	{{{-997, -326, -539},0, {2787, 2203},{0x33, 0x8F, 0x1B, 0xFF}}},
	{{{-831, 0, -450},0, {2787, 3056},{0x70, 0x0, 0x3C, 0xFF}}},
	{{{-1327, -326, -718},0, {2787, 1349},{0xC4, 0x95, 0xE0, 0xFF}}},
	{{{-1022, -326, -1110},0, {2517, 1349},{0xD2, 0x95, 0xCE, 0xFF}}},
	{{{-1492, 0, -808},0, {2787, 496},{0x90, 0x0, 0xC4, 0xFF}}},
	{{{-1149, 0, -1248},0, {2517, 496},{0xAA, 0x0, 0xA2, 0xFF}}},
	{{{-1327, 326, -718},0, {2787, -357},{0xC4, 0x6B, 0xE0, 0xFF}}},
	{{{-1022, 326, -1110},0, {2517, -357},{0xD2, 0x6B, 0xCE, 0xFF}}},
	{{{-1022, 326, -1110},0, {2517, -357},{0xD2, 0x6B, 0xCE, 0xFF}}},
	{{{-1327, 326, -718},0, {2787, -357},{0xC4, 0x6B, 0xE0, 0xFF}}},
	{{{-997, 326, -539},0, {2787, -1211},{0x33, 0x71, 0x1B, 0xFF}}},
	{{{-767, 326, -834},0, {2517, -1211},{0x27, 0x71, 0x2B, 0xFF}}},
	{{{-606, 326, -1382},0, {2248, -357},{0xE5, 0x6B, 0xC2, 0xFF}}},
	{{{-455, 326, -1038},0, {2248, -1211},{0x17, 0x71, 0x35, 0xFF}}},
	{{{-125, 326, -1504},0, {1978, -357},{0xFB, 0x6B, 0xBC, 0xFF}}},
	{{{-94, 326, -1129},0, {1978, -1211},{0x4, 0x71, 0x3A, 0xFF}}},
	{{{370, 326, -1463},0, {1709, -357},{0x10, 0x6B, 0xBE, 0xFF}}},
	{{{278, 326, -1098},0, {1709, -1211},{0xF2, 0x71, 0x38, 0xFF}}},
	{{{825, 326, -1263},0, {1439, -357},{0x25, 0x6B, 0xC7, 0xFF}}},
	{{{620, 326, -949},0, {1439, -1211},{0xE0, 0x71, 0x31, 0xFF}}},
	{{{1191, 326, -927},0, {1170, -357},{0x36, 0x6B, 0xD6, 0xFF}}},
	{{{894, 326, -696},0, {1170, -1211},{0xD2, 0x71, 0x24, 0xFF}}},
	{{{1427, 326, -490},0, {900, -357},{0x41, 0x6B, 0xEA, 0xFF}}},
	{{{1072, 326, -368},0, {900, -1211},{0xC9, 0x71, 0x13, 0xFF}}},
	{{{1509, 326, 0},0, {631, -357},{0x44, 0x6B, 0x0, 0xFF}}},
	{{{1427, 326, -490},0, {900, -357},{0x41, 0x6B, 0xEA, 0xFF}}},
	{{{1072, 326, -368},0, {900, -1211},{0xC9, 0x71, 0x13, 0xFF}}},
	{{{1133, 326, 0},0, {631, -1211},{0xC6, 0x71, 0x0, 0xFF}}},
	{{{1427, 326, 490},0, {361, -357},{0x41, 0x6B, 0x16, 0xFF}}},
	{{{1072, 326, 368},0, {361, -1211},{0xC9, 0x71, 0xED, 0xFF}}},
	{{{1191, 326, 927},0, {92, -357},{0x36, 0x6B, 0x2A, 0xFF}}},
	{{{894, 326, 696},0, {92, -1211},{0xD2, 0x71, 0xDC, 0xFF}}},
	{{{825, 326, 1263},0, {-178, -357},{0x25, 0x6B, 0x39, 0xFF}}},
	{{{620, 326, 949},0, {-178, -1211},{0xE0, 0x71, 0xCF, 0xFF}}},
	{{{370, 326, 1463},0, {-447, -357},{0x10, 0x6B, 0x42, 0xFF}}},
	{{{278, 326, 1098},0, {-447, -1211},{0xF2, 0x71, 0xC8, 0xFF}}},
	{{{-125, 326, 1504},0, {-717, -357},{0xFB, 0x6B, 0x44, 0xFF}}},
	{{{-94, 326, 1129},0, {-717, -1211},{0x4, 0x71, 0xC6, 0xFF}}},
	{{{-606, 326, 1382},0, {-986, -357},{0xE5, 0x6B, 0x3E, 0xFF}}},
	{{{-455, 326, 1038},0, {-986, -1211},{0x17, 0x71, 0xCB, 0xFF}}},
	{{{-1022, 326, 1110},0, {-1256, -357},{0xD2, 0x6B, 0x32, 0xFF}}},
	{{{-606, 326, 1382},0, {-986, -357},{0xE5, 0x6B, 0x3E, 0xFF}}},
	{{{-455, 326, 1038},0, {-986, -1211},{0x17, 0x71, 0xCB, 0xFF}}},
	{{{-767, 326, 834},0, {-1256, -1211},{0x27, 0x71, 0xD5, 0xFF}}},
	{{{-1327, 326, 718},0, {-1525, -357},{0xC4, 0x6B, 0x20, 0xFF}}},
	{{{-997, 326, 539},0, {-1525, -1211},{0x33, 0x71, 0xE5, 0xFF}}},
	{{{-1488, 326, 248},0, {-1795, -357},{0xBD, 0x6B, 0xB, 0xFF}}},
	{{{-1118, 326, 187},0, {-1795, -1211},{0x39, 0x71, 0xF7, 0xFF}}},
	{{{-1674, 0, 279},0, {-1795, 496},{0x83, 0x0, 0x15, 0xFF}}},
	{{{-1492, 0, 808},0, {-1525, 496},{0x90, 0x0, 0x3C, 0xFF}}},
	{{{-1488, -326, 248},0, {-1795, 1349},{0xBD, 0x95, 0xB, 0xFF}}},
	{{{-1327, -326, 718},0, {-1525, 1349},{0xC4, 0x95, 0x20, 0xFF}}},
	{{{-1118, -326, 187},0, {-1795, 2203},{0x39, 0x8F, 0xF7, 0xFF}}},
	{{{-997, -326, 539},0, {-1525, 2203},{0x33, 0x8F, 0xE5, 0xFF}}},
	{{{-1022, -326, 1110},0, {-1256, 1349},{0xD2, 0x95, 0x32, 0xFF}}},
	{{{-767, -326, 834},0, {-1256, 2203},{0x27, 0x8F, 0xD5, 0xFF}}},
	{{{-767, -326, 834},0, {-1256, 2203},{0x27, 0x8F, 0xD5, 0xFF}}},
	{{{-606, -326, 1382},0, {-986, 1349},{0xE5, 0x95, 0x3E, 0xFF}}},
	{{{-1022, -326, 1110},0, {-1256, 1349},{0xD2, 0x95, 0x32, 0xFF}}},
	{{{-455, -326, 1038},0, {-986, 2203},{0x17, 0x8F, 0xCB, 0xFF}}},
	{{{-125, -326, 1504},0, {-717, 1349},{0xFB, 0x95, 0x44, 0xFF}}},
	{{{-94, -326, 1129},0, {-717, 2203},{0x4, 0x8F, 0xC6, 0xFF}}},
	{{{370, -326, 1463},0, {-447, 1349},{0x10, 0x95, 0x42, 0xFF}}},
	{{{278, -326, 1098},0, {-447, 2203},{0xF2, 0x8F, 0xC8, 0xFF}}},
	{{{825, -326, 1263},0, {-178, 1349},{0x25, 0x95, 0x39, 0xFF}}},
	{{{620, -326, 949},0, {-178, 2203},{0xE0, 0x8F, 0xCF, 0xFF}}},
	{{{1191, -326, 927},0, {92, 1349},{0x36, 0x95, 0x2A, 0xFF}}},
	{{{894, -326, 696},0, {92, 2203},{0xD2, 0x8F, 0xDC, 0xFF}}},
	{{{1427, -326, 490},0, {361, 1349},{0x41, 0x95, 0x16, 0xFF}}},
	{{{1072, -326, 368},0, {361, 2203},{0xC9, 0x8F, 0xED, 0xFF}}},
	{{{1509, -326, 0},0, {631, 1349},{0x44, 0x95, 0x0, 0xFF}}},
	{{{1133, -326, 0},0, {631, 2203},{0xC6, 0x8F, 0x0, 0xFF}}},
	{{{1133, -326, 0},0, {631, 2203},{0xC6, 0x8F, 0x0, 0xFF}}},
	{{{1427, -326, -490},0, {900, 1349},{0x41, 0x95, 0xEA, 0xFF}}},
	{{{1509, -326, 0},0, {631, 1349},{0x44, 0x95, 0x0, 0xFF}}},
	{{{1072, -326, -368},0, {900, 2203},{0xC9, 0x8F, 0x13, 0xFF}}},
	{{{1191, -326, -927},0, {1170, 1349},{0x36, 0x95, 0xD6, 0xFF}}},
	{{{894, -326, -696},0, {1170, 2203},{0xD2, 0x8F, 0x24, 0xFF}}},
	{{{825, -326, -1263},0, {1439, 1349},{0x25, 0x95, 0xC7, 0xFF}}},
	{{{620, -326, -949},0, {1439, 2203},{0xE0, 0x8F, 0x31, 0xFF}}},
	{{{370, -326, -1463},0, {1709, 1349},{0x10, 0x95, 0xBE, 0xFF}}},
	{{{278, -326, -1098},0, {1709, 2203},{0xF2, 0x8F, 0x38, 0xFF}}},
	{{{-125, -326, -1504},0, {1978, 1349},{0xFB, 0x95, 0xBC, 0xFF}}},
	{{{-94, -326, -1129},0, {1978, 2203},{0x4, 0x8F, 0x3A, 0xFF}}},
	{{{-606, -326, -1382},0, {2248, 1349},{0xE5, 0x95, 0xC2, 0xFF}}},
	{{{-455, -326, -1038},0, {2248, 2203},{0x17, 0x8F, 0x35, 0xFF}}},
	{{{-1022, -326, -1110},0, {2517, 1349},{0xD2, 0x95, 0xCE, 0xFF}}},
	{{{-767, -326, -834},0, {2517, 2203},{0x27, 0x8F, 0x2B, 0xFF}}},
	{{{-606, -326, -1382},0, {2248, 1349},{0xE5, 0x95, 0xC2, 0xFF}}},
	{{{-1022, -326, -1110},0, {2517, 1349},{0xD2, 0x95, 0xCE, 0xFF}}},
	{{{-1149, 0, -1248},0, {2517, 496},{0xAA, 0x0, 0xA2, 0xFF}}},
	{{{-682, 0, -1554},0, {2248, 496},{0xCD, 0x0, 0x8C, 0xFF}}},
	{{{-1022, 326, -1110},0, {2517, -357},{0xD2, 0x6B, 0xCE, 0xFF}}},
	{{{-606, 326, -1382},0, {2248, -357},{0xE5, 0x6B, 0xC2, 0xFF}}},
	{{{-140, 0, -1691},0, {1978, 496},{0xF6, 0x0, 0x81, 0xFF}}},
	{{{-125, 326, -1504},0, {1978, -357},{0xFB, 0x6B, 0xBC, 0xFF}}},
	{{{417, 0, -1645},0, {1709, 496},{0x1F, 0x0, 0x85, 0xFF}}},
	{{{370, 326, -1463},0, {1709, -357},{0x10, 0x6B, 0xBE, 0xFF}}},
	{{{928, 0, -1421},0, {1439, 496},{0x46, 0x0, 0x96, 0xFF}}},
	{{{825, 326, -1263},0, {1439, -357},{0x25, 0x6B, 0xC7, 0xFF}}},
	{{{1339, 0, -1042},0, {1170, 496},{0x65, 0x0, 0xB2, 0xFF}}},
	{{{1191, 326, -927},0, {1170, -357},{0x36, 0x6B, 0xD6, 0xFF}}},
	{{{1605, 0, -551},0, {900, 496},{0x78, 0x0, 0xD7, 0xFF}}},
	{{{1427, 326, -490},0, {900, -357},{0x41, 0x6B, 0xEA, 0xFF}}},
	{{{1697, 0, 0},0, {631, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{1605, 0, -551},0, {900, 496},{0x78, 0x0, 0xD7, 0xFF}}},
	{{{1427, 326, -490},0, {900, -357},{0x41, 0x6B, 0xEA, 0xFF}}},
	{{{1509, 326, 0},0, {631, -357},{0x44, 0x6B, 0x0, 0xFF}}},
	{{{1605, 0, 551},0, {361, 496},{0x78, 0x0, 0x29, 0xFF}}},
	{{{1427, 326, 490},0, {361, -357},{0x41, 0x6B, 0x16, 0xFF}}},
	{{{1339, 0, 1042},0, {92, 496},{0x65, 0x0, 0x4E, 0xFF}}},
	{{{1191, 326, 927},0, {92, -357},{0x36, 0x6B, 0x2A, 0xFF}}},
	{{{928, 0, 1421},0, {-178, 496},{0x46, 0x0, 0x6A, 0xFF}}},
	{{{825, 326, 1263},0, {-178, -357},{0x25, 0x6B, 0x39, 0xFF}}},
	{{{417, 0, 1645},0, {-447, 496},{0x1F, 0x0, 0x7B, 0xFF}}},
	{{{370, 326, 1463},0, {-447, -357},{0x10, 0x6B, 0x42, 0xFF}}},
	{{{-140, 0, 1691},0, {-717, 496},{0xF6, 0x0, 0x7F, 0xFF}}},
	{{{-125, 326, 1504},0, {-717, -357},{0xFB, 0x6B, 0x44, 0xFF}}},
	{{{-682, 0, 1554},0, {-986, 496},{0xCD, 0x0, 0x74, 0xFF}}},
	{{{-606, 326, 1382},0, {-986, -357},{0xE5, 0x6B, 0x3E, 0xFF}}},
	{{{-1149, 0, 1248},0, {-1256, 496},{0xAA, 0x0, 0x5E, 0xFF}}},
	{{{-682, 0, 1554},0, {-986, 496},{0xCD, 0x0, 0x74, 0xFF}}},
	{{{-606, 326, 1382},0, {-986, -357},{0xE5, 0x6B, 0x3E, 0xFF}}},
	{{{-1022, 326, 1110},0, {-1256, -357},{0xD2, 0x6B, 0x32, 0xFF}}},
	{{{-1492, 0, 808},0, {-1525, 496},{0x90, 0x0, 0x3C, 0xFF}}},
	{{{-1327, 326, 718},0, {-1525, -357},{0xC4, 0x6B, 0x20, 0xFF}}},
	{{{-1327, -326, 718},0, {-1525, 1349},{0xC4, 0x95, 0x20, 0xFF}}},
	{{{-1022, -326, 1110},0, {-1256, 1349},{0xD2, 0x95, 0x32, 0xFF}}},
	{{{-606, -326, 1382},0, {-986, 1349},{0xE5, 0x95, 0x3E, 0xFF}}},
	{{{-140, 0, 1691},0, {-717, 496},{0xF6, 0x0, 0x7F, 0xFF}}},
	{{{-125, -326, 1504},0, {-717, 1349},{0xFB, 0x95, 0x44, 0xFF}}},
	{{{417, 0, 1645},0, {-447, 496},{0x1F, 0x0, 0x7B, 0xFF}}},
	{{{370, -326, 1463},0, {-447, 1349},{0x10, 0x95, 0x42, 0xFF}}},
	{{{928, 0, 1421},0, {-178, 496},{0x46, 0x0, 0x6A, 0xFF}}},
	{{{825, -326, 1263},0, {-178, 1349},{0x25, 0x95, 0x39, 0xFF}}},
	{{{1339, 0, 1042},0, {92, 496},{0x65, 0x0, 0x4E, 0xFF}}},
	{{{825, -326, 1263},0, {-178, 1349},{0x25, 0x95, 0x39, 0xFF}}},
	{{{1191, -326, 927},0, {92, 1349},{0x36, 0x95, 0x2A, 0xFF}}},
	{{{1339, 0, 1042},0, {92, 496},{0x65, 0x0, 0x4E, 0xFF}}},
	{{{1605, 0, 551},0, {361, 496},{0x78, 0x0, 0x29, 0xFF}}},
	{{{1427, -326, 490},0, {361, 1349},{0x41, 0x95, 0x16, 0xFF}}},
	{{{1697, 0, 0},0, {631, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{1509, -326, 0},0, {631, 1349},{0x44, 0x95, 0x0, 0xFF}}},
	{{{1605, 0, -551},0, {900, 496},{0x78, 0x0, 0xD7, 0xFF}}},
	{{{1427, -326, -490},0, {900, 1349},{0x41, 0x95, 0xEA, 0xFF}}},
	{{{1339, 0, -1042},0, {1170, 496},{0x65, 0x0, 0xB2, 0xFF}}},
	{{{1191, -326, -927},0, {1170, 1349},{0x36, 0x95, 0xD6, 0xFF}}},
	{{{928, 0, -1421},0, {1439, 496},{0x46, 0x0, 0x96, 0xFF}}},
	{{{825, -326, -1263},0, {1439, 1349},{0x25, 0x95, 0xC7, 0xFF}}},
	{{{417, 0, -1645},0, {1709, 496},{0x1F, 0x0, 0x85, 0xFF}}},
	{{{370, -326, -1463},0, {1709, 1349},{0x10, 0x95, 0xBE, 0xFF}}},
	{{{-140, 0, -1691},0, {1978, 496},{0xF6, 0x0, 0x81, 0xFF}}},
	{{{370, -326, -1463},0, {1709, 1349},{0x10, 0x95, 0xBE, 0xFF}}},
	{{{-125, -326, -1504},0, {1978, 1349},{0xFB, 0x95, 0xBC, 0xFF}}},
	{{{-140, 0, -1691},0, {1978, 496},{0xF6, 0x0, 0x81, 0xFF}}},
	{{{-682, 0, -1554},0, {2248, 496},{0xCD, 0x0, 0x8C, 0xFF}}},
	{{{-606, -326, -1382},0, {2248, 1349},{0xE5, 0x95, 0xC2, 0xFF}}},
};

Gfx rainbow_chain_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 4, 6, 0),
	gsSP1Triangle(8, 9, 4, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(6, 8, 10, 0),
	gsSP1Triangle(6, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 112, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 128, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 144, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 4, 6, 0),
	gsSP1Triangle(8, 9, 4, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 160, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 176, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 192, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 208, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 224, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 0, 4, 0),
	gsSP1Triangle(6, 7, 0, 0),
	gsSP1Triangle(7, 1, 0, 0),
	gsSP1Triangle(7, 8, 1, 0),
	gsSP1Triangle(8, 9, 1, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 240, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(rainbow_chain_000_displaylist_mesh_layer_1_vtx_0 + 256, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_rainbow_chain_f3d_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rainbow_chain_weird_texture_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 143),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, rainbow_chain_weird_texture_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(rainbow_chain_f3d_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rainbow_chain_f3d_material[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx rainbow_chain_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_rainbow_chain_f3d_material),
	gsSPDisplayList(rainbow_chain_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_rainbow_chain_f3d_material),
	gsSPEndDisplayList(),
};

Gfx rainbow_chain_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

