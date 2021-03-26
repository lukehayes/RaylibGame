#ifndef RL_PLAYER_H
#define RL_PLAYER_H

#include "raylib.h"
#include <stdlib.h>

typedef struct Player
{
    int x;
    int y;
    int speed;
    Color color;
} Player;

Player* CreatePlayer()
{
    Player* player = (Player*)malloc(sizeof(Player));
    player->x = 10;
    player->y = 10;
    player->speed = 10;
    player->color = ORANGE;

    return player;
}

void DestroyPlayer(Player* player) 
{
    free(player);
    TraceLog(LOG_INFO, "Player Object Freed");
}



#endif

