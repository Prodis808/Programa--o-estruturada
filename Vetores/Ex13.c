// Fazer uma função que procura por um número em um vetor e retorna o seu endereço (índice) caso o encontre. Se não encontrarmostrar uma mensagem de que não achou.

#include <stdio.h>

int procuravalor(int vetor[], int valor) {
    int i, local=-1;

    for (i=0;i<10;i++) {
        if (vetor[i] == valor) {
            local = i;
        }
    }
    if (local == -1) {
        printf("O valor nao esta no vetor.");
    
    } else {
        printf("O valor esta localizado no indice %d ", local);
    }
    return 0;
}

int main() {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10}, valor;

    printf("Digite o valor a ser procurado no vetor: ");
    scanf("%d", &valor);

    procuravalor(vetor, valor);


    return 0;
}