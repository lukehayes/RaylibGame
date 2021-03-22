/**
 * Manage all of the user input in these functions
 */

#ifndef RL_INPUT_H
#define RL_INPUT_H

#include "raylib.h"
#include "player.h"
#include <stdio.h>

void rlGetInput(Player* player)
{
    if (IsKeyPressed(KEY_A)) {
        player->x -= 10;
    }

    if (IsKeyPressed(KEY_D)) {
        player->x += 10;
    }

    if (IsKeyPressed(KEY_W)) {
        player->y -= 10;
    }

    if (IsKeyPressed(KEY_S)) {
        player->y += 10;
    }
}

#endif
