#include <stdio.h>

// array store and print
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
    
    

    return 0;
}