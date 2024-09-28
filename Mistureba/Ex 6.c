#include <stdio.h>

int main() {
    double c, f;

    printf("Informe a temperatura em graus C: ");
    scanf("%lf", &c);

    f = (c * 1.8) + 32;

    printf("A temperatura em F é: %lf\n", f);
    return 0;
}