#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Perguntar nome
    string nome = get_string("Qual seu nome? ");

    // Comprimentar usuário
    printf("Olá, %s!\n", nome);

    // Perguntar altura e armazenar
    int altura;
    do
    {
        altura = get_int("Agora, vamos montar a escada dupla, escolha uma altura de 1 a 8: ");
    }
    while (altura < 1 || altura > 8);

    // Loop para construir as linhas da escada
    for (int i = 1; i <= altura; i++)
    {
        // Imprime espaços à esquerda para alinhar a escada esquerda
        for (int j = 0; j < altura - i; j++)
        {
            printf(" ");
        }

        // Escada subindo do lado esquerdo
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Dois espaços entre as escadas
        printf("  ");

        // Escada descendo do lado direito
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Nova linha
        printf("\n");
    }

    return 0;
}