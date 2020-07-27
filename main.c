#include "raylib.h"
#include "globals.h"
#include "grid.h"
#include "out.h"


int main(void)
{

    Cell** Grid = malloc(sizeof(Cell*) * GRID_X);

    BuildGrid(Grid);
    PlaceCell(Grid, 5,5);

    InitWindow(SCR_W, SCR_H, "Sand Simulator");

    SetTargetFPS(60);


    while (!WindowShouldClose() ) {

        ClearBackground(BLACK);

        BeginDrawing();
            DrawCellGrid(Grid);
        EndDrawing();
    }

    CloseWindow();

    FreeGrid(Grid);

    return 0;
}


