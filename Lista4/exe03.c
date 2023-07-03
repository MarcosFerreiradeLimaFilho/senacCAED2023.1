#include <stdio.h>

int main() {
    int valor = -1;
    for (int i = 0; i < 3; i++) {  // Repetir no máximo 3 vezes
        printf("Digite um valor positivo: ");
        scanf("%d", &valor);
        if (valor >= 0) {
            printf("Valor válido: %d\n", valor);
            break;
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int valor = -1;
    int tentativas = 0;
    while (valor < 0 && tentativas < 3) {
        printf("Digite um valor positivo: ");
        scanf("%d", &valor);
        if (valor >= 0) {
            printf("Valor válido: %d\n", valor);
        }
        tentativas++;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int valor = -1;
    int tentativas = 0;
    do {
        printf("Digite um valor positivo: ");
        scanf("%d", &valor);
        if (valor >= 0) {
            printf("Valor válido: %d\n", valor);
            break;
        }
        tentativas++;
    } while (tentativas < 3);

    return 0;
}

