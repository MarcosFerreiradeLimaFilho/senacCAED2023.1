#include <stdio.h>

char obterConceito(float media) {
    if (media >= 0.0 && media <= 4.9) {
        return 'D';
    } else if (media >= 5.0 && media <= 6.9) {
        return 'C';
    } else if (media >= 7.0 && media <= 8.9) {
        return 'B';
    } else if (media >= 9.0 && media <= 10.0) {
        return 'A';
    } else {
        return 'X'; // Valor inv�lido
    }
}

int main() {
    float media;

    printf("Digite a m�dia final do aluno: ");
    scanf("%f", &media);

    char conceito = obterConceito(media);

    if (conceito != 'X') {
        printf("Conceito: %c\n", conceito);
    } else {
        printf("M�dia inv�lida!\n");
    }

    return 0;
}

