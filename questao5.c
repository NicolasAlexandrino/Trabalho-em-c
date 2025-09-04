#include <stdio.h>

int main() {
    float notas[6];
    float *ptr = notas;
    int i;

    printf("Digite as 6 notas:\n");
    for(i = 0; i < 6; i++) {
        scanf("%f", ptr+i);
    }

    for(i = 0; i < 3; i++) {
        float tmp = *(ptr+i);
        *(ptr+i) = *(ptr+5-i);
        *(ptr+5-i) = tmp;
    }

    printf("\nNotas invertidas:\n");
    for(i = 0; i < 6; i++) {
        printf("%.2f ", *(ptr+i));
    }

    printf("\n");
    return 0;
}
