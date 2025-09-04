#include <stdio.h>

#define N 4

int main() {
    int pontos[N][N];
    int *ptr = &pontos[0][0];
    int i, j;

    printf("Digite os pontos dos 4 jogadores em 4 sets:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("Jogador %d - Set %d: ", i+1, j+1);
            scanf("%d", (ptr + i*N + j));
        }
    }

    printf("\n--- Matriz ---\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%3d ", *(ptr + i*N + j));
        }
        printf("\n");
    }

    int pares = 0, impares = 0;
    for(i = 0; i < N*N; i++) (*(ptr+i) % 2 == 0) ? pares++ : impares++;
    printf("\nPares: %d | Impares: %d\n", pares, impares);

    int jogadorTop = 0, maiorP = -1;
    for(i = 0; i < N; i++) {
        int soma = 0;
        for(j = 0; j < N; j++) soma += *(ptr+i*N+j);
        printf("Jogador %d total: %d\n", i+1, soma);
        if(soma > maiorP) { maiorP = soma; jogadorTop = i+1; }
    }
    printf("Maior pontuador: Jogador %d (%d pontos)\n", jogadorTop, maiorP);

    int setTop = 0, maiorSet = -1;
    for(j = 0; j < N; j++) {
        int soma = 0;
        for(i = 0; i < N; i++) soma += *(ptr+i*N+j);
        printf("Set %d total: %d\n", j+1, soma);
        if(soma > maiorSet) { maiorSet = soma; setTop = j+1; }
    }
    printf("Set mais disputado: Set %d (%d pontos)\n", setTop, maiorSet);

    for(i = 0; i < N; i++) {
        int soma = 0;
        for(j = 0; j < N; j++) soma += *(ptr+i*N+j);
        printf("Media Jogador %d: %.2f\n", i+1, soma/(float)N);
    }

    int jogadorReg = 0, menorDif = 9999;
    for(i = 0; i < N; i++) {
        int maior = *(ptr+i*N), menor = *(ptr+i*N);
        for(j = 1; j < N; j++) {
            int val = *(ptr+i*N+j);
            if(val > maior) maior = val;
            if(val < menor) menor = val;
        }
        int dif = maior-menor;
        if(dif < menorDif) { menorDif = dif; jogadorReg = i+1; }
    }
    printf("Jogador mais regular: Jogador %d (dif %d)\n", jogadorReg, menorDif);

    return 0;
}
