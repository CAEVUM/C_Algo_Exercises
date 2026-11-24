#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // swapping variables

    //swap the values of two integers x and y

    int x ;

    int y ;

    printf("Inserer une valeur pour x \n");
    scanf("%i", &x);

    printf("Inserer une valeur pour y \n");
    scanf("%i", &y);

    int swap ;

    swap = x ; // valeur de x dans swap

    x = y ; // valeur de y dans x

    y = swap ; // nouvelle valeur de swap (x) dans y

    printf("x = %i, y = %i \n", x, y);

    return 0;

}