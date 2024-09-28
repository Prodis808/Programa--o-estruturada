//Fazer um programa que leia dois conjuntos, A e B, de 10 inteiros cada. Escrever uma função que determine o conjunto interseção entre A e B (elementos comuns aos dois conjuntos).

#include <stdio.h>

void lervetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int comuns(int x[], int y[], int z[], int tamanho) {
    int k = 0; // índice para o vetor z
    for (int i = 0; i < tamanho; i++) {

        for (int j = 0; j < tamanho; j++) {
            
            if (x[i] == y[j]) {
                // Verificar se o elemento já foi adicionado ao vetor z
                int jaExiste = 0;
                for (int l = 0; l < k; l++) {
                    if (z[l] == x[i]) {
                        jaExiste = 1;
                        break;
                    }
                }
                if (!jaExiste) {
                    z[k] = x[i];
                    k++;
                }
                break;
            }
        }
    }
    return k; // Retorna quantos elementos comuns foram encontrados
}

int main() {
    int a[10], b[10], c[10];
    int numComuns;

    lervetor(a, 10);
    lervetor(b, 10);

    numComuns = comuns(a, b, c, 10);

    printf("Elementos comuns:\n");
    for (int i = 0; i < numComuns; i++) {
        printf("%d ", c[i]);
    }

    if (numComuns == 0) {
        printf("Nenhum elemento comum encontrado.");
    }

    return 0;
}
