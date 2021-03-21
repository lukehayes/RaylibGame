#include "raylib.h"
#include "globals.h"
#include "out.h"


int main(void)
{
    InitWindow(SCR_W, SCR_H, "RayLib Game");
    SetTargetFPS(60);

    while (!WindowShouldClose() ) {

        ClearBackground(BLACK);

        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}


