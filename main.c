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
        
        p->Update(1.0, p);

        BeginDrawing();
            DrawRectangle(p->x, p->y, p->w, p->h, p->color);
        EndDrawing();
    }

    DestroyPlayer(p);
    CloseWindow();

    return 0;
}


