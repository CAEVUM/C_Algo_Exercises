#include <stdio.h>

int main ()
{
    printf("Hello, World!\n");

    // conversion de temperature

    // demander une temerature en degres celcius
    printf("Inserer une temperature en degres Celcius \n");

    float temp_C ;

    scanf("%f", &temp_C);

    // convertir en fahrenheit
    printf("Conversion en Fahrenheit \n");

    // formule
    // F = C * 1.8 + 32
    float temp_F;

    temp_F = temp_C * 1.8 + 32 ;

    printf("%f degres Celcius = %f degres Fahrenheit \n", temp_C, temp_F);

    return 0;
}