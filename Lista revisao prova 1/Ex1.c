/*Escreva uma função que receba um vetor X de 20 elementos como parâmetro e retorne a
quantidade de números positivos, a quantidade de números negativos e a soma dos números
do vetor X.
*/

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;
    for(i=0;i < tamanho;i++) {
        printf("Digite o numero do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void positivos_negativos_soma(int vetor[], int tamanho, int *p, int *n, int *soma) {
    int i;

    for(i=0;i<tamanho;i++) {
        if (vetor[i] > 0) {
            (*p)++;
            *soma += vetor[i];
        } else if (vetor[i] < 0) {
            (*n)++;
            *soma += vetor[i];
        }
    }
}

int main() {
    int vetor[20], positivos=0, negativos=0, soma=0;

    lervetor(vetor, 20);
    positivos_negativos_soma(vetor,20,&positivos,&negativos,&soma);

    printf("Quantidade de positivos = %d\nQuantidade de negativos = %d\nSoma de todos os elementos = %d\n", positivos,negativos,soma);

    return 0;
}