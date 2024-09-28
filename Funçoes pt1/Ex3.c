#include <stdio.h>

int maior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int maiorDe3(int n1, int n2, int n3) {
    int maiordos2 = maior(n1, n2);

    if (maiordos2 > n3) {
        return maiordos2;
    } else {
        return n3;

    }
}
int main() {
    int n1, n2, n3;

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d", maiorDe3(n1,n2,n3));

    return 0;
}