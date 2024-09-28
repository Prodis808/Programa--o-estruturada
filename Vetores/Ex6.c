//Dados dois vetores A e B com 10 elementos cada. Armazenar no vetor C a soma do elemento em A com o elemento em B em cada uma das posições.

#include <stdio.h>

int main() {
    int a[10], b[10], c[10], i;

    for (i=0;i<10;i++) {
        printf("Digite o elemento %d do vetor A: ", i);
        scanf("%d", &a[i]);

    }
    for (i=0;i<10;i++) {
        printf("Digite o elemento %d do vetor B: ", i);
        scanf("%d", &b[i]);
    }

    for (i=0;i<10;i++) {
        c[i] = a[i] + b[i];

    }

    for (i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (i=0;i<10;i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    for (i=0;i<10;i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}