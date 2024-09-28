// Multiplicar os elementos que estão nos índices ímpares do vetor pela constante 15.

#include <stdio.h>

int main() {
    int vetor[5] = {1,2,3,4,5};
    int i;

    for (i=0;i<5;i++) {
        if ((vetor[i] % 2) != 0) {
            vetor[i] = vetor[i] * 15;
        }
    }
    
    for (i=0;i<5;i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}