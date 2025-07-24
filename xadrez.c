#include <stdio.h>

// ---------- Função Recursiva: TORRE (Direita) ----------
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ---------- Função Recursiva: BISPO com loops aninhados ----------
void moverBispoRecursivo(int vertical) {
    if (vertical <= 0) return;

    for (int horizontal = 0; horizontal < 1; horizontal++) {
        printf("Cima Direita\n"); // Movimento diagonal: 1 vertical + 1 horizontal
    }

    moverBispoRecursivo(vertical - 1);
}

// ---------- Função Recursiva: RAINHA (Esquerda) ----------
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------- Movimento complexo do CAVALO (2 para cima, 1 para direita) ----------
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para a Direita):\n");

    int movimentosFeitos = 0;

    for (int i = 2; i >= 1; i--) { // i representa movimento vertical (Cima)
        if (i == 1) {
            for (int j = 0; j < 2; j++) { // j representa tentativa de movimento lateral
                if (j == 1) {
                    printf("Direita\n");
                    movimentosFeitos++;
                    break; // terminou o movimento em L
                } else {
                    continue; // ignora a primeira tentativa
                }
            }
        }
        printf("Cima\n");
        movimentosFeitos++;
        if (movimentosFeitos >= 3) break;
    }
}

// ---------- Função principal ----------
int main() {
    // ---------- Movimento da TORRE ----------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    printf("\n");

    // ---------- Movimento do BISPO ----------
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    moverBispoRecursivo(5);

    printf("\n");

    // ---------- Movimento da RAINHA ----------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    printf("\n");

    // ---------- Movimento do CAVALO ----------
    moverCavalo();

    return 0;
}
