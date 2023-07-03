#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    printf("A soma da série S é: %f\n", soma);

    return 0;
}

