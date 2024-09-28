#include <stdio.h>

int main() {
    float n, n_por_5;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    n_por_5 = n / 5;

    printf("A quinta parte desse numero é: %f\n", n_por_5);
    return 0;

}