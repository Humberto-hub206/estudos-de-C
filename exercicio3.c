#include <stdio.h>

int main() {
    float num1, num2, soma;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    
    printf("A soma dos dois números é: %.2f\n", soma);
    
    return 0;
}
