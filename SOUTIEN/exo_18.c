// 19 aussi 

#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    // demander a l utilisateur combien font 2 * 2

    printf("Combien font 2 * 2 ? \n");

    // tant que la reponse est fausse 
    int resultat = 0 ;

    scanf("%i", &resultat);

    while (resultat != 4)
    {
        printf("Mauvaise reponse, essayez encore : \n");
        scanf("%i", &resultat);
    }  
        printf("Bravo ! \n");
    

    

    // afficher bravo lorsqu il trouve 

    return 0;
}