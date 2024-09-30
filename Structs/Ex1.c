/*Criar uma estrutura para receber os nomes de clubes de futebol e seus
respectivos pontos no campeonato. Ler os nomes e os pontos e mostrar
qual equipe (nome e pontos) é a vencedora. Considerar 10 clubes no total.*/

#include <stdio.h>

int main() {
    // Criando a estrutura 
    struct time {
        char nome[20];
        int pontos;
    };

    struct time times[10]; // Declarando a lista de estruturas (lista de times)
    int i, clube_vencedor = 0;

    // Iterando sobre as estruturas e atribuindo a cada uma delas o time e os pontos
    for(i=0;i<10;i++) {
        printf("Digite o nome do time %d: \n", i+1);
        scanf("%s", times[i].nome);
        printf("Digite os pontos do time %d: \n", i+1);
        scanf("%d", &times[i].pontos);
    }

    // Verificando qual time tem mais pontos
    for(i=0;i<10;i++) {
        if (times[i].pontos > times[clube_vencedor].pontos) {
            clube_vencedor = i;
        }
    }

    // Printando time vencedor
    printf("O Time campeao foi o %s com %d pontos", times[clube_vencedor].nome, times[clube_vencedor].pontos);

    return 0;
}
