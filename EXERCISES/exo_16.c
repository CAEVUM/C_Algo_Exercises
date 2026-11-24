#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // inverser les chiffres

    // lire un entier positif
    int nb_original ;
    
    printf("inserer la valeur a inverser \n");

    scanf("%i", &nb_original) ;

    int nb_copy = nb_original ;

    int nb_reversed ;

    while (nb_copy != 0)
    {
        // prendre le digit
        int digit = nb_copy % 10 ;

        // enlever le digit du nb 
        nb_copy /= 10 ; // nb copy = nb copy / 10

        // ajouter ce digit dans le nb reversed 
        nb_reversed = nb_reversed * 10 + digit ;

    }

    printf("reversed : %i \n", nb_reversed) ;
    




    // afficher l entier obtenu en inversant l ordre de ses chiffres

    return 0;

}