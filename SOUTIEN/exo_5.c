//conversion de durée

#include <stdio.h>

int main()
{

    int hh, mn, ss;

    // conversion 

    int input_secondes;

    printf("Entrez le nombre de secondes : \n");
    scanf("%i", &input_secondes);

    hh = input_secondes / 3600 ;

    // si input secondes = 3800

    // hh =2

    // input = 3800 - 3600

    //methode 1
    input_secondes = input_secondes - (hh * 3600);

    //methode 2
    input_secondes %= 3600; // input_secondes = input_secondes % 3600;

    /// minutes

    mn = input_secondes / 60;

    //methode 1
    input_secondes = input_secondes - (mn * 60);

    // method 2
    input_secondes %= 60;

    /// secondes

    ss = input_secondes;

    printf("La durée est : %i h %i mn %i ss \n", hh, mn, ss);


    return 0;
}