#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define COLOR_CLEAR "\e[0m"
#define COLOR_BLACK "\e[40m"
#define COLOR_WHITE "\e[47m"
#define COLOR_RED "\e[41m"

char piece_white[][5] = {" ♙", " ♖", " ♘", " ♗", " ♕", " ♔"};
char piece_black[][5] = {" ♟", " ♜", "♞", " ♝", " ♛", " ♚"};

int board[SIZE][SIZE] = {{2, 3, 4, 5, 6, 4, 3, 2}, {1, 1, 1, 1, 1, 1, 1, 1},
                         {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0},
                         {1, 1, 1, 1, 1, 1, 1, 1}, {2, 3, 4, 5, 6, 4, 3, 2}};

void printBoard(int x, int y) {
    puts("\033c");
    puts("    a  b  c  d  e  f  g  h");
    for (size_t row = SIZE; row >= 1; row--) {
        printf("%s %zu ", COLOR_CLEAR, row);
        for (size_t col = 0; col < SIZE; col++) {
            if ((row - 1) == x && col == y) {
                printf("%s%s  ", COLOR_BLACK, piece_black[2]);
            } else if ((row + col) % 2 == 0) {
                printf("%s   ", COLOR_WHITE);
            } else {
                printf("%s   ", COLOR_BLACK);
            }
        }
        printf("%s %zu", COLOR_CLEAR, row);
        putchar('\n');
    }
    puts("    a  b  c  d  e  f  g  h");
}

int main() {
    printBoard(0, 0);
    return 0;
}
