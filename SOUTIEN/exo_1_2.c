#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    printf("Hello, World!\n");

    srand(time(NULL)); // NE JAMAIS OUBLIER 
    rand();

    // int nbpc = (rand () % (max - min + 1)) + min 

    int min = 1 ;
    int max = 1000 ;

    // creer une liste 2D 

    int tab_2D [4][4] ;

    // mettre valeur aleatoire 

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tab_2D[i][j] = (rand () % (max - min + 1)) + min ;
        }
        
    }

    // diagonale = 1
    
    for (int i = 0; i < 4; i++)
    {
        tab_2D[i][i] = 1 ;
    }

    // afficher la liste 2D

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("tab_2D[%i][%i]=%i ", i, j, tab_2D[i][j]);
            printf("%i\t",tab_2D[i][j]);
            
        }
            printf("\n");
    }
    
    

    return 0;
}