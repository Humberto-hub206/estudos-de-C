#include <stdio.h>
int main(int argc, char const *argv[])
{
    float Farenheit, Celsius;
    printf("digite o valor de graus Farenheit: ");
    scanf("%f", &Farenheit);

    Celsius = (5 * (Farenheit - 32) / 9);

    printf("o valor de %.2f Farenheit, em Celsius e: %.2f \n", Farenheit, Celsius);
    return 0;
}
