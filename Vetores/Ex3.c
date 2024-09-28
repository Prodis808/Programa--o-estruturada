// Calcular quantos elementos do vetor, do exercício 2, estão acimada média

#include <stdio.h>

int main() {
    int vetor[10], i, soma, media, contador_acima_media=0;

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

    // Verificando os elementos acima da media
    for (i=0;i<10;i++) {
        if (vetor[i] > media) {
            contador_acima_media++;
        }
    }
    printf("\n%d", contador_acima_media);
    
    return 0;
}