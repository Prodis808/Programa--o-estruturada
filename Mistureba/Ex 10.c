#include <stdio.h>

int main() {
    double rad, graus;

    printf("Informe o angulo em graus: ");
    scanf("%lf", &graus);

    rad = graus * (3.14/180);

    printf("Esse angulo em radianos é: %lf", rad);
    return 0;
}