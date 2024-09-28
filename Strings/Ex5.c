/* Escreva um programa que receba uma string (palavra), determine se ela é
palíndromo. Um palíndromo é uma palavra que tenha a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Ex.: arara,
ovo, anilina, salas.
*/

#include <stdio.h>
#include <string.h>

int verificadorpalindromo(char str[]){
    int i, j = strlen(str) - 1, verificador = 1;

    if (str[j] == '\n') {
        str[j] = '\0';
        j--;
    }

    for(i=0; i<j ;i++, j--) {
        if (str[i] != str[j]) {
            verificador = 0;
            break;
        }
    }
    return verificador;
}

int main() {
    char palavra[100];
    int x;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    x = verificadorpalindromo(palavra);

    if (x==1) {
        printf("A palavra e um palindromo");
    } else {
        printf("A palavra nao e um palindormo");
    }

    return 0;
}