#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;

    printf("Digite um texto: ");
    gets(texto);

    while (texto[i] != '\0') {
        i++;
    }

    printf("O texto tem %d caracteres.\n", i);

    return 0;
}