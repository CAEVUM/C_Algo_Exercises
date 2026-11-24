#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // moyenne 

    // demander trois notes sur 20 

    float note_1, note_2, note_3 ;

    printf("inserer 3 notes sur 20 dont on calculera la moyenne \n");

    printf("note 1 \n");
    scanf("%f", &note_1);

    printf("note 2 \n");
    scanf("%f", &note_2);

    printf("note 3 \n");
    scanf("%f", &note_3);

    // calculer leur moyenne
    float moyenne ;
    moyenne = (note_1 + note_2 + note_3) / 3 ;

    // afficher le resultat avec deux chiffres apres la virgule
    printf("La moyenne des trois notes %.2f, %.2f, %.2f est %.2f \n", note_1, note_2, note_3, moyenne);

    return 0;
}