#include <stdio.h>

int main() {
    int valor, soma = 0;

    printf("Digite um valor positivo (ou um valor negativo para sair): ");
    scanf("%d", &valor);

    while (valor >= 0) {
        soma += valor;
        printf("Digite um valor positivo (ou um valor negativo para sair): ");
        scanf("%d", &valor);
    }

    printf("Soma dos valores lidos: %d\n", soma);

    return 0;
}

