#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int soma = 0;

    if (valor1 <= valor2) {
        for (int i = valor1; i <= valor2; i++) {
            if (i % 2 == 0) {
                soma += i;
            }
        }
    } else {
        for (int i = valor1; i >= valor2; i--) {
            if (i % 2 == 0) {
                soma += i;
            }
        }
    }

    printf("A soma dos valores pares no intervalo é: %d\n", soma);

    return 0;
}

