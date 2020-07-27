#include <stdlib.h>

typedef struct {
    int w;
    int h;
    Color color;
    bool checked;
} Cell;

typedef struct {
    int w;
    int h;
    Color c;
} Grid;

void BuildGrid(Cell** grid) {

    for (int i = 0; i < GRID_X - 1; i++) {

        grid[i] = malloc(sizeof(Cell) * GRID_Y);

        for (int j = 0; j < GRID_Y - 1; j++) {

            Cell c;
            c.w = CELL_W;
            c.h = CELL_H;
            c.color = WHITE;
            c.checked = false;

            grid[i][j] = c;
        }
    }
}


void FreeGrid(Cell** grid) {

    for (int i = 0; i < GRID_X - 1; i++) {
        free(grid[i]);
    }

    free(grid);
}


void DrawCellGrid(Cell** grid) {

    for (int i = 0; i < GRID_X - 1; i++) {
        for (int j = 0; j < GRID_Y - 1; j++) {
            Cell c = grid[i][j];

            DrawRectangle(200 + i * SPACE, 150 + j * SPACE, c.w , c.h, c.color);
        }
    }
}


void PlaceCell(Cell** grid, int x, int y) {
        Cell c;
        c.w = CELL_W;
        c.h = CELL_H;
        c.color = BEIGE;
        c.checked = false;

        grid[x][y] = c;
}


void Update() {

    for (int i = 0; i < GRID_X - 1; i++) {
        for (int j = 0; j < GRID_X - 1; j++) {
        
        }
    }
}
