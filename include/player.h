#ifndef RL_PLAYER_H
#define RL_PLAYER_H

#include "raylib.h"
#include <stdlib.h>

typedef struct Player
{
    // Properties
    int x;
    int y;
    int speed;
    Color color;

    // Function Pointers
    void (*Update)(double dt, struct Player* p);

} Player;

/**
 * Player Update Method
 */
void Update(double dt, Player* p)
{
    TraceLog(LOG_INFO, "Updating Player");
}

Player* CreatePlayer()
{
    Player* player = (Player*)malloc(sizeof(Player));
    player->x = 10;
    player->y = 10;
    player->speed = 10;
    player->color = ORANGE;

    player->Update = &Update;

    return player;
}


void DestroyPlayer(Player* player) 
{
    free(player);
    TraceLog(LOG_INFO, "Player Object Destroyed");
}



#endif

