#include <stdio.h>

int main ()

{

    // write a program that prints Hello !

    printf("Hello \n");

    // read two inegers a and b 
    int a , b ;

    printf("inserer la valeur de a \n");
    scanf ("%i", &a);

    printf("inserer la valeur de b \n");
    scanf ("%i", &b);

    // compute s = a + b 
    int s ;
    s = a + b ;

    // display s
    printf("La valeur de s est egale a : %i \n", s);

    return 0;

}