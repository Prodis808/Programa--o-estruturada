/*Seja uma estrutura para descrever os carros de uma determinada
revendedora, contendo os seguintes campos: marca, ano, cor e
preço.

a) Escrever a definição da estrutura carro.

b) Declarar um vetor do tipo da estrutura definida acima, de
tamanho 20.

Crie um menu para:
• Ler o vetor.

• Ler um preço e mostrar os carros (marca, cor e ano) que tenham
preço igual ou menor ao preço recebido.

• Ler a marca de um carro e mostrar as informações de todos os
carros dessa marca (preço, ano e cor).

• Ler a marca, ano e cor e informar se existe ou não um carro com
essas características. Se existir, informar o preço.
*/

#include <stdio.h>
#include <string.h> 

struct carro {
    char marca[20];
    char nome[20];
    int ano;
    char cor[20];
    float preco;
};

void cadastrar(struct carro *carros, int quantidade_carros) {
    int i;
    for (i = 0; i < quantidade_carros; i++) {
        printf("Digite o nome do carro: ");
        scanf(" %s", carros[i].nome);

        printf("Digite ano do carro: ");
        scanf("%d", &carros[i].ano);

        printf("Digite a marca do carro: ");
        scanf(" %s", carros[i].marca);

        printf("Digite a cor do carro: ");
        scanf(" %s", carros[i].cor);

        printf("Digite o preco do carro: ");
        scanf("%f", &carros[i].preco);
    }
    printf("Carros cadastrados.\n");
}

void busca_por_preco(struct carro *carros, int quantidade_carros) {
    int i, encontrado = 0;
    float preco_digitado;

    printf("Digite o preço que deseja buscar: ");
    scanf("%f", &preco_digitado);

    for (i = 0; i < quantidade_carros; i++) {
        if (carros[i].preco <= preco_digitado) {
            printf("Nome: %s, Marca: %s, Ano: %d, Cor: %s, Preco: %.2f\n", carros[i].nome, carros[i].marca, carros[i].ano, carros[i].cor, carros[i].preco);
            encontrado = 1;
        }
    }
    if (encontrado == 0) {
        printf("Nenhum carro com valor menor ou igual a %.2f foi encontrado.\n", preco_digitado);
    }
}

void busca_por_marca(struct carro *carros, int quantidade_carros) {
    int i, encontrado = 0;
    char marca_digitada[20];

    printf("Digite a marca que deseja buscar: ");
    scanf(" %19s", marca_digitada);

    for (i = 0; i < quantidade_carros; i++) {
        if (strcmp(carros[i].marca, marca_digitada) == 0) {
            printf("Nome: %s, Marca: %s, Ano: %d, Cor: %s, Preco: %.2f\n", carros[i].nome, carros[i].marca, carros[i].ano, carros[i].cor, carros[i].preco);
            encontrado = 1;
        }
    }
    if (encontrado == 0) {
        printf("Nenhum carro com essa marca foi encontrado.\n");
    }
}

void busca_por_tudo(struct carro *carros, int quantidade_carros) {
    int i, encontrado = 0, ano_digitado;
    char marca_digitada[20], cor_digitada[20];

    printf("Digite a marca que deseja buscar: ");
    scanf(" %19s", marca_digitada);
    printf("Digite a cor que deseja buscar: ");
    scanf(" %19s", cor_digitada);
    printf("Digite o ano que deseja buscar: ");
    scanf("%d", &ano_digitado);

    for (i = 0; i < quantidade_carros; i++) {
        if (strcmp(carros[i].marca, marca_digitada) == 0 && strcmp(carros[i].cor, cor_digitada) == 0 && carros[i].ano == ano_digitado) {
            printf("Nome: %s, Marca: %s, Ano: %d, Cor: %s, Preco: %.2f\n", carros[i].nome, carros[i].marca, carros[i].ano, carros[i].cor, carros[i].preco);
            encontrado = 1;
        }
    }
    if (encontrado == 0) {
        printf("Nenhum carro com essas características foi encontrado.\n");
    }
}

int main() {
    struct carro carros[20];
    int escolha;

    printf("SISTEMA REVENDEDORA\n");
    while (1) {
        printf("\n->MENU<-\n");
        printf("1 para cadastrar os carros.\n2 para buscar pelo preco.\n3 para buscar por marca.\n4 para buscar por tudo.\n5 para sair do programa.\n");
        
        scanf("%d", &escolha);

        if (escolha == 5) {
            printf("Programa encerrado.\n");
            break;
        }

        switch (escolha) {
            case 1:
                cadastrar(carros, 20);
                break;
            case 2:
                busca_por_preco(carros, 20);
                break;
            case 3:
                busca_por_marca(carros, 20);
                break;
            case 4:
                busca_por_tudo(carros, 20);
                break;
            default:
                printf("Opcao invalida.\n"); 
                break;
        }
    }
    return 0;
}