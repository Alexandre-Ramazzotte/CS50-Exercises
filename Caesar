#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string plain_text = get_string ("Plain text: ");
    int len = strlen(plain_text);
    int chypher[len];
    for (int i = 0; len > i; i++)
    {
        int lettersup = isupper(plain_text[i]);
        int letterl = islower(plain_text[i]);
        if (lettersup > 0 || letterl > 0)
        {
            chypher[i] = (int) plain_text[i] + 1;
        }
        else
        {
            chypher[i] = plain_text[i];
        }
    }
    printf ("Cyphered text: ");
    for (int i = 0; len > i; i++)
    {
        printf ("%c", (char) chypher[i]);
    }
    printf ("\n");
}
