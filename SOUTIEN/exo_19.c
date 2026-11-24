#include <stdio.h>

int main ()
{

    // compteur d essais 

    // ameliorer exo 18

    // compter le nombre de tentatives

    // a la fin, afficher bravo, vous avez trouvé en x essais 

    printf("Hello, World!\n");

    // demander a l utilisateur combien font 2 * 2

    printf("Combien font 2 * 2 ? \n");

    // tant que la reponse est fausse 
    int resultat = 0 ;

    scanf("%i", &resultat);

    int nb_essai = 0;
    while (resultat != 4)
    {
        printf("Mauvaise reponse, essayez encore : \n");
        scanf("%i", &resultat);
        nb_essai++;
    }  
        printf("Bravo ! trouvé en %i essais \n", nb_essai);

    return 0;

}