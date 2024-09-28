//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior
//que 20% do salário imprima: Empréstimo não ao concedido, caso contrário imprima: Empréstimo
//concedido.

#include <stdio.h>

int main() {
    double salario, emprestimo;

    printf("Digite o valor do seu salario: ");
    scanf("%lf", &salario);

    printf("Digite agora o emprestimo desejado: ");
    scanf("%lf", &emprestimo);

    if (emprestimo > salario * 1.2) {
        printf("Emprestimo no valor de %lf negado.", emprestimo);
    } else {
        printf("Emprestimo no valor de %lf concebido.", emprestimo);
    }
    return 0;
}