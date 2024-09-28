//Faça uma função que recebe, por parâmetro, 2 vetores A e B detamanho 10 de inteiros. Ao final da função, B deve conter o fatorial de cada elemento de A. O vetor B retorna alterado.
//A = 4 1 0 3 ...
//B = 24 1 1 6 ...

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    int i;

    for (i=0;i<tamanho;i++){
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int factorial(int valor) {
    int fat = 1, i;
    
    for(i=1;i<=valor;i++) {
        fat *= i;
    }
    return fat;
}

void funcaofactorial(int vetora[], int vetorb[], int tamanho) {
    int i;

    for (i=0;i<tamanho;i++) {
        vetorb[i] = factorial(vetora[i]);
    }
}

int main() {
    int vetorA[10], vetorB[10], i;

    lervetor(vetorA, 10);
    funcaofactorial(vetorA,vetorB,10);

    for (i=0;i<10;i++) {
        printf("%d ", vetorA[i]);
    }

    printf("\n");
    
    for (i=0;i<10;i++) {
        printf("%d ", vetorB[i]);
    }

    return 0;
}