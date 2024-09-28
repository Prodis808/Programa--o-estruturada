//Fazer um programa para ler uma string e um caracter qualquer. Calcular o número
//de ocorrências desse caracter na string. Exemplo: Seja a string "maracatu" e o
//caracter 'a', então o número de ocorrências de 'a' é 3.

#include <stdio.h>
#include <string.h>

int contadorcaracter(char str[], char caractere) {
    int contador = 0, i;

    for(i=0; str[i] != '\0'; i++) {
        if (str[i]==caractere) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char string[100], caractere;
    int i;

    printf("Digite uma string: ");
    scanf("%s", string);
    
    printf("Digite o caracter a ser procurado: ");
    scanf(" %c", &caractere);

    i = contadorcaracter(string, caractere);

    printf("O caracter %c aparece %d vez na string %s ", caractere, i, string);

    return 0;
}