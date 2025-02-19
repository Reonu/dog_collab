#ifndef SURFACE_COLLISION_H
#define SURFACE_COLLISION_H

#include <PR/ultratypes.h>

#include "types.h"

#include "engine/extended_bounds.h"

#define CELL_HEIGHT_LIMIT           32767
#define FLOOR_LOWER_LIMIT           -32768
#define FLOOR_LOWER_LIMIT_MISC      (FLOOR_LOWER_LIMIT + 1000)
// same as FLOOR_LOWER_LIMIT_MISC, explicitly for shadow.c
#define FLOOR_LOWER_LIMIT_SHADOW    (FLOOR_LOWER_LIMIT + 1000)

#define is_outside_level_bounds(xPos, zPos) (((xPos) <= -LEVEL_BOUNDARY_MAX) || ((xPos) >=  LEVEL_BOUNDARY_MAX) || ((zPos) <= -LEVEL_BOUNDARY_MAX) || ((zPos) >=  LEVEL_BOUNDARY_MAX))

#define get_surface_height_at_location(xPos, zPos, surf) (-((xPos) * (surf)->normal.x + (surf)->normal.z * (zPos) + (surf)->originOffset) / (surf)->normal.y)

#define SURFACE_YAW(s) (atan2s(((s)->normal.z), ((s)->normal.x)))

#define RAYCAST_FIND_FLOOR  (1 << 0)
#define RAYCAST_FIND_WALL   (1 << 1)
#define RAYCAST_FIND_CEIL   (1 << 2)
#define RAYCAST_FIND_WATER  (1 << 3)
#define RAYCAST_FIND_ALL    (0xFFFFFFFF)

struct WallCollisionData
{
    /*0x00*/ f32 x, y, z;
    /*0x0C*/ f32 offsetY;
    /*0x10*/ f32 radius;
    /*0x14*/ s16 unused;
    /*0x16*/ s16 numWalls;
    /*0x18*/ struct Surface *walls[MAX_REFEREMCED_WALLS];
};

s32 f32_find_wall_collision(f32 *xPtr, f32 *yPtr, f32 *zPtr, f32 offsetY, f32 radius);
s32 find_wall_collisions(struct WallCollisionData *colData);
void resolve_and_return_wall_collisions(Vec3f pos, f32 offset, f32 radius, struct WallCollisionData *collisionData);
f32 find_ceil(f32 posX, f32 posY, f32 posZ, struct Surface **pceil);
f32 find_floor_height(f32 x, f32 y, f32 z);
f32 find_floor(f32 xPos, f32 yPos, f32 zPos, struct Surface **pfloor);
f32 find_room_floor(f32 x, f32 y, f32 z, struct Surface **pfloor);
s32 find_water_level_and_floor(s32 x, s32 z, struct Surface **pfloor);
s32 find_water_level(s32 x, s32 z);
s32 find_poison_gas_level(s32 x, s32 z);
void debug_surface_list_info(f32 xPos, f32 zPos);

#endif // SURFACE_COLLISION_H
