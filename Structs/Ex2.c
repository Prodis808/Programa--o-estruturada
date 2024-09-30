/*Faça um programa que leia o código, a descrição, o valor unitário e a
quantidade em estoque de 10 produtos comercializados em uma papelaria.
Estas informações deverão ser armazenadas em um vetor de estruturas.

Depois da leitura dos dados de entrada, o programa deverá:
• Realizar uma rotina que permita alterar a descrição, o valor unitário e a
quantidade em estoque de determinado produto, que deverá ser
localizado por meio do seu código;

• Realizar uma rotina que mostre todos os produtos cuja descrição
comece com determinada letra (informada pelo usuário);

• Mostrar todos os produtos com quantidade em estoque inferior a 5
unidades.*/

#include <stdio.h>
#include <string.h>

// Criando a estrutura dos produtos
struct produto {
    int id;
    float valor;
    char descricao[50];
    int quantidade;
};


void altera(struct produto *itens, int numero_de_produtos) { // Passagem de parametro por referência, e o total de produtos que tenho cadastrado
    int i, id_digitado, encontrado = 0;

    printf("Digite o codigo do produto que deseja alterar: ");
    scanf("%d", &id_digitado); 

    // Iterando até achar o produto
    for (i = 0; i < numero_de_produtos; i++) {
        if (itens[i].id == id_digitado) { 
            encontrado = 1;

            printf("Produto encontrado!\n");
            printf("Descrição atual: %s\n", itens[i].descricao); 
            printf("Valor unitário atual: %.2f\n", itens[i].valor); 
            printf("Quantidade em estoque atual: %d\n", itens[i].quantidade);

            // Alterando cada campo do produto
            printf("Digite a nova descrição: ");
            scanf(" %[^\n]", itens[i].descricao); 

            printf("Digite o novo valor: ");
            scanf("%f", &itens[i].valor);

            printf("Digite a nova quantidade: ");
            scanf("%d", &itens[i].quantidade);

            printf("Produto alterado com sucesso!\n");
            break;
        }
    }
    if (encontrado == 0) {
        printf("Id incorreto, o produto não foi localizado.\n");  
    }
    printf("\n");
}

void mostra(struct produto *itens, int numero_de_produtos) { // Passagem de parametro por referência, e o total de produtos que tenho cadastrado
    int i, encontrado=0;
    char letra;

    printf("Digite a letra: ");
    scanf(" %c", &letra);

    printf("Produtos que a descrição começa com '%c': \n", letra);
    // Iterando sobre todos os produtos e verificando a primeira letra de cada
    for(i=0;i<numero_de_produtos;i++) {
        if (itens[i].descricao[0] == letra) {
            printf("ID: %d, Nome: %s, Valor: %.2f, Quantidade: %d\n", itens[i].id, itens[i].descricao, itens[i].valor, itens[i].quantidade);
            encontrado = 1;
        }
    }
    if (encontrado == 0) {
        printf("Não existem produtos com essa letra.");
    }
    printf("\n");
}

void mostra_estoque(struct produto *itens, int numero_de_produtos) { // Passagem de parametro por referência, e o total de produtos que tenho cadastrado
    int i, encontrado=0;

    printf("Produtos com estoque inferior a 5: \n");
    // Iterando sobre todos os produtos para verificar quais possuem estoque menor que 5 unidades
    for(i=0;i<numero_de_produtos;i++) {
        if (itens[i].quantidade<5) {
            printf("ID: %d, Nome: %s, Valor: %.2f, Quantidade: %d\n", itens[i].id, itens[i].descricao, itens[i].valor, itens[i].quantidade);
            encontrado = 1;
        }
    }
    if (encontrado == 0) {
        printf("Todos os produtos do estoque possuem mais de 5 unidades.");
    }
    printf("\n");
}

int main() {
    struct produto itens[10]; // Declarando uma lista de estruturas
    int i;

    // Laço para pegar as informações de todos os produtos
    for (i = 0; i < 10; i++) { 
        printf("Digite o nome do produto: ");
        scanf("%s", itens[i].descricao);

        printf("Digite o codigo do produto: ");
        scanf("%d", &itens[i].id);

        printf("Digite o valor do produto: ");
        scanf("%f", &itens[i].valor);

        printf("Digite a quantidade desse produto: ");
        scanf("%d", &itens[i].quantidade);
        printf("\n");
    }

    // Chamando as funções
    altera(itens, 10); 
    mostra(itens, 10);
    mostra_estoque(itens,10);

    return 0;
}
