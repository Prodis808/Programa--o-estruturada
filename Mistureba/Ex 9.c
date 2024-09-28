
#include <stdio.h>

int main() {

    double milhas, km;
    printf("Informe a distância em Milhas: ");
    scanf("%lf", &milhas);

    km = 1.61 * milhas;

    printf("A distancia em km é: %lf", km);
    return 0;

}