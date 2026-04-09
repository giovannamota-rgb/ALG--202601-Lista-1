#include <stdio.h>
int main() {
    // Usamos unsigned long long para suportar números bem grandes
    unsigned long long t1 = 0, t2 = 1, proximoTermo;
    int n = 100;

    printf("Os primeiros %d termos da serie de Fibonacci:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d: %llu\n", i, t1);
        
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;

        // Nota: Por volta do termo 94, o valor excederá o limite do unsigned long long
        if (t1 < 0) { // Verificação simples de overflow (opcional)
             break;
        }
    }

    return 0;
}
