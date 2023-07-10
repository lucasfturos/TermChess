#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define COLOR_CLEAR "\033[0m"
#define COLOR_BLACK "\033[48;5;44;0;65m"
#define COLOR_WHITE "\033[48;5;213;105;255m"

struct Position {
    int x, y;
};

void printPieces(int pieceValue);
void printBoard();
