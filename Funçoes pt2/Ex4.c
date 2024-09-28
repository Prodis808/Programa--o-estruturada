//Escreva uma função que receba um numero inteiro positivorepresentando os segundos e converta-o para horas, minutos esegundos.

#include <stdio.h>

void convesor (int total_segundos) {
    int segundos, minutos, horas;

    horas = total_segundos / 3600;    // Divide os segundos por 3600 (equivalente a 1 hora) e fica apenas com a parte inteira
    minutos = (total_segundos % 3600) / 60;    // Fica com o resto da divisao e divide por 60 para obter os minutos
    segundos = total_segundos % 60;    // Extrai os segundos restantes do processo final

    printf("Horas %d\nMinutos %d\nSegundos %d\n", horas, minutos, segundos);
}

int main() {
    int segundos;

    printf("Digite quantos segundos: ");
    scanf("%d", &segundos);

    convesor(segundos);

    return 0;
}