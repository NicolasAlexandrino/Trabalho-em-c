#include <stdio.h>

int main() {
    float preco[5];
    float *ptr = preco;
    int i;

    printf("Digite os precos de 5 produtos:\n");
    for(i = 0; i < 5; i++) {
        printf("Produto %d: ", i+1);
        scanf("%f", ptr+i);
    }

    printf("\n--- Precos e descontos ---\n");
    for(i = 0; i < 5; i++) {
        printf("Produto %d: R$ %.2f | Com 10%% desconto: R$ %.2f\n", 
               i+1, *(ptr+i), *(ptr+i)*0.9);
    }

    return 0;
}
