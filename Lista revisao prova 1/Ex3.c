/*Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois
vetores resultantes. O primeiro vetor resultante deve conter os números positivos e o segundo,
os números negativos. Cada vetor resultante terá no máximo oito posições, que poderão não
ser completamente utilizadas.*/

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;
    for(i=0;i < tamanho;i++) {
        printf("Digite o numero do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void vetoresresultantes(int vetor[], int x[], int y[], int tamanho, int *contadorx, int *contadory) {
    int i;

    for(i=0;i<tamanho;i++) {

        if (vetor[i] >= 0) {
            x[*contadorx] = vetor[i];
            (*contadorx)++; 
        } else {
            y[*contadory] = vetor[i];
            (*contadory)++;
        }
    }
}

int main() {
    int vetor[8], vetorx[8], vetory[8],i, contadorx=0, contadory=0;

    lervetor(vetor,8);

    vetoresresultantes(vetor,vetorx,vetory, 8, &contadorx, &contadory);
    
    printf("Vetor x:\n");
    for(i=0;i<contadorx;i++) {
        printf("%d ", vetorx[i]);
    }

    printf("\n");

    printf("Vetor y:\n");
    for(i=0;i<contadory;i++) {
        printf("%d ", vetory[i]);
    }

    return 0;
}