#include <stdio.h>

int imparOUpar(int valor) {
    
    if (valor % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (imparOUpar(valor) == 0) {
        printf("O numero %d e par", valor);
    } else {
        printf("O numero %d e impar", valor);
    }
    
    return 0;
}