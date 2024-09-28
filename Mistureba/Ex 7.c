#include <stdio.h>

int main() {
    double k, c;
    printf("Informe a temperatura em kelvin: ");
    scanf("%lf", &k);

    c = k - 273.15;
    printf("A temperatura %lfK em graus celcius é: %lf\n", k,c);
    return 0;
}