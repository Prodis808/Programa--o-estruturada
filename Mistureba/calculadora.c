#include <stdio.h>

int main() {

    double n1, n2, soma, subtracao, divisao, multiplicacao;
    int operacao, contador_erros;

    printf("Calculadora\n");
    printf("Digite um numero: \n");
    scanf("%lf", &n1);
    
    printf("1 para adicao\n2 para subtracao\n3 para divisao: \n4 para multiplicacao\n");
    printf("Digite a opercao: \n");
    scanf("%d", &operacao);
    
    printf("Digite outro numero: \n");
    scanf("%lf", &n2);

    contador_erros = 0;
    while (operacao < 1 || operacao > 4) {

        contador_erros ++;
        if (contador_erros == 3) {
            printf("Programa encerrado.");
            return 1;
        }

        printf("O numero da operacao nao corresponde, por gentileza, digite um numero correspontende de 1 a 4: ");
        scanf("%d", &operacao);
        
    }
    switch (operacao) {

        case 1:
            soma = n1 + n2;
            printf("A soma e: %.2lf", soma);
            break;

        case 2:
            subtracao = n1 - n2;
            printf("A subtracao e: %.2lf", subtracao);
            break;
        
        case 3:
            if (n2 != 0) {
                divisao = n1/n2;
                printf("A divisao e: %.2lf", divisao);
            } else {
                printf("Divisao por 0 nao permitida. ");
            }
            break;
        
        case 4:
            multiplicacao = n1 * n2;
            printf("A multiplicacao e: %.2lf", multiplicacao);
            break;
    }
    return 0;
}