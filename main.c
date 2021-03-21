#include "raylib.h"
#include "globals.h"
#include <math.h>


int main(void)
{
    InitWindow(SCR_W, SCR_H, "RayLib Game");
    SetTargetFPS(60);
    
    Image img = LoadImage("assets/bernie.png");
    Texture2D texture = LoadTextureFromImage(img);
    
    static float x = 0;
    static float y = 0;


    while (!WindowShouldClose() ) {

        x += 0.1;
        y += 0.1;

        ClearBackground(BLACK);

        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}


