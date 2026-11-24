#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");
    
    int n ;

    //table de multiplication
    printf("Choisir le nombre dont vous souhaitez afficher la table de multiplication \n");

    // read n

    scanf("%i", &n);

    int resultat ;
    
    // display n's multiplication table from 1 to 10

    for (int i = 1; i <= 10; i++)
    {
        resultat = n * i ;

        printf("%i * %i = %i \n", n, i, resultat) ;

    }
    
    

    return 0;

}