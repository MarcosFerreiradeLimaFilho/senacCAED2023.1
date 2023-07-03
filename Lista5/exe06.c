#include <stdio.h>

int calcularFatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    int fatorial = calcularFatorial(n);
    printf("Fatorial de %d: %d\n", n, fatorial);

    return 0;
}

