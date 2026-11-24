#include <stdio.h>

int main ()
{

    int x;

    printf("insérer la valeur de x \n");

    scanf("%i", x);

    if (x < 0)
    {
        x = -1 * x;
    }
    
    printf("Valeur = %f", x);
}