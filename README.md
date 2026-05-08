https://mikelankamp.github.io/fpm/

https://github.com/GeeTwentyFive/fpmlinalg


# Examples

AABB -> AABB intersection:
```c++
bool colliding = gcollision::AABB{
        {-1, -1, -1},
        {1, 1, 1}
}.Intersects(
        gcollision::AABB{
                {0, 0, 0},
                {2, 2, 2}
        }
);
```

Ray -> AABB intersection:
```c++
gcollision::RayHitInfo hit_info = gcollision::IntersectRayAABB(
        {0, 0, 0},
        {0, 0, -1},
        {{2, 2, -2}, {-2, -2, -3}}
);
```
