//Ler dois vetores A e B de 10 elementos cada. Intercalar os elementos de A com os elementos de B de maneira a formar um terceiro vetor, C. Escrever o vetor C.

#include <stdio.h>

// Função para ler os vetores.
void lervetor(int vetor[], int tamanho) {
    int i;
    
    for (i=0; i < tamanho; i++) {
        printf("Digite o Indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

// Função para intercalar os vetores
void intercalavetor(int vetorx[], int vetory[], int vetorc[], int tamanho) {
    int i, j=0;

    for (i=0;i<tamanho;i++) {
        if (i%2 == 0) {
            vetorc[i] = vetorx[j];
        } else {
            vetorc[i] = vetory[j];
            j++;
        }
    }
}

int main() {
    int vetorA[10], vetorB[10], vetorC[20], i;

    lervetor(vetorA, 10);
    lervetor(vetorB, 10);

    // Printanto os vetores para verificação
    for (i=0; i < 10; i++) {
        printf("%d ", vetorA[i]);
    }

    printf("\n");

    for (i=0; i < 10; i++) {
        printf("%d ", vetorB[i]);
    }

    printf("\n");

    intercalavetor(vetorA, vetorB, vetorC, 20);

    for (i=0; i < 20; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}