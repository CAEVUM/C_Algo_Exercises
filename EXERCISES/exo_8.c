#include <stdio.h>


int main ()

{

    int x ;

    printf("inserer la valeur de x \n");
    scanf ("%i", x);

    int resteDivPar2 = x % 2 ;

    if ( resteDivPar2 == 0)
    {
        printf("x est pair");
    } else {
        printf("X est impair");
    }



}