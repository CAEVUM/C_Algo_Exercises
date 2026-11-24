// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");


//     // puissance


//     // exo 6



//     // exo 7

//         // naming variables
//     int a, b, c;

//         // input values to vars
//     printf("insérez la valeur de a");
//     scanf("%d", &a);
//     printf("insérez la valeur de b");
//     scanf("%d", &b);
//     printf("insérez la valeur de c");
//     scanf("%d", &c);


//         // comparing


//         // try 4 methods in courses

//         // comparer les 3 one by one
// if (a = b = c ) {

    

// } else {

//     if ( a > b && a > c ) {

//         printf("a est plus grand et vaut %i", a);

//         }

//     if ( b > a && b > c ) {

//         printf("b est plus grand et vaut %i", b);

//     }

//     if ( c > b && c > a ) {

//         printf("c est plus grand et vaut %i", c);

//     }
    
// }
    

//     return 0;
// }



#include <stdio.h>

int main ()

{

    // write a program that prints Helolo !

    printf("Hello \n");

    // read x , y , z

    int x, y, z ;

    printf("Inserer une valeur pour x \n");

    scanf("%i", &x);

    printf("Inserer une valeur pour y \n");

    scanf("%i", &y);

    printf("Inserer une valeur pour z \n");

    scanf("%i", &z);

    // display the maximum

    if( x > y && x > z )
    {

        printf("x (%i) est plus grand \n", x);

    }

    if( y > x && y > z )
    {

        printf("y (%i) est plus grand \n", y);

    }

    if( z > y && z > y )
    {

        printf("z (%i) est plus grand \n", z);

    }

    return 0;

}