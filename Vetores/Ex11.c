//: Pesquisar as funções srand() e rand ().
//Em C, as funções srand() e rand() são usadas para gerar números aleatórios. Aqui está o que cada uma faz:

//rand(): Esta função retorna um número inteiro pseudoaleatório entre 0 e RAND_MAX, que é uma constante definida na biblioteca <stdlib.h>. A sequência de números gerados por rand() é determinada pela semente inicial fornecida por srand().

//srand(unsigned int seed): Esta função define a semente para o gerador de números aleatórios. A semente é um valor usado para iniciar a sequência de números pseudoaleatórios. Se você usar a mesma semente, a sequência de números gerados por rand() será a mesma. Para obter uma sequência diferente a cada execução do programa, geralmente você usa a função time() da biblioteca <time.h> para passar um valor de semente baseado no tempo atual.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Define a semente com base no tempo atual
    srand(time(NULL));

    // Gera e imprime 5 números aleatórios
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }

    return 0;
}

//Nesse exemplo, srand(time(NULL)) configura a semente para a sequência de números aleatórios com base no tempo atual. Isso garante que a sequência de números gerados por rand() seja diferente a cada vez que o programa é executado.