#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Definir digitos
    int digitos[16], i, j;
    int contador = 0;
    int soma = 0;

    // Armazenar número do cartão
    long card_number = get_long("Insira o número do cartão: ");
    long checksum = card_number;

    // Contador e armazenamento dos digitos
    for (i = 0; checksum != 0; i++)
    {
        digitos[i] = checksum % 10;
        checksum /= 10;
        contador++;
    }

    if (contador < 13 || contador > 16)
    {
        printf("Insira um número de cartão válido!\n");
        return 1;
    }

    // Checksum usando o Algoritmo de Luhn
    for (j = 1; j < contador; j += 2)
    {
        int double_digit = digitos[j] * 2;
        if (double_digit > 9)
        {
            double_digit -= 9;
        }
        soma += double_digit;
    }
    for (j = 0; j < contador; j += 2)
    {
        soma += digitos[j];
    }

    if (soma % 10 != 0)
    {
        printf("Número de cartão inválido!\n");
        return 1;
    }

    // Identificar a marca do cartão
    if (contador == 15 && digitos[14] == 3 && (digitos[13] == 4 || digitos[13] == 7))
    {
        printf("Seu cartão American Express é válido!\n");
    }
    else if (contador == 16)
    {
        if (digitos[15] == 5 && (digitos[14] >= 1 && digitos[14] <= 5))
        {
            printf("Seu cartão Mastercard é válido!\n");
        }
        else if (digitos[15] == 4)
        {
            printf("Seu cartão Visa é válido!\n");
        }
        else
        {
            printf("Seu cartão é inválido!\n");
        }
    }
    else if (contador == 13 && digitos[12] == 4)
    {
        printf("Seu cartão Visa é válido!\n");
    }
    else
    {
        printf("Seu cartão é inválido!\n");
    }

    return 0;
}