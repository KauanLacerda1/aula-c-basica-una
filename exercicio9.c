#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Converte para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Exibe o resultado
    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
