#include <stdio.h>

int calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino) {
    int duracao;

    duracao = (horaTermino * 60 + minutoTermino) - (horaInicio * 60 + minutoInicio);

    if (duracao < 0) {
        duracao += 24 * 60; // Adiciona 24 horas em minutos
    }

    return duracao;
}

int main() {
    int horaInicio, minutoInicio, horaTermino, minutoTermino;

    printf("Digite a hora de início do jogo:\n");
    printf("Hora: ");
    scanf("%d", &horaInicio);
    printf("Minuto: ");
    scanf("%d", &minutoInicio);

    printf("Digite a hora de término do jogo:\n");
    printf("Hora: ");
    scanf("%d", &horaTermino);
    printf("Minuto: ");
    scanf("%d", &minutoTermino);

    int duracao = calcularDuracaoJogo(horaInicio, minutoInicio, horaTermino, minutoTermino);

    printf("A duração do jogo é de %d minutos.\n", duracao);

    return 0;
}

