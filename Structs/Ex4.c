/*Escreva um programa que auxilie no controle de uma fazenda que possui um total de
200 cabeças de gado. A base de dados é formada por um conjunto de estruturas
contendo os seguintes campos referente a cada cabeça de gado: código da cabeça de
gado, número de litros de leite produzido por semana, quantidade de alimento ingerida
por semana - em quilos, data de nascimento e abate (‘N’ (não) ou ‘S’ (sim)).
• Ler a base de dados armazenando em um vetor de estruturas.
• Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:
tenha mais de 5 anos, ou produza menos de 40 litros de leite por semana, ou; produza
entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de alimento por dia.
Crie o menu de opções para:
c) Calcular e mostrar a quantidade total de leite produzida por semana;
d) Calcular e mostrar a quantidade total de alimento consumido por semana;
e) Calcular e mostrar a quantidade total de leite a ser produzida por semana, após o
abate;
f) Calcular e mostrar o total de alimento consumido por semana após o abate;
g) Calcular e mostrar a quantidade de cabeças de gado que irão para o abate.
h) Sair do programa.
*/

#include <stdio.h>

    struct gado {
        int id;
        int litros;
        int alimento;
        int ano;
        char abate;
    };

//Funções de cadastro
void cadastrar(struct gado *gados, int quantidade_gados) {
    int i;

    for(i=0;i<quantidade_gados;i++) {
        printf("Digite o id do gado: ");
        scanf("%d", &gados[i].id);
        printf("\n");

        printf("Digite quantos litros faz o gado por semana: ");
        scanf("%d", &gados[i].litros);
        printf("\n");

        printf("Digite quantos kg de alimento o gado come por semana: ");
        scanf("%d", &gados[i].alimento);
        printf("\n");

        printf("Digite o ano que ele nasceu: ");
        scanf("%d", &gados[i].ano);
        printf("\n");
    }
    printf("Gados cadastrados com sucesso\n");
}

void condicao_abate(struct gado *gados, int quantidade_gados) {
    int i;

    for(i=0;i<quantidade_gados;i++) {
        if ((2024 - gados[i].ano > 5) || (gados[i].litros < 40) || ((gados[i].litros >= 50 && gados[i].litros <= 70) && gados[i].alimento > 50)) {
            gados[i].abate = 'S';
        }
        else {
            gados[i].abate = 'N';
        }
    }
    printf("Condicoes de abates finalizadas.\n");
}

//Funções do menu
void soma_leite(struct gado *gados, int quantidade_gados) {
    int i, soma=0;

    for(i=0;i<quantidade_gados;i++) {
        soma += gados[i].litros;
    }
    printf("A quantidade de Leite em litros produzida por semana e: %d\n", soma);
}

void soma_alimento(struct gado *gados, int quantidade_gados) {
    int i, soma=0;

    for(i=0;i<quantidade_gados;i++) {
        soma += gados[i].alimento;
    }
    printf("A quantidade de alimento consumido por semana e: %d\n", soma); 
}

void leite_pos_abate(struct gado *gados, int quantidade_gados) {
    int i, soma=0, total_abates=0,quantidade_gados_pos_abate;

    for(i=0;i<quantidade_gados;i++) {
        if(gados[i].abate == 'N') {
            total_abates++;
        }
    }
    quantidade_gados_pos_abate = quantidade_gados - total_abates;

    for(i=0;i<quantidade_gados_pos_abate;i++) {
        soma += gados[i].litros;
    }
    printf("A quantidade de leite produzido pos abate e: %d\n", soma);
}

void alimento_pos_abate(struct gado *gados, int quantidade_gados) {
    int i, soma=0, total_abates=0,quantidade_gados_pos_abate;

    for(i=0;i<quantidade_gados;i++) {
        if(gados[i].abate == 'N') {
            total_abates++;
        }
    }
    quantidade_gados_pos_abate = quantidade_gados - total_abates;

    for(i=0;i<quantidade_gados_pos_abate;i++) {
        soma += gados[i].alimento;
    }
    printf("A quantidade de alimento consumido pos abate e: %d\n", soma);
}

void quantidade_abate(struct gado *gados, int quantidade_gados) {
    int i, soma=0;

    for(i=0;i<quantidade_gados;i++) {
        if (gados[i].abate == 'S') {
            soma++;
        }
    }
    printf("A quantiade de gados que irao para o abate e de: %d\n", soma);
}

void sair() {
    printf("Programa finalizado.");
}


int main() {
    struct gado gados[200];
    int entrada_usuario;

    cadastrar(gados, 200);
    condicao_abate(gados,200);

    while(1) {
        printf("Menu:\n");
        printf("1 para quantidade total de leite produzida por semana\n2 para quantiade total de alimento consumido por semana\n3 para total de leite produzido pos abate\n4 para total de alimento consumido pos abate\n5 para quantiade de animais que vao para o abate\n6 para sair");
        scanf("%d", &entrada_usuario);

        if (entrada_usuario == 6) {
            sair();
            break;
        }
        switch (entrada_usuario) {
            case 1:
                soma_leite(gados,200);
                break;
            case 2:
                soma_alimento(gados,200);
                break;
            case 3:
                leite_pos_abate(gados,200);
                break;
            case 4:
                alimento_pos_abate(gados,200);
                break;
            case 5:
                quantidade_abate(gados,200);
            default:
                printf("Opcao invalida.\n"); 
                break;   
        }
    }
    return 0;
}