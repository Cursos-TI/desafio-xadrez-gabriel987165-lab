#include <stdio.h>

// TORRE
void torre(int i) {
    if (i <= 0) return;
    printf("Direita\n");
    torre(i - 1);
}

// BISPO
void bispo(int j) {
    if (j >= 5) return;

    for (int i = 0; i < 1; i++) {
        for (int k = 0; k < 1; k++) {
            printf("Cima Direita\n");
        }
    }

    bispo(j + 1);
}

// RAINHA
void rainha(int k) {
    if (k <= 0) return;
    printf("Esquerda\n");
    rainha(k - 1);
}

// CAVALO
void cavalo() {
    int L = 1;
    while (L--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        printf("\n");
    }
}

int main() {
    // TORRE
    printf("Movimento da Torre:\n");
    torre(5);

    // BISPO
    printf("\nMovimento do Bispo:\n");
    bispo(0);

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    rainha(8);

    // CAVALO
    printf("\nMovimento do Cavalo:\n");
    cavalo();

    return 0;
}
