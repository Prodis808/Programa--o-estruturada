#include <stdio.h>

void MM(int *a, int *b) {
    int maior, menor;

    if (*a >= *b) {
        maior = *a;
        menor = *b;
    } else {
        maior = *b;
        menor = *a;
    }

    *a = menor;
    *b = maior;
}

int main() {
    int a, b;

    printf("Digite os valores de A e de B: ");
    scanf("%d %d", &a, &b);

    MM(&a, &b);
    printf("O valor de A e: %d\nO valor de B e: %d\n", a, b);

    return 0;
}