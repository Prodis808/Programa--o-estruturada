#include <stdio.h>

int maior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {
    int n1, n2;

    printf("Digite 2 numeros:\n");
    scanf("%d %d", &n1, &n2);

    printf("%d e maior", maior(n1,n2));

    return 0;
}