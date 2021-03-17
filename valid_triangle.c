#include <stdio.h>
#include <math.h>
#include <cs50.h>

bool valid_triangle (int lado_a, int lado_b, int lado_c);

int main ()
{
    int lado_1 = get_int ("lado a: ");
    int lado_2 = get_int ("lado b: ");
    int lado_3 = get_int ("lado c: ");

    bool validade = valid_triangle(lado_1, lado_2, lado_3);

    printf("o triângulo é %s\n", validade ? "existente" : "inexistente");
}

bool valid_triangle (int lado_a, int lado_b, int lado_c)
{
    if (lado_a > 0 && lado_b > 0 && lado_c > 0)
    {
        if (lado_a + lado_b > lado_c && lado_a + lado_c > lado_b && lado_c + lado_b > lado_a)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
