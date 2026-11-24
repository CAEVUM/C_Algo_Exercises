#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // egalite de trois nombres

    int nombres[3];

    // demander 3 entiers et
    printf("inserer 3 nombres entiers naturels \n");
    
    for (int i = 1; i <= 3; i++)
    {
        printf("nombre %i = ...", i);
        scanf("%i", &nombres[i-1]);
    }
    
    //indiquer si les trois sont egaux
    int compteurEgaux;

    // for(int i=1 ; i <= 3 ; i++)
    // {
    //     if (nombres[i-1] )
    //     {
    //         /* code */
    //     }
        
    // }

    // si exactement deux sont egaux

    // ou si tous sont differents 

    return 0;
}