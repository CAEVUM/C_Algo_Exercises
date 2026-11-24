#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // pair ou impair

    printf("Inserer un nombre entier \n");

    int nombreInsere ;

    scanf("%i", &nombreInsere);

    if(nombreInsere % 2 == 0)
    {
        printf("%i est pair \n", nombreInsere);
    }else{
        printf("%i est impair \n", nombreInsere);
    }
    // demander un entier et determiner s il est pair ou impair



    return 0;
}