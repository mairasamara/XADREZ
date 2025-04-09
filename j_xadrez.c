#include <stdio.h>

int main() {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int l = 0;
    while (l < 1) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}