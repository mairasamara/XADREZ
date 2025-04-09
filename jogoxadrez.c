#include <stdio.h>

// Função recursiva para a Torre
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para o Bispo (movimento diagonal)
void mover_bispo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    mover_bispo(casas - 1);
}

// Função recursiva para a Rainha (movimento para a esquerda)
void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função para o movimento do Cavalo (2 casas para cima e 1 para a direita)
void mover_cavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados
void mover_bispo_com_loops(int casas_verticais, int casas_horizontais) {
    if (casas_verticais <= 0 || casas_horizontais <= 0) return;
    
    // Loop externo para o movimento vertical (para cima)
    for (int i = 0; i < casas_verticais; i++) {
        // Loop interno para o movimento horizontal (para direita)
        for (int j = 0; j < casas_horizontais; j++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    mover_torre(5);
    
    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    mover_bispo(5);
    
    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    mover_rainha(8);
    
    // Movimento do Cavalo (2 casas para cima e 1 para a direita)
    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();
    
    // Movimento do Bispo com Loops Aninhados (5 casas verticais e 5 horizontais)
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    mover_bispo_com_loops(5, 5);

    return 0;
}
