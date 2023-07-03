#include <stdio.h>

float calcularS(int N) {
    float S = 0;

    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }

    return S;
}

int main() {
    int N;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &N);

    float resultado = calcularS(N);
    printf("O valor de S é: %.2f\n", resultado);

    return 0;
}

