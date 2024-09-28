/*Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
Frase: computadores são máquinas potentes
computadores
são
máquinas
potentes */

#include <stdio.h>

void quebradordefrase(char frase[]) {
    int i=0;

    while (frase[i]!='\0') {
        if(frase[i]!= ' ' && frase[i]!= '\n') {
            printf("%c", frase[i]);
        } else {
            printf("\n");
        }
        i++;
    }
}

int main() {
    char frase[100];

    printf("Digite a frase: ");
    fgets(frase,sizeof(frase),stdin);
    quebradordefrase(frase);
    return 0;
}