#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor;

    // Lê os 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa o maior e o menor com o primeiro elemento do array
    maior = menor = numeros[0];

    // Encontra o maior e o menor valor
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Exibe o resultado
    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
