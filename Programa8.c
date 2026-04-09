#include <stdio.h>
int main() {
    int i, j;
    
    printf("\n=== TABUADA DE 2 A 10 ===\n");

    for (i = 2; i <= 10; i++) {
        printf("Tabuada do %d:\n", i);
        printf("\n------------------\n");

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n------------------\n");
    }

    return 0;
}
