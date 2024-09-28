#include <stdio.h>

int main() {
    double valor_inicial, valor_total, juros_mes, total_juros;
    int meses, i;

    printf("Informe o valor: \n");
    scanf("%lf", &valor_inicial);

    printf("Informe o percentual de juros por mes: \n");
    scanf("%lf", &juros_mes);

    printf("Informe o tempo em meses \n");
    scanf("%d", &meses);

    for (i=0; i <= meses; i++) {
        valor_total = valor_total * (juros_mes/100);

    }
    total_juros = valor_total - valor_inicial;
    printf("O Montante apos %d e: R$ %lf\nO total de juros foi R$ %lf", meses, valor_total, total_juros);
    return 0;
}