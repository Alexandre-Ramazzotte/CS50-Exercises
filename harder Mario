#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int base;
    do
    {
        base = get_int("pyramid base: "); //height
    }
    while (base < 1 || base > 8);
    int space = base -1;
    int hashes = 1;
    for (int n = 0; n < base; n++)
    {
        for (int n1 = 0; n1 < space; n1++) //spaces of the first pyramid
        {
            printf(" ");
        }
        for (int i = 0; i < hashes; i++) //hashes
        {
            printf("#");
        }

        printf("  ");
        for (int i = 0; i < hashes; i++) //second pyramid
        {
            printf("#");
        }
        printf("\n");

        space--;
        hashes++;
    }
}
