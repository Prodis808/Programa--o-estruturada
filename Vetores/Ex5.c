//Preencher um vetor X de 10 elementos com o número 1 se o índice do elemento for ímpar e com o número 0 se o índice for par.
//Mostrar o vetor X.

#include <stdio.h>

int main() {
    int x[10], i;

    for (i=0;i<10;i++) {

        if (i % 2 == 0) {
            x[i] = 0;

        } else {
            x[i] = 1;

        }
    }

    for (i=0;i<10;i++) {
        printf("%d ", x[i]);

    }

    return 0;
}