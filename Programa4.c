#include <stdio.h>
int main() {
   char operacao;
   float  num1, num2, resultado;
    // Solicita a operação ao usuário
    printf("Digite o símbolo da operação (+, -, *, /): ");
    scanf(" %c", &operacao); // O espaço antes de %c serve para ignorar buffers de entrada

    // Solicita os dois números
    printf("Digite dois números reais: ");
    scanf("%f %f", &num1, &num2);

    // Estrutura de decisão para realizar o cálculo
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '/':
            // Verificação para evitar divisão por zero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;

        default:
            printf("Erro: Operação inválida.\n");
    }
    return 0;
}
