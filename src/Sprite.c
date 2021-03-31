#include "Sprite.h"

Sprite CreateSprite(const_str texture, s32 x, s32 y)
{
    Sprite s;
    s.x = 0;
    s.y = 0;
    s.texture = texture;

    return s;
}
