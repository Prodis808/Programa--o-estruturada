//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
//utilizando as seguintes fórmulas (onde h corresponde à altura):
//• Homens: (72.7 h) − 58 ∗
//• Mulheres: (62, 1 h) − 44, 7

#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite o sexo (m/f): ");
    scanf("%c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (sexo == 'm' || sexo == 'M') {
        peso_ideal = (72.2 * altura) - 58;
        printf("O peso ideal e: %f", peso_ideal);

    } else if (sexo == 'f' || sexo == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal é: %f", peso_ideal);   
    }
    return 0;
}