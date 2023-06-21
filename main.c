#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define COLOR_CLEAR "\e[0m"
#define COLOR_BLACK "\e[40m"
#define COLOR_WHITE "\e[47m"

int board[SIZE][SIZE];
char piece_white[][5] = {" ♔", " ♕", " ♖", " ♗", " ♘", " ♙"};
char piece_black[][5] = {" ♚", " ♛", " ♜", " ♝", " ♞", " ♟"};

void printBoard() {
    puts("    A  B  C  D  E  F  G  H");
    for (size_t row = SIZE; row >= 1; row--) {
        printf("%s %zu ", COLOR_CLEAR, row);
        for (size_t col = 0; col < SIZE; col++) {
            if (row % 2) {
                col % 2 ? printf("%s   ", COLOR_BLACK)
                        : printf("%s   ", COLOR_WHITE);
            } else {
                col % 2 ? printf("%s   ", COLOR_WHITE)
                        : printf("%s   ", COLOR_BLACK);
            }
        }
        printf("%s %zu", COLOR_CLEAR, row );
        putchar('\n');
    }
    puts("    A  B  C  D  E  F  G  H");
}

int main() {
    printBoard();
    return 0;
}
