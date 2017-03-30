#ifndef RENDERER_H
#define RENDERER_H

#include <ncurses.h>

#include "utils.h"

void set_up_screen();
void render();
void display(int grid[GRID_H][GRID_W]);

#endif
