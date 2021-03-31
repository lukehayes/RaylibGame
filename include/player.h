#ifndef RL_PLAYER_H
#define RL_PLAYER_H

#include "raylib.h"

typedef struct Player
{
    // Properties
    int x;
    int y;
    int w;
    int h;
    int vx;
    int vy;
    int speed;
    float angle;
    Color color;

    // Function Pointers
    void (*Update)(double dt, struct Player* p);

} Player;

/**
 * Player Update Method
 */
void Update(double dt, Player* p);

Player* CreatePlayer();

void DestroyPlayer(Player* player);



#endif

