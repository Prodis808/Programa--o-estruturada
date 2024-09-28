//Ler um vetor A com 20 elementos. Gerar e mostrar o vetor B obtido pela inversão da ordem do vetor A.

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;

    for(i=0;i<tamanho; i++) {
        printf("Digite o elemento de indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void invertevetor(int vetorx[], int vetory[], int tamanho) {
    int i, j=19;

    for (i=0;i<tamanho; i++) {
        vetory[i] = vetorx[j];
        j--;
    }
}

int main() {
    int vetorA[20], vetorB[20], i;

    lervetor(vetorA, 20);
    invertevetor(vetorA, vetorB, 20);

    for (i=0;i<20;i++) {
        printf("%d ", vetorB[i]);
    }

    return 0;
}