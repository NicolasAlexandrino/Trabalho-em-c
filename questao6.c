#include <stdio.h>

int main() {
    float notas[3][3];
    float *ptr = &notas[0][0];
    int i, j;
    float soma = 0;

    printf("Digite as notas dos 3 alunos (3 provas):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%f", ptr + i*3 + j);
        }
    }

    printf("\nMatriz de notas:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f ", *(ptr + i*3 + j));
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        soma += *(ptr + i*3 + i);
    }

    printf("\nSoma diagonal principal: %.2f\n", soma);

    return 0;
}
