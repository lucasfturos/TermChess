#include <stdio.h>

enum TypePiece {
    NONE = 0,
    PEAO,
    TORRE,
    BISPO,
    CAVALO,
    RAINHA,
    REI,
};

enum ColorPiece {
    BLACK = 1,
    WHITE,
};

struct Piece {
    enum TypePiece type;
    enum ColorPiece color;
};
