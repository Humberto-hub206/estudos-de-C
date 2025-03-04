#include <stdio.h>
#include <math.h>

int main() {
    float area, litros_necessarios;
    int latas;
    float preco_total;
    
    printf("Digite o tamanho da area a ser pintada (em metros quadrados): ");
    scanf("%f", &area);
    
    litros_necessarios = area / 3.0;
    
    latas = ceil(litros_necessarios / 18.0);
    
    preco_total = latas * 80.0;
    
    printf("Quantidade de latas de tinta necessarias: %d\n", latas);
    printf("Preco total: R$ %.2f\n", preco_total);
    
    return 0;
}
