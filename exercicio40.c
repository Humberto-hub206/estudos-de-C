#include <math.h>  

int main() {
    double numero;

   
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero == round(numero)) {
        printf("O numero %.2f e inteiro.\n", numero);
    } else {
        printf("O numero %.2f e decimal.\n", numero);
    }

    return 0;
}