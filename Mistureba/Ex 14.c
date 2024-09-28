// Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do
// número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

#include <stdio.h>
#include <math.h>

int main() {
    double n, raiz;

    printf("Digite um numero: ");
    scanf("%lf", &n);

    if (n > 0) {
        raiz = sqrt(n);
        printf("A raiz de %lf é %lf", n, raiz);
    } else {
        printf("Numero invalido.");
    }
    return 0;
}