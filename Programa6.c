#include <stdio.h>
int main() {
    int i, j, soma;

    printf("Numeros perfeitos entre 1 e 100:\n");
    for (i = 1; i <= 100; i++) {
        soma = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                soma += j; // Se j divide i, soma ao total
            }
        }
        if (soma == i) {
            printf("%d eh um numero perfeito.\n", i);
        }
    }

    return 0;
}
