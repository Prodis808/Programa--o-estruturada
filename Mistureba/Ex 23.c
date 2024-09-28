//Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não
//simultaneamente pelos dois.

#include <stdio.h>

int main() {
    int n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    if ((n1 % 3 == 0 || n1 % 5 == 0) && !(n1 % 3 == 0 || n1 % 5 == 0)) {

        printf("O numero %d e divisivel por 3 ou 5, mas nao pelos 2.", n1);
    } else{

        printf("o numero %d e divisivel por 3 e por 5.", n1);

    }
    return 0;
}