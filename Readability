#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int letters = 0;
int words = 1;
int sentences = 0;

int main (void)
{
    string text = get_string("Texto: ");
    int len = strlen(text);
    for (int i = 0; len > i; i++)
    {
        int letterl = islower(text[i]);
        int lettersup = isupper(text[i]);
        int spaces = isspace(text[i]);
        if (letterl > 0 || lettersup > 0)
        {
            letters++;
        }
        else if (spaces > 0)
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    int L = round((100 * letters)/words);
    int S = round((100*sentences)/words);
    float grade = round(0.0588 * L - 0.296 * S - 15.8);
    if (grade <1)
    {
        grade = 1;
    }
    else if (grade >16)
    {
        grade = 16;
    }
    printf ("Grade is: %f\n", grade);
}
