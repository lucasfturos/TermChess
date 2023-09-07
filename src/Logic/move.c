#include "move.h"

enum TypePiece mapCharToPiece(char pieceChar) {
    switch (pieceChar) {
    case '♟':
        return PAWN;
    case '♜':
        return ROOK;
    case '♞':
        return KNIGHT;
    case '♝':
        return BISHOP;
    case '♛':
        return QUEEN;
    case '♚':
        return KING;
    case '♙':
        return -PAWN; // Peão branco
    case '♖':
        return -ROOK; // Torre branca
    case '♘':
        return -KNIGHT; // Cavalo branco
    case '♗':
        return -BISHOP; // Bispo branco
    case '♕':
        return -QUEEN; // Rainha branca
    case '♔':
        return -KING; // Rei branco
    default:
        return NONE; // Peça inválida
    }
}

void pawnMoves(int color, int x, int y, int board[SIZE][SIZE]) {
    int forward = (color == 1) ? -1 : 1;
    printf("Eu escolhi você\n");
    if (x + forward >= 0 && x + forward < SIZE) {
        if (board[x + forward][y] == 0) {
            printf("Pode mover para %c%d\n", y + 'a', x + forward + 1);
            board[x + forward][y] = board[x][y];
            board[x][y] = 0;
        }
    }
}

void rookMoves(int color, int x, int y) { printf("Rook\n"); }

void bishopMoves(int color, int x, int y) {}

void knightMoves(int color, int x, int y) {}

void queenMoves(int color, int x, int y) {}

void kingMoves(int color, int x, int y) {}

void getValidMove(Piece *piece, int x, int y, int board[SIZE][SIZE]) {
    switch (piece->type) {
    case PAWN:
        pawnMoves(piece->color, x, y, board);
        break;
    case ROOK:
        rookMoves(piece->color, x, y);
        break;
    case BISHOP:
        bishopMoves(piece->color, x, y);
        break;
    case KNIGHT:
        knightMoves(piece->color, x, y);
        break;
    case QUEEN:
        queenMoves(piece->color, x, y);
        break;
    case KING:
        kingMoves(piece->color, x, y);
        break;
    default:
        puts("Invalid Movement!");
        break;
    }
}
