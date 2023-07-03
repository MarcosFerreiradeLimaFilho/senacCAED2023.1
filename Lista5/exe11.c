#include <stdio.h>

void verificarTriangulo(float X, float Y, float Z) {
    if (X + Y > Z && X + Z > Y && Y + Z > X) {
        if (X == Y && Y == Z) {
            printf("Tri�ngulo Equil�tero\n");
        } else if (X == Y || X == Z || Y == Z) {
            printf("Tri�ngulo Is�sceles\n");
        } else {
            printf("Tri�ngulo Escaleno\n");
        }
    } else {
        printf("Os valores n�o formam um tri�ngulo\n");
    }
}

int main() {
    float X, Y, Z;

    printf("Digite os valores dos lados do tri�ngulo:\n");
    printf("Lado X: ");
    scanf("%f", &X);
    printf("Lado Y: ");
    scanf("%f", &Y);
    printf("Lado Z: ");
    scanf("%f", &Z);

    verificarTriangulo(X, Y, Z);

    return 0;
}


