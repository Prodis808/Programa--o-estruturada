#include <stdio.h>

int tipotriangulo(int l1, int l2, int l3) {

    if ((l1 == l2) && (l2 == l3)) {
        return 0;
    } else if ((l1 == l2) || (l2 == l3)){
        return 1;
    } else {
        return 2;
    } 
}

int main() {
    int l1, l2, l3;

    printf("Informe os 3 lados de um triangulo: \n");
    scanf("%d %d %d", &l1, &l2, &l3);

    printf("%d", tipotriangulo(l1,l2,l3));
    
    return 0;
}