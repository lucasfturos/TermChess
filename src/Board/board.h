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

const char piece_black[][5] = {"♙", "♖", "♘", "♗", "♕", "♔"};
const char piece_white[][5] = {"♟", "♜", "♞", "♝", "♛", "♚"};
const int board[SIZE][SIZE] = {
    {2, 3, 4, 5, 6, 4, 3, 2},         {1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0},         {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},         {0, 0, 0, 0, 0, 0, 0, 0},
    {-1, -1, -1, -1, -1, -1, -1, -1}, {-2, -3, -4, -5, -6, -4, -3, -2}};

void printPieces(int pieceValue);
void printBoard();
