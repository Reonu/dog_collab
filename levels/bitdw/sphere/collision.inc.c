const Collision sphere_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(12),
	COL_VERTEX(0, -517, 0),
	COL_VERTEX(409, -259, 298),
	COL_VERTEX(-146, -236, 450),
	COL_VERTEX(391, -242, -284),
	COL_VERTEX(-462, -231, 0),
	COL_VERTEX(-143, -231, -440),
	COL_VERTEX(611, 294, 71),
	COL_VERTEX(147, 238, -452),
	COL_VERTEX(135, 291, 471),
	COL_VERTEX(-5, 594, -4),
	COL_VERTEX(-382, 236, 277),
	COL_VERTEX(-374, 231, -272),
	COL_TRI_INIT(SURFACE_HARD_NOT_SLIPPERY, 20),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 0, 3),
	COL_TRI(0, 2, 4),
	COL_TRI(0, 4, 5),
	COL_TRI(0, 5, 3),
	COL_TRI(1, 3, 6),
	COL_TRI(3, 7, 6),
	COL_TRI(8, 6, 9),
	COL_TRI(10, 8, 9),
	COL_TRI(11, 10, 9),
	COL_TRI(7, 11, 9),
	COL_TRI(6, 7, 9),
	COL_TRI(2, 8, 10),
	COL_TRI(11, 5, 4),
	COL_TRI(7, 3, 5),
	COL_TRI(8, 2, 1),
	COL_TRI(5, 11, 7),
	COL_TRI(1, 6, 8),
	COL_TRI(11, 4, 10),
	COL_TRI(10, 4, 2),
	COL_TRI_STOP(),
	COL_END()
};
