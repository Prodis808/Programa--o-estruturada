#include <stdio.h>

int somainteiros(int a, int b, int c) {
    int soma=0, i;

    if (b > c) {
        for (i = c; i<=b; i++) {
            if (i % a == 0) {
                soma += i;
            }
        }
    } else if (c > b) {
        for (i = b; i<=c; i++) {
            if (i % a == 0) {
                soma += i;
            }
        }
    }
    return soma;

}

int main() {
    int a, b, c;

    printf("Digite os valores de a, b e c(obs: a tem que ser maior que 1): \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", somainteiros(a,b,c));

    return 0;
}