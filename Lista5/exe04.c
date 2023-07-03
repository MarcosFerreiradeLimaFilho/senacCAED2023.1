#include <stdio.h>

float realizarOperacao(float valor1, float valor2, char operador) {
    float resultado;

    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            break;
        case '-':
            resultado = valor1 - valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            resultado = valor1 / valor2;
            break;
        default:
            printf("Operador inválido!\n");
            resultado = 0;
            break;
    }

    return resultado;
}

int main() {
    float valor1, valor2;
    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    float resultado = realizarOperacao(valor1, valor2, operador);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}

