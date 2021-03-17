#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main (void)
{
    float dollars;
    int coins = 0;
    do 
    {
        dollars = get_float("digite o número de dólares: ");
    }
    while (dollars < 0 );
    float cents = dollars * 100;
    while (cents >= 1)
    {
        if (cents >= 25)
        {
            cents = cents -25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents = cents -10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents = cents -5;
            coins++;
        }
        else 
        {
            cents = cents -1;
            coins++;
        }
    }
    printf ("%i\n", coins);
}
