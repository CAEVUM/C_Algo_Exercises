// compter les chiffres d un entier valeur absolue , afficher son nombre de chiffres

#include <stdio.h>

int main ()
{

    // int nombre_a_verif;

    // printf("Inserer le nombre a compter \n");

    // scanf ("%i", &nombre_a_verif);

    // int reste ;

    // reste = nombre_a_verif / 10 ;

    // int nombre_de_chiffres = 0
     ;
    
    // while (reste >= 1)
    // {

    //     nombre_de_chiffres ++ ;

    // }

    // printf("Le nombre de chiffre : %i \n", nombre_de_chiffres);


    // might be a scanf
    int x = 1024 ;
    
    // use while 

    for (int i = 0 ; i <= 5 ; i++)
    {

        x = x / 10 ;

        printf("%i \n", x);

    }
}