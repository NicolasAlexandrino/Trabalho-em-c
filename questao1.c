#include <stdio.h>

int main() {
    int cofrinho = 100;
    int *ptr = &cofrinho;

    printf("Valor guardado no cofrinho: %d\n", *ptr);
    printf("Endereco em memoria: %p\n", ptr);

    return 0;
}
