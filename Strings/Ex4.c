//Escreva um programa que receba uma frase com caracteres em minúsculo e
//transforme o primeiro caractere de cada palavra da frase em maiúsculo.

#include <stdio.h>
#include <ctype.h>

void formatador_de_frase(char str[]){
    int i, dentro_frase=0;
    
    for(i=0;str[i]!='\0';i++) {
        if ((str[i]!= ' ') && (str[i] != '\n')) {
            if (dentro_frase == 0) {
                str[i] = toupper(str[i]);
                dentro_frase = 1;
            }
        } else {
            dentro_frase = 0;
        }
    }
}

int main() {
    char frase[100];

    printf("Digite uma frase em minusculo: ");
    fgets(frase, sizeof(frase), stdin);

    formatador_de_frase(frase);

    printf("A frase formatada e: %s", frase);

    return 0;
}