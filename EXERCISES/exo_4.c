#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // average of three numbers

    // read real numbers a , b , c display their average

    float a, b, c ;

    printf("Inserer une valeur pour a \n");

    scanf("%f", &a);

    printf("Inserer une valeur pour b \n");

    scanf("%f", &b);

    printf("Inserer une valeur pour c \n");

    scanf("%f", &c);

    float moyenne = (a + b + c) / 3 ;

    printf("La moyenne entre a , b , c est : %f \n", moyenne);

    return 0;

}