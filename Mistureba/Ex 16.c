//Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem
//iguais, imprima a mensagem Números iguais.

#include <stdio.h>

int main() {
    double n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &n1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &n2);

    if (n1 > n2) {
        printf("O numero %lf e maior que %lf", n1, n2);
    } else if (n1 < n2) {
        printf("O numero %lf e maior que %lf", n2, n1);
    } else if (n1 == n2) {
        printf("Os dois numeros sao iguais.");
    }
    return 0;
    
}
