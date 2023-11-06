#include <stdio.h>

int main() {
    int valores[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", valores[i]);
    }
    printf("\n");

    int tamanho = 10;
    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            valores[i] = valores[i] + valores[i + 1];
            if (i > 0) {
                printf(" ");
            }
            printf("%d", valores[i]);
        }
        printf("\n");
        tamanho--;
    }

    return 0;
}
