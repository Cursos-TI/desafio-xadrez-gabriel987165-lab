#include <stdio.h>

int main() {
    // ------------------- TORRE -------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // cada passo para a direita
    }

    // ------------------- BISPO -------------------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n"); // diagonal = duas direções
        j++;
    }

    // ------------------- RAINHA -------------------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
  
   
    // ------------------- CAVALO -------------------
    printf("\nMovimento da Cavalo:\n");
     int L = 1; 

    while (L--) {
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");  
        }
        printf("Esquerda\n");   
        printf("\n ");
    }

    

    return 0;
}