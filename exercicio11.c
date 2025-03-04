#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n1, n2, n3, res1, res2, res3;

    printf("digite um numero inteiro: ");
    scanf("%f", &n1);
    
    printf("digite outro numero inteiro: ");
    scanf("%f", &n2);

    printf("digite um numero real: ");
    scanf("%f", &n3);

    res1 = (2 * n1) * (n2 / 2);

    res2 = (3 * n1) + n3;

    res3 = n3 * n3 * n3;

    printf("o resultado da primeiro calculo é: %.2f \n", res1);

    printf("o resultado da segundo calculo é: %.2f \n", res2);

    printf("o resultado do terceiro calculo é: %.2f \n", res3);
    
    return 0;
}
