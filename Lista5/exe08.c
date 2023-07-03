#include <stdio.h>

int calcularSomatorio(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    int somatorio = calcularSomatorio(n);
    printf("Somatório: %d\n", somatorio);

    return 0;
}

