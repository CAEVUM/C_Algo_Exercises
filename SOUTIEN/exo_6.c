#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // division securisee

    // demander deux nombres reels et afficher leur quotien
    float dividende, diviseur1;

    printf("inserer une dividende \n");

    scanf("%f", &dividende);

    printf("inserer un diviseur \n");

    scanf("%f", &diviseur1);

    // si le deuxieme nombre est nul
    while(diviseur1 == 0)
    {
    
        // afficher "erreur : division par 0!"
        printf("Erreur : division par 0! \n");

        printf("inserer a nouveau le diviseur \n");

        scanf("%f", diviseur1);

    }

    float quotient ;
    quotient = dividende / diviseur1 ;

    printf("%f / %f = %f \n", dividende, diviseur1, quotient);

    
    return 0;
}