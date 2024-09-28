#include <stdio.h>

int main() {
    int n1, n2, n3, soma;

    // Solicitando os números
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digire o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    // Calculando a soma
    soma = n1 + n2 + n3;

    printf("A soma dos 3 numeros inteiros digitados é: %d\n", soma);

    return 0;
}



