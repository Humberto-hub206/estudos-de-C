#include <stdio.h>

int main() {
    
    // faça um programa que calcule a área de um quadrado e em
    //seguida mostre o dobro dessa área para o usuário
    float lado, area, Darea;

    printf("digite o lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    Darea = area * 2;
    
    printf("o valor da area é: %.2f \n", area);
    printf("o valor do dobro da area é: %.2f \n", Darea);
    
    return 0;

}

