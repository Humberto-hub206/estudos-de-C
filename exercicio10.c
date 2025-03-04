#include <stdio.h>
int main()
{
    float Celsius, Farenheit;

    printf("digite o valor de graus Celsius: ");
    scanf("%f", &Celsius);

    Farenheit = ((Celsius * 9) / 5) + 32;

    printf("o valor de %.2f Celsius, em Farenheit e: %.2f \n", Celsius, Farenheit);
    
    return 0;
}
