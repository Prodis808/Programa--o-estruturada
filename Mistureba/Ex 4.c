#include <stdio.h>

int main() {
    float n, nquadrado;

    printf("Informe um numero real: ");
    scanf("%f", &n);

    nquadrado = n * n;

    printf("O quadrado do número digitado é: %f\n", nquadrado);
    return 0;
}