/*Escreva um programa que armazene 10 valores inteiros no vetor A e crie o vetor B do mesmo
tipo, observando as regras de formação: se o valor do índice de B for par, o valor do elemento
será o elemento de A multiplicado por 5; se o índice for ímpar, o elemento será o elemento de
A somado com 5. Mostre o conteúdo dos dois vetores.*/

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;
    for(i=0;i < tamanho;i++) {
        printf("Digite o numero do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void vetorb(int a[], int b[], int tamanho) {
    int i;

    for(i=0;i<tamanho;i++) {
        if (i % 2 == 0) {
            b[i] = a[i] * 5;
        } else {
            b[i] = a[i] + 5;
        }
    }
}

int main() {
    int A[10], B[10],i;

    lervetor(A,10);

    vetorb(A,B,10);

    printf("Vetor A:\n");
    for(i=0;i<10;i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    printf("Vetor B:\n");
    for(i=0;i<10;i++) {
        printf("%d ", B[i]);
    }




    return 0;
}