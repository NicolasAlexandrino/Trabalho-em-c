#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, total = 0;
    int *horas;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &n);

    horas = (int*) malloc(n * sizeof(int));
    if(horas == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("Horas do funcionario %d: ", i+1);
        scanf("%d", horas+i);
        total += *(horas+i);
    }

    printf("\nTotal de horas no mes: %d\n", total);

    free(horas);
    return 0;
}
