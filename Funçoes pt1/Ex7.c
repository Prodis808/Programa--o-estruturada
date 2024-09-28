#include <stdio.h>

float pesoideal(float altura, char sexo) {
    float peso_ideal;

    if ((sexo == 'M') || (sexo == 'm')) {
        peso_ideal = (72.7 * altura) - 58;
    } else  {
        peso_ideal = (62.1 * altura) - 44.7;
    }
   return peso_ideal;
}

int main() {
    float altura;
    char sexo;

    printf("Digite a altura em metros: \n");
    scanf("%f", &altura);
    
    printf("Digite o sexo M/F: \n");
    scanf(" %c", &sexo);

    printf("O peso ideal e: %g", pesoideal(altura, sexo));
    return 0;
}