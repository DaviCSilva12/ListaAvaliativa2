#include <stdio.h>

void somaMatrizes(int A[4][4], int B[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtraiMatrizes(int A[4][4], int B[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplicaMatrizes(int A[4][4], int B[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[4][4], B[4][4], resultado[4][4];
    char operacao[5];

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        somaMatrizes(A, B, resultado);
    } else if (strcmp(operacao, "sub") == 0) {
        subtraiMatrizes(A, B, resultado);
    } else if (strcmp(operacao, "mult") == 0) {
        multiplicaMatrizes(A, B, resultado);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
