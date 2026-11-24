#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    printf("Hello, World!\n");

    srand(time(NULL)); // NE JAMAIS OUBLIER 
    rand();

    // liste de 15 entiers 

    int tab[15]; 

    int min = 1 ;
    int max = 1000 ;

    // int nbpc = (rand () % (max - min + 1)) + min 

    // valeurs random dans liste de 15 entiers

    for(int i = 0 ; i < 15 ; i++)
    {
        tab[i] = (rand () % (max - min + 1)) + min;
    }

    // afficher la liste 
    printf("contenu de la liste : \n");
    for(int i = 0 ; i < 15 ; i++)
    {
        printf("tab[%i] = %i \n", i, tab[i]);
    }

    // trouver min et max 

    printf("trouver min et max \n");

    int max_provisoire ;

    // int compteur = 0;

    max_provisoire = tab[0] ;

    int min_provisoire ;

    min_provisoire = tab[0] ;

    // while(compteur < 14)
    // {
        
    //     if(tab[compteur] > tab[compteur + 1])
    //     {
    //         max_provisoire = tab[compteur+1];
    //         compteur ++;
    //     }else{
    //         // max_provisoire = tab[compteur] ;
    //         compteur ++;
    //     }
    //     compteur ++;
    // }

    for (int i = 1; i < 14; i++)
    {

        // max
        if (max_provisoire < tab[i+1])
        {
            max_provisoire = tab[i+1];
        }else if(max_provisoire > tab[i+1] || max_provisoire == tab[i+1])
        {
            // i++ ;
        }
        
        // min
        if (min_provisoire > tab[i+1])
        {
            min_provisoire = tab[i+1];
        }else if(min_provisoire < tab[i+1] || min_provisoire == tab[i+1])
        {
            // i++ ;
        }
        
    }

    
    // afficher min et max 
    printf("max = %i \n", max_provisoire);
    printf("min = %i \n", min_provisoire);

    // trouver la moyenne

    int somme = tab[0] ;

    // int nb_tab = count(tab);

    for(int i = 0 ; i < 14 ; i ++)
    {
        // somme = tab[i] + tab[i+1]; 
        somme = somme + tab[i+1] ;
        
    }

    int moyenne = somme / 15 ;

    printf("moyenne = %i", moyenne);

    return 0;
}