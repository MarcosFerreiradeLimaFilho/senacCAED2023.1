#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    int opcao;
    float temperatura;

    printf("Escolha a opção de conversão:\n");
    printf("1. de Celsius para Fahrenheit\n");
    printf("2. de Celsius para Kelvin\n");
    printf("3. de Fahrenheit para Celsius\n");
    printf("4. de Fahrenheit para Kelvin\n");
    printf("5. de Kelvin para Celsius\n");
    printf("6. de Kelvin para Fahrenheit\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("Temperatura em Fahrenheit: %.2f\n", celsiusToFahrenheit(temperatura));
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("Temperatura em Kelvin: %.2f\n", celsiusToKelvin(temperatura));
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("Temperatura em Celsius: %.2f\n", fahrenheitToCelsius(temperatura));
            break;
        case 4:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("Temperatura em Kelvin: %.2f\n", fahrenheitToKelvin(temperatura));
            break;
        case 5:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf("Temperatura em Celsius: %.2f\n", kelvinToCelsius(temperatura));
            break;
        case 6:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf("Temperatura em Fahrenheit: %.2f\n", kelvinToFahrenheit(temperatura));
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

