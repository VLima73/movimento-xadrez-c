#include <stdio.h>

int main() {

    /* ===============================
       Movimento da TORRE (for)
       Torre move 5 casas para a direita
       =============================== */
    int casasTorre = 5;
    int i;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* ===============================
       Movimento do BISPO (while)
       Bispo move 5 casas na diagonal
       (Cima + Direita)
       =============================== */
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* ===============================
       Movimento da RAINHA (do-while)
       Rainha move 8 casas para a esquerda
       =============================== */
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
