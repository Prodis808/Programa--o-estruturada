/*. Faça um programa para criptografar uma frase dada pelo usuário. A criptografia deverá
inverter a frase.
Frase: EU ESTOU NA ESCOLA
Saída: ALOCSE AN UOTSE EU */

#include <stdio.h>
#include <string.h>

void criptoigrafar(char x[], char y[]) {
    int i, j = strlen(x) - 1;

    for(i=0; x[i] != '\0' ;i++,j--) {
        y[i] = x[j];
    }
    y[i] = '\0';
}

int main() {
    char frase[100], frase_criptografada[100];

    printf("Digite a frase: ");
    fgets(frase,sizeof(frase),stdin);

    criptoigrafar(frase, frase_criptografada);

    printf("Frase: %s ", frase_criptografada);


    return 0;
}