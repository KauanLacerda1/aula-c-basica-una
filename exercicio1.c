#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }

    return 0;
}
