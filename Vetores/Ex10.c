//Ler um vetor de 16 posições. Troque os 8 primeiros valores pelos 8 últimos. Escreva ao final o vetor obtido.

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;

    for (i=0;i<tamanho;i++){
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void invertevetores(int vetorx[], int vetory[]) {
    int i, j=8;

    for (i=0;i<8;i++) {
        vetory[i] = vetorx[j];
        j++;
    }
    j=0;
    for (i=8;i<16;i++) {
        vetory[i] = vetorx[j];
        j++;
    }
}

int main() {
    int vetor[16], vetor2[16], i;

    lervetor(vetor, 16);

    invertevetores(vetor, vetor2);

    for (i=0;i<16;i++) {
        printf("%d ", vetor2[i]);
    }
    
    return 0;
}