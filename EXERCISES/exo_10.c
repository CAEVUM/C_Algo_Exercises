#include <stdio.h>
#include <math.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // roots of quadratic

    // read a, b, c
    float a, b, c;

    printf("Soit l equation : f(x) = ax^2 + bx +c \n \n");

    printf("Inserer une valeur reelle pour a \n");
    scanf("%f", &a);

    printf("Inserer une valeur reelle pour b \n");
    scanf("%f", &b);

    printf("Inserer une valeur reelle pour c \n");
    scanf("%f", &c);

    printf("verification : f(x) = %f x^2 + %f x + %f \n", a, b, c);

    // compute the discriminant delta = b^2 - 4ac

    // calcul de delta
    printf("calcul de delta \n");

    float delta ;

    delta = ( b * b ) - (4 * a * c) ;

    printf("delta = %f", delta);

    // display the roots according to the sign of delta

    if(delta > 0)
    {
        float racine_delta = sqrt(delta) ;

        float x1, x2 ;

        x1 = (-b -racine_delta) / (2 * a) ;
        x2 = (-b +racine_delta) / (2 * a) ;

        printf("Les racines sont x1 = %f et x2 = %f \n", x1, x2);

    }

    if(delta < 0)
    {
        
        printf("aucune solution \n");

    }

    if(delta == 0)
    {
        float x ;

        x = -b / (2 * a);

        printf("La racine est x = %f \n", x);
    }
    return 0;

}