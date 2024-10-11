#include<stdio.h>

int main() {
    int numero;

    // Solicita um número ao usuário
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Imprime a tabela de multiplicação
    printf("Tabela de multiplicação de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
