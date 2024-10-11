#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Array para armazenar a string
    int i, length;

    // Solicita uma string ao usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string, incluindo espaços

    // Remove o caractere de nova linha, se houver
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Imprime a string invertida
    printf("String invertida: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]); // Imprime cada caractere da string na ordem inversa
    }
    printf("\n"); // Nova linha após a string invertida

    return 0;
}
