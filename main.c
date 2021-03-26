#include "raylib.h"
#include "globals.h"
#include "input.h"
#include "player.h"
#include <math.h>

int main(void)
{
    InitWindow(SCR_W, SCR_H, "RayLib Game");
    SetTargetFPS(60);
    
    /*Image img = LoadImage("assets/bernie.png");*/
    /*Texture2D texture = LoadTextureFromImage(img);*/

    Player* p = CreatePlayer();

    static float x = 0;
    static float y = 0;

    while (!WindowShouldClose() ) {

        x += 0.1;
        y += 0.1;
    
        rlGetInput(p);

        ClearBackground(BLACK);
        
        p->update(1.0);

        BeginDrawing();
            DrawRectangle(p->x,p->y,10,10, p->color);
        EndDrawing();
    }

    DestroyPlayer(p);
    CloseWindow();

    return 0;
}


