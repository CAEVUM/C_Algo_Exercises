#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // celcius fahrenheit conversion
    float d_C ;

    // read C in degre Celcius
    printf("inserer une temperature en degre Celcius \n");

    scanf("%f", &d_C);

    // calcul , conversion 
    float d_F ;

    d_F = (d_C * 9/5) + 32 ;

    // display F - 1.8C + 32

    printf("La temperature inseree equivaut a : %f degres Fahrenheit\n", d_F) ;

    return 0;

}