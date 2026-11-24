#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // Multiplication 

    // demander deux nombres entiers a l user 
    // int nb_1, nb_2;

    // printf("Entrez le premier nombre a multiplier: \n");

    // scanf("%i", &nb_1);

    // printf("Entrez le second nombre a multiplier: \n");

    // scanf("%i", &nb_2);

    // // calculer leur produit dans une troisieme variable 
    // int produit = nb_1 * nb_2;
    // // afficher le resultat 
    // printf("Le produit de %i et %i est %i \n", nb_1, nb_2, produit);





    // adapter pour accepter des nombres reels : just change the int into floats




    // Multiplication 

    // demander deux nombres entiers a l user 
    float nb_1, nb_2;

    printf("Entrez le premier nombre a multiplier: \n");

    scanf("%f", &nb_1);

    printf("Entrez le second nombre a multiplier: \n");

    scanf("%f", &nb_2);

    // calculer leur produit dans une troisieme variable 
    float produit = nb_1 * nb_2;
    // afficher le resultat 
    printf("Le produit de %f et %f est %f \n", nb_1, nb_2, produit);

    // adapter pour accepter des nombres reels : just change the int into floats

    return 0;
}