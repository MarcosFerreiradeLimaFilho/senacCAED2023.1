#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("O %do termo da série de Fibonacci é: %d\n", n, resultado);

    return 0;
}

