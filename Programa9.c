#include <stdio.h>
int main() {
    int i, j;
    int soma_peca = 0;
    int soma_total = 0;
    int total_pecas = 0;

    printf("Pecas do Domino e suas somas:\n");
    printf("-----------------------------\n");

    for (i = 0; i <= 6; i++) {
        
        for (j = i; j <= 6; j++) {
            soma_peca = i + j;
            soma_total += soma_peca;
            total_pecas++;

            printf("[%d|%d] -> Soma: %d\n", i, j, soma_peca);
        }
        printf("\n"); // Espaço para separar as "famílias" de peças
    }

    printf("-----------------------------\n");
    printf("Total de pecas: %d\n", total_pecas);
    printf("Soma de todos os pontos: %d\n", soma_total);

    return 0;
}
