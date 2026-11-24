#include <stdio.h>
#include <math.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // test de primalité (naïf)

    // lire n >= 2 s il est premier

    int nombre ;

    printf("Inserer le nombre dont ovus souhaiter verifier la primalite \n");

    scanf("%i", &nombre);

    if(nombre >= 2)
    {
        
            int racine_nombre = sqrt(nombre) ;

            int diviseur ;

            for (diviseur = 2; diviseur <= racine_nombre; diviseur++)
            {
                // divisibilité par tous les nombres diviseur <= sqrt(nombre)
                int modulo = nombre % diviseur ;

                if (modulo == 0)
                {
                    printf("%i n est pas premier \n", nombre) ;
                } else {
                    printf("%i est premier \n", nombre) ;
                }
            }
            
    } else {

        printf("choisir un nombre >= 2 \n") ;

    }
    




    return 0;

}

// monsieur a ajouté un nombre de diviseur , si nombre de diviseur >= 1 ou 2 depend de la condition de boucle 

// afficher les divisions

// break ; pour arreter une boucle while ou for 

// continue ; ca sert a [???]