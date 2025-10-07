#include <stdio.h>

    // ================================
    // Movimentação das peças de xadrez
    // Torre, Bispo e Rainha
    // ================================

int main() {
    // ---------- TORRE ----------
    // Estrutura: for
    // Movimento: 5 casas para a direita

    printf("Movimento da Torre:\n");

    int casas_torre = 5;
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // Linha em branco para separar as peças

    // ---------- BISPO ----------
    // Estrutura: while
    // Movimento: 5 casas na diagonal (Cima e Direita)

    printf("Movimento do Bispo:\n");

    int casas_bispo = 5;
    int contador_bispo = 1;

    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador_bispo);
        contador_bispo++;
    }

    printf("\n"); // Linha em branco para separar as peças

    // ---------- RAINHA ----------
    // Estrutura: do-while
    // Movimento: 8 casas para a esquerda

    printf("Movimento da Rainha:\n");

    int casas_rainha = 8;
    int contador_rainha = 1;

    do {
        printf("Esquerda (%d)\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    // ---------- CAVALO -----------
    // Loops aninhados: for e while
    // Movimento: 3 casas em "L" (2 para baixo, 1 para esquerda)

    printf("\nMovimento do Cavalo:\n");

    int movimento_cavalo = 3;
    for (int i = 1; i <= movimento_cavalo;) {
        if (i <= 2) {
            // Duas casas para baixo
            printf("Baixo (%d)\n", i);
        } else {
            // Uma casa para a esquerda usando while para mover à esquerda
            int j = 1;
            while (j <= 1) {
                printf("Esquerda (%d)\n", j);
                j++;    
            }
            
        }
        i++;    
        
    }
    
    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
