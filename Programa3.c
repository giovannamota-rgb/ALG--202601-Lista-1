#include <stdio.h>
int main() {
    float n1, n2, n3, maior, menor, media;

    // 1. Entrada de dados
    printf("Digite três números não inteiros. (ex: 5,5 10,2 3,8): ");
    scanf("%f %f %f", &n1, &n2, &n3);

    // 2. Cálculo da média
    media = (n1 + n2 + n3) / 3;

    // 3. Encontrar o maior
    maior = n1; 
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;

    // 4. Encontrar o menor
    menor = n1;
    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;

    // 5. Exibir resultados (%.2f limita a 2 casas decimais)
    printf("\nMédia: %.2f", media);
    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f\n", menor);

    return 0;
}
