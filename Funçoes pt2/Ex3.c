//Altere a função anterior para que além de devolver osparâmetros A e P, respectivamente a área e o perímetro desteretângulo, retorne 1 caso o retângulo seja um quadrado, ou 0 caso contrário.

#include <stdio.h>

int MedidasDoRetangulo(int b, int h, int *a, int *p) {
    *a = b * h;
    *p = (b*2) + (h*2);

    if (b == h) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    int b, h, a, p, quadrado;

    printf("Informe a Base e a altura do retangulo:\n");
    scanf("%d %d", &b, &h);
    quadrado = MedidasDoRetangulo(b, h, &a, &p);

    printf("A area e: %d\nO perimetro e: %d\n", a, p);
    if (quadrado == 1) {
        printf("E um quadrado.");
    } else {
        printf("Nao e um quadrado.");
    }
    return 0;
}