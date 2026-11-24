#include <stdio.h>

int main ()

{

    // facto exo 12

    int n ;

    printf("Valeur de n ? \n");

    scanf("%i", &n);

    //int resultat_facto = 1;

    long long unsigned int resultat_facto = 1 ;

    for (int i = 1 ; i <= n ; i++)
    {

        // if (resultat_facto >= ULLONG_MAX)
        // {
        //     printf("Stop \n");
        // }

        resultat_facto = resultat_facto * i ;

        printf ("i = %i \n", i);

        // printf ("FACTO = %i, i = %i \n",resultat_facto, i) ;

        printf ("FACTO = %llu, i = %i \n",resultat_facto, i) ;

    }

    // printf ("RESULTAT FINAL = %i", resultat_facto);
    
    printf ("RESULTAT FINAL = %llu", resultat_facto);

}