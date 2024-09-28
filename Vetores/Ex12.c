//Escreva uma função que concatena/junta dois vetores. Porexemplo, V1 = 0, 1, 2, 3, 4 e V2 = 4, 3, 2, 1, 0, o vetor resultanteserá R = 0, 1, 2, 3, 4, 4, 3, 2, 1, 0.

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;

    for (i=0;i<tamanho;i++){
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void concatena(int vetor1[], int vetor2[], int vetor3[], int tamanho_vetores_originais, int tamanho_vetor_final) {
    int i, j;
    
    for(i=0;i<tamanho_vetores_originais;i++) {
        vetor3[i] = vetor1[i];
    }
    i=0;
    for(j=5;j<tamanho_vetor_final;j++) {
        vetor3[j] = vetor2[i];
        i++;
    }
}

int main() {
    int vetorx[5], vetory[5], vetorz[10], i;

    lervetor(vetorx, 5);
    lervetor(vetory, 5);

    concatena(vetorx, vetory, vetorz, 5, 10);

    for (i=0;i<10;i++) {
        printf("%d ", vetorz[i]);
    }
    
    return 0;
}