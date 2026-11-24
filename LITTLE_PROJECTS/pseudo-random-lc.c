#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{

    // objectif : generer un nb entre deux intervalles 
    printf("Hello, World!\n");

    // srand(time(NULL));

    // pour avoir des valeurs initiales cleans
    // rand();

    int x;

    // x = rand();

    // x = rand(1 , 10);

    // x - (x - 10) [non] et pas le + non plus 

    // x % (10 + 1) (pour inclure le 10 a la fin)-> je veux un nb entre 0 et 10 mais rand entre 0 et 32 k

    // x % (b + 1) [???] (un nb entre 0 et b pour une marge 0 a 32 k)
    // pourquoi +1 ? -> 
        // try all the rests to remember why

    // un dé : 1 a 6 , pas 0 a 6

    // generer un nb entre a et b 

    // 3 etapes 
    // choisir l intervalle 
    // reduire
    // decaler

    // x = (rand () % (max - min + 1)) + min [see cahier FLUO encadrement]


    int min = 10 ;
    int max = 50 ;

    x = (rand() % (max - min + 1)) + min ;

    printf("%i" , x);
    // printf("%lu", time(NULL));

    return 0;
}