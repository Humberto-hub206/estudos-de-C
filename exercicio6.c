#include <stdio.h> 
int main(int argc, char const *argv[])
{
    //faça um programa que peça o raio de um circulo e calcule sua area

    float raio, area;

    printf("digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;

    printf("o valor da area é: %.2f", area);
    return 0;
}
