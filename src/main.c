#include "Board/board.h"
#include "Inputs/inputs.h"

struct Position {
    int x, y;
};

int main() {
    while (1) {
        printBoard();
        entradaUsuario();
        break;
    }

    return 0;
}
