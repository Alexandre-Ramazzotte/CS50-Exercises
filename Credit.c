#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    long credit = get_long ("digite o número do cartão: "); // recebe o número de cartão
    long sum = 0;
    long power = 1;
    long power1 = 0;
    long credit_digits = floor(log10(credit)) + 1;
    while (power <= credit_digits)
    {
        long expo = pow (10, power);
        long expo1 = pow (10, power1);
        long credit_up = credit % expo; // resto da divisão por 10
        long par_ou_imp = power % 2;
        if (par_ou_imp == 1) // se for o primeiro e 2 dps e etc acrescentar à soma sem mudar nada
        {
            sum = credit_up/expo1 + sum; // último digito - penúltimo - ante...
        }
        else // se for 2-to-last de 2 em 2 multiplicar por 2
        {
            long produto_credit = credit_up/expo1 * 2;
            long produto_digits = floor(log10(produto_credit)) + 1;
            if (produto_digits > 1)
            {
                sum = (produto_credit / 10) + (produto_credit % 10) + sum;
            }
            else
            {
                sum = produto_credit + sum;
            }
        }
        power++;
        power1++;
    }
    int validade = sum % 10;
    long po1 = pow (10, credit_digits -1);
    long po2 = pow (10, credit_digits -2);
    if (validade == 0)
    {
        if (credit / po1 == 3 && credit_digits == 15) 
        {
            if (credit/ po2 == 4 || credit/ po2 == 7)
            {
                printf("AMEX \n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (credit/ po1 == 5 && credit_digits == 16)
        {
            if (credit/ po2 == 1 || credit/ po2  == 2 || credit/ po2 == 3 || credit/ po2  == 4 || credit/ po2 == 5)
            {
                printf("MASTERCARD \n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (credit/po1 == 4)
        {
            if (credit_digits == 13 || credit_digits == 16)
            {
                printf("VISA \n");
            }
            else 
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
