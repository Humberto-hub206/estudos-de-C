#include <stdio.h>
#include <math.h>

int main() {
    float area, litros_necessarios;
    int latas, galoes;
    float preco_latas, preco_galoes, preco_mistura;
    
    printf("Digite o tamanho da area a ser pintada (em metros quadrados): ");
    scanf("%f", &area);
    
    litros_necessarios = (area / 6.0) * 1.1;
    
    latas = ceil(litros_necessarios / 18.0);
    preco_latas = latas * 80.0;
    
    galoes = ceil(litros_necessarios / 3.6);
    preco_galoes = galoes * 25.0;
    
    latas = floor(litros_necessarios / 18.0);
    float restante = litros_necessarios - (latas * 18.0);
    galoes = ceil(restante / 3.6);
    preco_mistura = (latas * 80.0) + (galoes * 25.0);

    printf("\nOpcao 1 - Apenas latas de 18L:\n");
    printf("Quantidade de latas: %d\n", latas);
    printf("Preco total: R$ %.2f\n", preco_latas);
    
    printf("\nOpcao 2 - Apenas galoes de 3.6L:\n");
    printf("Quantidade de galoes: %d\n", galoes);
    printf("Preco total: R$ %.2f\n", preco_galoes);
    
    printf("\nOpcao 3 - Mistura de latas e galoes:\n");
    printf("Quantidade de latas: %d\n", latas);
    printf("Quantidade de galoes: %d\n", galoes);
    printf("Preco total: R$ %.2f\n", preco_mistura);
    
    return 0;
}