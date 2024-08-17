#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Definir digitos
    int digitos[16];

    // Armazenar número do cartão
    long card_number = get_long("Insira o número do cartão: ");
    long checksum = card_number;
    if (card_number < 0 || card_number > 1000000000000000)
    {
        printf("Um número de cartão deve ser inserido!");
        return 1;
    }

    //Contador e armazenamento dos digitos
}