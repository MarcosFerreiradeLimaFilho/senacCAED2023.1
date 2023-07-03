#include <stdio.h>

#define PI 3.14159

float calcularArea(float raio) {
    return 4 * PI * raio * raio;
}

float calcularVolume(float raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio > 0) {
        printf("Área da esfera: %.2f\n", calcularArea(raio));
        printf("Volume da esfera: %.2f\n", calcularVolume(raio));
    } else {
        printf("Raio inválido!\n");
    }

    return 0;
}

