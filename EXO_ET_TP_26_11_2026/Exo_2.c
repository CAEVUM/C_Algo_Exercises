#include <stdio.h>

// array reverse display

int main ()
{
    printf("Hello, World!\n");

    int count_array ;

    printf("inserer le nombre de cases de votre liste \n");
    scanf("%i", &count_array);

    // initializing a table / list / array
    int array[count_array];

    printf("Inserer un nombre entier dans chaque case de l'array : \n");

    for (int i = 0; i < count_array; i++)
    {
        printf("case numero %i \n", i);
        scanf("%i", &array[i]);
    }

    printf("Voici le contenu de votre array ! \n");

    for (int i = 0; i < count_array; i++)
    {
        printf("array[%i] = %i \n", i, array[i]);
    }
    

    // inversion

    printf("inversion en cours ... \n");

    int reverse_array[count_array];

    printf("Voici le contenu de votre array inversee ! \n");

    // for (int i = 0; i < count_array; i++)
    // {
        for (int j = count_array - 1; j >= 0; j--)
        {
            printf("reverse_array[%i] = %i \n", j, array[j]);
        }
        
    // }

    
    // for (int i = 0; i < count_array; i++)
    // {
    //     printf("reverse_array[%i] = %i \n", i, reverse_array[i]);
    // }
    

    return 0;
}