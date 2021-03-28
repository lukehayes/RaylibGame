#include "player.h"
#include <stdlib.h>

/**
 * Player Update Method
 */
void Update(double dt, Player* p)
{

    p->x = p->x * p->vx * dt;
    p->y = p->y * p->vy * dt;
  

    //TraceLog(LOG_INFO, "Updating Player");
}

Player* CreatePlayer()
{
    Player* player = (Player*)malloc(sizeof(Player));
    player->x = 200;
    player->y = 300;
    player->vx = 10;
    player->vy = 10;
    player->speed = 10;
    player->color = ORANGE;
    player->angle = 0.0f;

    player->Update = &Update;

    return player;
}


void DestroyPlayer(Player* player) 
{
    free(player);
    TraceLog(LOG_INFO, "Player Object Destroyed");
}
