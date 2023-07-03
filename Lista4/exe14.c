#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        printf("%d. %d\n", i, i * i);
        soma += i * i;
    }

    printf("A soma dos quadrados é: %d\n", soma);

    return 0;
}

