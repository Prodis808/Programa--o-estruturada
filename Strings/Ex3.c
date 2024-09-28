/*Faça um programa que calcule e mostre o número de vogais de uma string. Feito
isso, o programa deve criptografar uma frase dada pelo usuário (a criptografia troca
as vogais da frase por *).
Frase: eu estou na escola
Saída: ** *st** n* *sc*l*
*/

#include <stdio.h>

int numvogais(char str[]) {
    int i, contador=0;

    for (i=0;str[i]!='\0';i++) {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') ||
            (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U')) {
            contador++;
        }
    }
    return contador;
}

void criptografado(char str[], char strmodificada[]) {
    int i;
    
    for(i=0;str[i]!='\0';i++) {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') ||
            (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U')) {
            strmodificada[i] = '*';
        } else {
            strmodificada[i] = str[i];
        }
    }
    strmodificada[i] = '\0';
}

int main() {
    char string[100], stringmodificada[100];
    int vogais;

    printf("Digite uma frase: ");
    fgets(string, sizeof(string), stdin);

    vogais = numvogais(string);
    criptografado(string, stringmodificada);

    printf("O numero de vogais e: %d\n", vogais);
    printf("Str normal: %s\nStr codificada: %s", string, stringmodificada);



    return 0;
}
