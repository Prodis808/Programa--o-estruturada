//Escreva uma função chamada medidasDoRetangulo que recebeos parâmetros b e h (as medidas em centímetros dos dois ladosde um retângulo) e devolve, em parâmetros, A e Prespectivamente, a área (b*h) e o perímetro (2*(b+h)) desteretângulo. Mostre os resultados na função main().


#include <stdio.h>

void MedidasDoRetangulo(int b, int h, int *a, int *p) {
    *a = b * h;
    *p = (b*2) + (h*2);

}

int main() {
    int b, h, a, p;

    printf("Informe a Base e a altura do retangulo:\n");
    scanf("%d %d", &b, &h);
    MedidasDoRetangulo(b, h, &a, &p);

    printf("A base e: %d\nO perimetro e: %d", a, p);
    return 0;
}