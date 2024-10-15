#include <stdio.h>

// Função para calcular o fatorial
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("O fatorial de %d é: %d\n", numero, fatorial(numero));

    return 0;
}
