#include <stdio.h>

// int main () {


//     // Fibonacci

//     int x1 , x2 , resultat;

//     printf("Insérer la valeur de X1 \n");

//     scanf("%i", &x1);

//     printf("Insérer la valeur de X1 \n");

//     scanf("%i", &x2);

//     int pas ;

//     printf("Insérer le nombre de pas \n");

//     scanf("%i", &pas);


//     // debut de boucle 

//     for (int i = 0 ; i <= pas ; i ++)
//     {

        
//     resultat = x2 + x1;

//     printf("Resultat = %i \n", resultat);

//     x2 = x1 ;

//     x1 = resultat ;

//     }


//     // fin de boucle 


// }

int main ()

{
    int n ;

    printf("Insérer quelle étape de la suite de Fibonacci vous souhaitez afficher ? \n");

    scanf(" %i ", &n);

    int x, y, z ;

    x = 0 ;
    y = 1 ;

    for (int i = 0 ; i < n ; i++)
    {

        z = x + y ;

        printf ("%i + %i = %i \n", x, y, z) ;

        x = y ;
        y = z ;

    }

    printf("FIBO = %i \n", z);

}