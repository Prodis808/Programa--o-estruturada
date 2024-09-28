//Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a
//média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a
//nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.

#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if (n1 < 0 || n1 > 10) {
        printf("Notas inválidas.");
    } else if (n2 < 0 || n2 > 10) {
        printf("Notas inválidas.");
    } else {
        media = (n1 + n2)  /  2;
        printf("A media das notas e: %f", media);
    }
    return 0;
    

}