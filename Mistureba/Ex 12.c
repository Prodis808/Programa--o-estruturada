// Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

int main() {
    double n1, n2, n3, n4, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);

    printf("Digite a quarta nota: ");
    scanf("%lf", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media é: %lf", media);
    return 0;
}