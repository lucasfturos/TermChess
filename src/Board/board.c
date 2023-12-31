#include "board.h"

int board[SIZE][SIZE] = {
    {2, 3, 4, 5, 6, 4, 3, 2},         {1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0},         {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},         {0, 0, 0, 0, 0, 0, 0, 0},
    {-1, -1, -1, -1, -1, -1, -1, -1}, {-2, -3, -4, -5, -6, -4, -3, -2}};

void printPieces(int pieceValue) {
    if (pieceValue < 0) {
        printf("%s ", piece_white[abs(pieceValue) - 1]);
    } else if (pieceValue > 0) {
        printf("%s ", piece_black[abs(pieceValue) - 1]);
    } else {
        printf("  ");
    }
}

void printBoard() {
    // puts("\033c");
    puts("   a b c d e f g h");
    for (size_t row = 0; row < SIZE; row++) {
        int indice = 8 - row;
        printf("%s %d ", COLOR_CLEAR, indice);
        for (size_t col = 0; col < SIZE; col++) {
            if ((row + col) % 2 == 0) {
                printf("%s", COLOR_WHITE);
                printPieces(board[row][col]);
            } else {
                printf("%s", COLOR_BLACK);
                printPieces(board[row][col]);
            }
        }
        printf("%s %d", COLOR_CLEAR, indice);
        putchar('\n');
    }
    puts("   a b c d e f g h");
}
