#include <stdio.h>
int main() {
    float valor, soma = 0, media;
    int contador = 0;
    printf("Digite valores positivos (ou um negativo para sair):\n");

    while (1) { 
    printf("Valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break; 
        }

        soma += valor;    
        contador++;      
    }
    if (contador > 0) {
        media = soma / contador;
        printf("\n--- Resultados ---\n");
        printf("Quantidade de numeros lidos: %d\n", contador);
        printf("Soma total: %.2f\n", soma);
        printf("Media dos valores: %.2f\n", media);
    } else {
        printf("\nNenhum valor positivo foi inserido.\n");
    }

    return 0;
}
