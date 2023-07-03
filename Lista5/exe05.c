#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 1) {
        return base;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = potencia(base, expoente);
    printf("Resultado: %d\n", resultado);

    return 0;
}

