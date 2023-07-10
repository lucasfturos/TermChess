#include "board.h"
#include "inputs.h"

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
