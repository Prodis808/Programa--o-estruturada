//Obter um vetor V de 20 posições. Mostrar o maior elemento do vetor V e a sua posição.

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;

    for (i=0;i<tamanho;i++) {
        printf("Digite o elemento de indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void maior_e_posicao(int vetor[], int tamanho, int *maior, int *posicao) {
    int i;

    *maior = vetor[0];
    *posicao = vetor[0];

    for (i=0;i<tamanho;i++) {
        if (*maior < vetor[i]) {
            *maior = vetor[i];
            *posicao = i;
        }
    }
}

int main() {
    int vetor[20], maiorelemento, posicao, i;

    lervetor(vetor, 20);
    maior_e_posicao(vetor, 20, &maiorelemento, &posicao);

    for (i=0;i<20;i++) {
        printf("%d ", vetor[i]);  
    }
    
    printf("\n");
    printf("O maior elemento do vetor acima e: %d\nE a sua posicao e: %d", maiorelemento, posicao);

    return 0;
}