#include <stdio.h>

int main() {
    // ---------- Movimento da TORRE ----------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ---------- Movimento do BISPO ----------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ---------- Movimento da RAINHA ----------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    printf("\n");

    // ---------- Movimento do CAVALO ----------
    printf("Movimento do Cavalo (2 casas para Baixo, 1 para a Esquerda):\n");

    // Loop externo: simula 1 movimento em "L"
    for (int l = 0; l < 1; l++) {
        // Primeiro movimento: 2 casas para baixo
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }

        // Segundo movimento: 1 casa para a esquerda
        int j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
