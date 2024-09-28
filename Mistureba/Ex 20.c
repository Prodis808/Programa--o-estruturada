//. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda
//prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi
//aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.

#include <stdio.h>

int main() {
    double n1, n2, n3, media;

    printf("Informe a primeira nota: ");
    scanf("%lf", &n1);

    printf("Informe a segunda nota: ");
    scanf("%lf", &n2);

    printf("Informe a terceira nota: ");
    scanf("%lf", &n3);

    media = (n1 * 1 + n2 * 1 + n3 * 2) / 4;

    if (media >= 60) {
        printf("Aluno aprovado com media: %lf", media);
    } else {
        printf("Aluno reprovado com media: %lf", media);
    }

    return 0;
}