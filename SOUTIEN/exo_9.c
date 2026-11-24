#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // maximum

    int a , b ;

    // demander deux nb entiers
    printf("inserer 2 nombres entiers a, et b \n");

    printf("a = \n");

    scanf("%i", &a);

    printf("b = \n");

    scanf("%i", &b);

    // afficher le plus grand

    if( a != b)
    {

        printf("Le plus grand est ... ");

        if(a > b)
        {
            printf("%i \n", a);
        }

        if(b > a)
        {
            printf("%i \n", b);
        }

    }else{
        printf("a et b ont meme valeur \n");
    }
    

    // gerer le cas où les nombres sont égaux

    return 0;
}