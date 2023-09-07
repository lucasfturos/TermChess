#ifndef MOVE_H
#define MOVE_H

#include <stdio.h>

#define SIZE 8

enum TypePiece {
    NONE = 0,
    PAWN,   // Peão
    ROOK,   // Torre
    BISHOP, // Bispo
    KNIGHT, // Cavalo
    QUEEN,  // Rainha
    KING,   // Rei
};

enum ColorPiece {
    BLACK = 1,
    WHITE,
};

typedef struct Piece {
    enum TypePiece type;
    enum ColorPiece color;
} Piece;

enum TypePiece mapCharToPiece(char pieceChar);

// Move pieces valid
void pawnMoves(int color, int x, int y, int board[SIZE][SIZE]);
void rookMoves(int color, int x, int y);
void bishopMoves(int color, int x, int y);
void knightMoves(int color, int x, int y);
void queenMoves(int color, int x, int y);
void kingMoves(int color, int x, int y);
void getValidMove(Piece *piece, int x, int y, int board[SIZE][SIZE]);

#endif // !MOVE_H
