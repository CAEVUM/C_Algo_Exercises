#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // positif, negatif, ou nul

    // demander un nombre et afficher s il est 

    printf("Inserer un nombre entre +infini et -infini \n");

    float nbChoisi;

    scanf("%f", &nbChoisi);

    // strictement positif, strictement negatif, ou egal a zero

    if(nbChoisi < 0)
    {
        printf("%f , le nombre que vous avez choisi est negatif \n", nbChoisi);
    }

    if(nbChoisi > 0)
    {
        printf("%f , le nombre que vous avez choisi est positif \n", nbChoisi);
    }

    if(nbChoisi == 0)
    {
        printf("%f , le nombre que vous avez choisi est nul \n", nbChoisi);
    }

    return 0;
}