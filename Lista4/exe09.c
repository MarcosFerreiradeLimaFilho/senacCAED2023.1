#include <stdio.h>

int main() {
    int soma = 0;
    int count = 0;
    int i = 2;

    while (count < 50) {
        soma += i;
        count++;
        i += 2;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}

