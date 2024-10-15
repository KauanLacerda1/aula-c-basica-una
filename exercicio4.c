#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número para ver sua tabela de multiplicação: ");
    scanf("%d", &numero);

    printf("\nTabela de multiplicação de %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
