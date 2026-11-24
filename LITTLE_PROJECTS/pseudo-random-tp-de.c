#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // NE JAMAIS OUBLIER 
    rand(); // pour augmenter la qualité 
    int d1 , d2 ;

    int min , max ;
    min = 1 ;
    max = 6 ;

    int compteur = 0 ;

    // x = (rand () % (max - min + 1)) + min [see cahier FLUO encadrement]

    while (d1 != 6 || d2 != 6)
    {
        d1 = (rand () % (max - min + 1)) + min ;
        d2 = (rand () % (max - min + 1)) + min ;

        compteur ++;

        printf("d1 = %i , d2 = %i , compteur = %i \n", d1, d2, compteur );

    }

    printf("d1 = %i , d2 = %i , compteur = %i \n", d1, d2, compteur );
    
    return 0 ;
}
