#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    
    printf("Digite a nota do 1 bimestre: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota do 2 bimestre: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota do 3 bimestre: ");
    scanf("%f", &nota3);
    
    printf("Digite a nota do 4 bimestre: ");
    scanf("%f", &nota4);
    
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("A média dos 4 bimestres é: %.2f\n", media);
    
    return 0;
}


