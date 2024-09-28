// Faça um programa que receba dois números e mostre qual deles é o menor

#include <stdio.h>

int main() {

    double n1, n2;

    printf("Digite o primeiro numero:");
    scanf("%lf", &n1);

    printf("Digite o segundo numero:");
    scanf("%lf", &n2);

    if (n1 > n2) {
        printf("O numero %lf é maior que %lf", n1, n2);

    } else {
        printf("O numero %lf é maior que %lf", n2, n1);
    }
    return 0;

}