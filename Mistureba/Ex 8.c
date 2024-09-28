#include <stdio.h>

int main() {
    double km, ms;

    printf("Informe a Velocidade em Km/h: ");
    scanf("%lf", &km);

    ms = km / 3.6;
    
    printf("A medida em ms é : %lf", ms);
    return 0;

}