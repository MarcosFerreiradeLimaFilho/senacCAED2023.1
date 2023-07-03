#include <stdio.h>

int calcularDiasMes(int mes, int ano) {
    int dias;

    switch (mes) {
        case 1: // Janeiro
        case 3: // Março
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Outubro
        case 12: // Dezembro
            dias = 31;
            break;
        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            dias = 30;
            break;
        case 2: // Fevereiro
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                dias = 29; // Ano bissexto
            } else {
                dias = 28;
            }
            break;
        default:
            dias = -1; // Valor inválido para mês
    }

    return dias;
}

int main() {
    int mes, ano;

    printf("Digite o número do mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    int resultado = calcularDiasMes(mes, ano);

    if (resultado != -1) {
        printf("O mês possui %d dias.\n", resultado);
    } else {
        printf("Mês inválido!\n");
    }

    return 0;
}

