#include <stdio.h>

int main()
{
    char texto[100];
    int i = 0;
    // armzena o texto
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

// contador de caracteres
    while (texto[i] != '\0' && texto[i] != '\n')
    {
        i++;
    }

    // texto invertido
    printf("O texto invertido é: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", texto[i]);
    }
    printf("\n");

    return 0;
}