#include "raylib.h"
#include <math.h>

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);

    Rectangle r1 = {20,20,20,20};

    while (!WindowShouldClose() ) {


        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawRectangleRec(r1, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}


