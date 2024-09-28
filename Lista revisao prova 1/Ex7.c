/*Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 ao valor ASCII de
cada caractere da palavra. Imprima a string resultante.*/

#include <stdio.h>
#include <string.h>

void criptografar_palavra(char palavra[]) {
    int i;
    
    // Loop através de cada caractere da palavra
    for (i = 0; palavra[i] != '\0'; i++) {
        palavra[i] = palavra[i] + 1;  // Soma 1 ao valor ASCII de cada caractere
    }
}

int main() {
    char palavra[51];  // Máximo de 50 letras + '\0'
    
    printf("Digite uma palavra (max 50 letras): ");
    fgets(palavra, sizeof(palavra), stdin);
    
    // Remover o '\n' que pode ser incluído por fgets
    palavra[strcspn(palavra, "\n")] = '\0';

    criptografar_palavra(palavra);
    
    printf("Palavra criptografada: %s\n", palavra);
    
    return 0;
}
