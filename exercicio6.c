#include <stdio.h>

// Função que calcula o fatorial de um número
long long fatorial(int n) {
    if (n <= 1) {
        return 1; // Fatorial de 0 e 1 é 1
    }
    return n * fatorial(n - 1); // Chamada recursiva
}

int main() {
    int numero;

    // Solicita um número ao usuário
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    // Verifica se o número é não negativo
    if (numero < 0) {
        printf("O fatorial não é definido para números negativos.\n");
    } else {
        // Chama a função fatorial e exibe o resultado
        printf("O fatorial de %d é %lld.\n", numero, fatorial(numero));
    }
 return 0
}
