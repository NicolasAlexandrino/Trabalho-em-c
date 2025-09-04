#include <stdio.h>

int main() {
    int idade;
    int *ptr;

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    ptr = &idade;

    printf("Idade: %d\n", *ptr);
    printf("Endereco em memoria: %p\n", ptr);

    return 0;
}
