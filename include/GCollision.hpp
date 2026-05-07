#pragma once

#include <fpmlinalg.hpp>

namespace gcollision {
typedef struct {
        fpmlinalg::Vec3 min;
        fpmlinalg::Vec3 max;
} AABB;
bool IntersectAABBs(const AABB& a, const AABB& b) {return (
        (a.min.x <= b.max.x && a.max.x >= b.min.x) &&
        (a.min.y <= b.max.y && a.max.y >= b.min.y) &&
        (a.min.z <= b.max.z && a.max.z >= b.min.z)
);}

typedef struct {
        bool hit;
        fpm::fixed_16_16 distance;
        fpmlinalg::Vec3 point;
        fpmlinalg::Vec3 normal;
} RayHitInfo;
RayHitInfo IntersectRayAABB(const AABB& target) {
        // TODO
}
}