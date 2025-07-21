#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE com estrutura for
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do BISPO com estrutura while
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Simulação do movimento da RAINHA com estrutura do-while
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
