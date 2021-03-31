#include "Types.h"

#define Create(Type) \
    Create##Type();

typedef struct Sprite {
    int x;
    int y;
    const_str texture;

} Sprite;

/**
 * Create an initlized Sprite struct
 */
Sprite CreateSprite(const_str texture, s32 x, s32 y);
