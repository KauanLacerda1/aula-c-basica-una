#include <stdio.h>

void bubbleSort(int arr[], int tamanho) {
    int i, j, temp;

    // Algoritmo Bubble Sort
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[10];
    int i;

    // Leitura dos números
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordena o array
    bubbleSort(numeros, 10);

    // Exibe o array ordenado
    printf("\nArray em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
