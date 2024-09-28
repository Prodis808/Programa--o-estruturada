//Calcular a soma dos elementos de um vetor de 10 posições.

#include <stdio.h>

int main() {
    int vetor[10], i, soma;

    // Solicitando os valores dos vetores
    for (i=0;i<10;i++) {
        printf("Digite o elemento %d do vetor: \n", i+1);
        scanf("%d", &vetor[i]);

    }
    // Printando o vetor
    for (i=0;i<10;i++) {
        printf("%d ", vetor[i]);
    }
    
    // Calculando a soma dos elementos
    for (i=0;i<10;i++) {
        soma += vetor[i];
    }

    printf("\nSoma dos elementos do vetor = %d", soma);

    return 0;
}