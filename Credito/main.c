#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    //Armazenar número do cartão
    long card_number = get_long("Insira o número do cartão: ");
    printf("O cartão inserido é: %ld\n", card_number);

}