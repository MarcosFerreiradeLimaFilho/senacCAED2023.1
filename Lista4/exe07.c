#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Valores m�ltiplos de 7 no intervalo:\n");
    if (valor1 <= valor2) {
        for (int i = valor1; i <= valor2; i++) {
            if (i % 7 == 0) {
                printf("%d\n", i);
            }
        }
    } else {
        for (int i = valor1; i >= valor2; i--) {
            if (i % 7 == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}

