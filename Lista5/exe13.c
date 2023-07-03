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

    printf("Digite a hora de in�cio do jogo:\n");
    printf("Hora: ");
    scanf("%d", &horaInicio);
    printf("Minuto: ");
    scanf("%d", &minutoInicio);

    printf("Digite a hora de t�rmino do jogo:\n");
    printf("Hora: ");
    scanf("%d", &horaTermino);
    printf("Minuto: ");
    scanf("%d", &minutoTermino);

    int duracao = calcularDuracaoJogo(horaInicio, minutoInicio, horaTermino, minutoTermino);

    printf("A dura��o do jogo � de %d minutos.\n", duracao);

    return 0;
}

