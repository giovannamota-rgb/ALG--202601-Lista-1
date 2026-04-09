#include <stdio.h>
int main() {
    int num, i, resultado = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d nao eh um numero primo.\n", num);
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                resultado++; // Incrementa se encontrar um divisor
                break;       // Se encontrou um, ja sabemos que nao eh primo
            }
        }

        if (resultado == 0)
            printf("%d eh um numero primo.\n", num);
        else
            printf("%d nao eh um numero primo.\n", num);
    }

    return 0;
}
