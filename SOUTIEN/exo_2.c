#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // calculatrice simple

    // demander deux nombres reels et afficher
    float nb_1;
    float nb_2; 

    printf("inserer le premier nombre a calculer entre -infini et +infini \n");

    scanf("%f", &nb_1);

    printf("inserer le second nombre a calculer entre -infini et +infini\n");

    scanf("%f", &nb_2);

    // leur somme 
    float somme = nb_1 + nb_2;
    printf("La somme de %f et %f est %f \n", nb_1, nb_2, somme);

    // leur difference
    float difference = nb_1 - nb_2;
    printf("La difference de %f et %f est %f \n", nb_1, nb_2, difference);

    // leur produit
    float produit = nb_1 * nb_2;
    printf("Le produit de %f et %f est %f \n", nb_1, nb_2, produit);

    return 0;
}
