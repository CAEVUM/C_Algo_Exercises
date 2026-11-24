#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // NE JAMAIS OUBLIER 
    rand();

    int min = 5 ;
    int max = 30 ;

    int nbpc = (rand () % (max - min + 1)) + min ;

    int nbh;

    printf("inserer un nombre \n");
    scanf("%i", &nbh);
    int compteur ;

    while(nbh != nbpc)
    {
        if(nbh < nbpc)
        {
            printf("trop faible \n");
            scanf("%i", &nbh);
        }

        if(nbh > nbpc)
        {
            printf("trop fort \n");
            scanf("%i", &nbh);
        }
        compteur ++ ;
    }

    if(nbh == nbpc)
        {
            printf("trouvé , %i essais \n", compteur);
        }
    
    return 0 ;
    
}