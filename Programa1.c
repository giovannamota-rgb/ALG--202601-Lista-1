#include <stdio.h>
int main() {
  int total_segundos, horas, minutos, segundos, resto; 
  printf("Digite o tempo em segundos ");
  scanf("%d", &total_segundos);
  horas = total_segundos / 3600;
  resto = total_segundos % 3600;
  minutos = resto / 60;
  segundos = resto % 60;
  printf("%d segundos equivalem a: %dh %dmin %ds\n", total_segundos, horas, minutos, segundos);
   return 0;
   }
