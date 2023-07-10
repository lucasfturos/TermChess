#include "inputs.h"

int validaInput(char *input) {
    regex_t rx;
    if (regcomp(&rx, "^[a-h][1-8]$", 0) != 0) {
        return 0;
    }
    int result = regexec(&rx, input, 0, NULL, 0);
    regfree(&rx);
    return result == 0;
}

void entradaUsuario() {
    struct Position pos_init, pos_fim;
    char peca_get[4], peca_set[4];
    do {
        puts("Escolha a peça pela sua posição.\nEx: 'a1' escolhe a torre.");
        puts("Informe a posição:");
        fgets(peca_get, sizeof(peca_get), stdin);
        peca_get[strcspn(peca_get, "\n")] = '\0';

        if (!validaInput(peca_get) || strlen(peca_get) != 2) {
            puts("Entrada inválida");
        }

    } while (!validaInput(peca_get));

    pos_init.x = peca_get[0] - 'a';
    pos_init.y = peca_get[1] - '1';

    do {
        puts("Escolha a posição que quer colocar a peça.");
        puts("Informe a posição:");
        fgets(peca_set, sizeof(peca_set), stdin);
        peca_set[strcspn(peca_set, "\n")] = '\0';

        if (!validaInput(peca_set) || strlen(peca_set) != 2) {
            puts("Entrada inválida");
        }

    } while (!validaInput(peca_set));

    pos_fim.x = peca_set[0] - 'a';
    pos_fim.y = peca_set[1] - '1';

    printf("Pos i: %d %d | Pos f: %d %d\n", pos_init.x, pos_init.y, pos_fim.x,
           pos_fim.y);
}