// Calcular a média dos elementos do vetor do exercício 1

#include <stdio.h>

int main() {
    int vetor[10], i, soma, media;

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

    // Calculando a media
    media = soma / 10;
    printf("\n%d", media);
    return 0;
}