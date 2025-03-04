#include <stdio.h>

int main() {
    float valor_hora, hora_mes, salario;
    
    printf("digite o valor de 1 hora de trabalho: ");
    scanf("%f", &valor_hora);

    printf("digite o valor das horas no mes: ");
    scanf("%f", &hora_mes);
    
    salario = valor_hora * hora_mes;

    printf("o total do salario no mes é de: %.2f \n", salario);

    return 0;
}
