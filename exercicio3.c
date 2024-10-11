#include <stdio.h>

int main() {
    int numero, i, primo = 1;

    // Solicita um número ao usuário
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número é menor que 2
    if (numero < 2) {
        primo = 0; // Números menores que 2 não são primos
    } else {
        // Verifica se o número é primo
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = 0; // Encontrou um divisor, não é primo
                break;
            }
        }
    }

    // Exibe o resultado
    if (primo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }
    
    return 0;
}
