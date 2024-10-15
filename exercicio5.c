#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int tamanho, i;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    tamanho = strlen(str);
    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
