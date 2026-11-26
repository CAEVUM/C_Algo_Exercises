#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main ()
{
    srand(time(NULL)); // NE JAMAIS OUBLIER 
    rand(); // pour augmenter la qualité 

    // x = (rand () % (max - min + 1)) + min [see cahier FLUO encadrement]

    printf("Hello, World!\n");

    int li, co;

    int min, max;


    printf("Inserer le nombre de lignes \n");
    scanf("%i", &li);
    printf("Inserer le nombre de colonnes \n");
    scanf("%i", &co);

    // initialisation de la table 2D

    int arr_2D[li][co];

    printf("Choisissez entre quelles intervalles entieres positives seront integrees dans le tableau \n");

    printf("min : \n");
    scanf("%i", &min);

    printf("max : \n");
    scanf("%i", &max);

    printf("insertion des valeurs \n");

    for (int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            arr_2D[i][j] = (rand () % (max - min + 1)) + min;
        }
    }

    // affichage des valeurs du tableau 
    
    for (int i = 0; i < li ; i++)
    {
        for (int j = 0; j < co; j++)
        {
            printf("%i \t", arr_2D[i][j]);
        }
        printf("\n");
    }

    // find a number in the table

    // this is not working yet 
    printf("inserer un nombre entier que vous souhaiter trouver dans la liste 2D \n");

    int nb_to_find;
    scanf("%i", &nb_to_find);
    bool found = false ;

    for (int i = 0; i < li ; i++)
    {
        for (int j = 0; j < co; j++)
        {
            // verification ou ca ne marche pas
            // printf("%i - %i \n", i, j);
            if (arr_2D[i][j] == nb_to_find)
            {
                printf("arr_2D[%i][%i] = %i \n", i, j, arr_2D[i][j]);
                found = true ;
            }else{
                found = false ;
            }
        }
    }

    if (found == true)
    {
        printf("Trouve !\n");
    }else{
        printf("ce nombre n'existe pas \n");
    }
    
    
    // la somme des elements de la diagonale
    // la moyenne de chaque ligne / colonne
    

    return 0;
}