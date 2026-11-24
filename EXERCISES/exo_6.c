#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // maximum of two integers

    // read a , b

    int a, b;

    printf("Inserer une nombre entier a \n");

    scanf("%i", &a);

    printf("Inserer une nombre entier b \n");

    scanf("%i", &b);

    // display the larger of the two

    if ( a > b)
    {

        printf("a (%i) est plus grand que b(%i) \n", a, b);

    } else {

        printf("b (%i) est plus grand que a(%i) \n", b, a);

    }

    return 0;

}