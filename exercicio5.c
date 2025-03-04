#include <stdio.h>
int main(int argc, char const *argv[])
{
    float metro, centimetro;
    //faça um programa que converta metros para centimetros
    printf("digite um valor em metros: ");
    scanf("%f", &metro);
    
    centimetro = metro * 100;

    printf("o valor %.2f em centimetro é: %.2f", metro, centimetro);

    return 0;
}
