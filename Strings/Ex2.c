// /Ler uma frase e contar o número de palavras dessa frase. Considere que as
//palavras estão separadas por espaços.

#include <stdio.h>

int contadorpalavras(char palavra[]) {
    int i, contador=0, dentro_da_palavra=0;

    for(i=0;palavra[i]!='\0';i++) {
        // Verificando se o programa está dentro de uma palavra
        if ((palavra[i]!=' ') && (palavra[i]!='\n')) {
            // Se atender o primeiro if e dentro_palavra=0 significa que entrou em uma palavra, se atender o primeiro if e nao ateder o proximo, a funçao vai para o ultimo if, onde mantem a variavel como 0 para indicar que ainda estamos fora da palavra
            if (dentro_da_palavra==0) {
                contador++; 
                dentro_da_palavra = 1; // Agora o programa entende que estamos dentro de uma palavra
            }
        } else {
            dentro_da_palavra = 0;
        }
    }
    return contador;
}

int main() {
    char palavra[100];
    int contador;

    printf("Digite uma frase: ");
    fgets(palavra, sizeof(palavra), stdin);

    contador = contadorpalavras(palavra);

    printf("A palavra %stem %d palavras.", palavra, contador);
    return 0;
}