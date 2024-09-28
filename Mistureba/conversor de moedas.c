#include <stdio.h>

int main() {
    double valor, convertido;
    int tipo_moeda, contador = 0;

    printf("Informe o valor em Reais: \n");
    scanf("%lf", &valor);

    printf("Tabela de moedas\n1 para dolar\n2 para euro\n3 para libra esterlina\n4 para peso argentino\n");
    scanf("%d", &tipo_moeda);

    while (tipo_moeda < 1 || tipo_moeda > 4) { 

        contador++;
        if (contador == 3) {
            printf("Programa encerrado.");
            return 1;
        }

        printf("Tipo nao identificado, por favor digite um numero de 1 a 4 conforme a tabela: ");
        scanf("%d", &tipo_moeda);
        
    }

    switch (tipo_moeda){
        case 1:
            convertido = valor / 5.48;
            printf("%g reias equivalem a %g dolares.", valor, convertido);
            break;
        case 2:
            convertido = valor / 6.02;
            printf("%g reias equivalem a %g euros.", valor, convertido);
            break;
        case 3:
            convertido = valor / 7.05;
            printf("%g reias equivalem a %g libras esterlinas.", valor, convertido);
            break;
        case 4:
            convertido = valor * 171.67;
            printf("%g reias equivalem a %g pesos argentinos.", valor, convertido);
            break;

    }


    return 0;
}
