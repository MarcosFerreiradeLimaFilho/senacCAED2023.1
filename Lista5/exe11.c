#include <stdio.h>

void verificarTriangulo(float X, float Y, float Z) {
    if (X + Y > Z && X + Z > Y && Y + Z > X) {
        if (X == Y && Y == Z) {
            printf("Triângulo Equilátero\n");
        } else if (X == Y || X == Z || Y == Z) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores não formam um triângulo\n");
    }
}

int main() {
    float X, Y, Z;

    printf("Digite os valores dos lados do triângulo:\n");
    printf("Lado X: ");
    scanf("%f", &X);
    printf("Lado Y: ");
    scanf("%f", &Y);
    printf("Lado Z: ");
    scanf("%f", &Z);

    verificarTriangulo(X, Y, Z);

    return 0;
}


