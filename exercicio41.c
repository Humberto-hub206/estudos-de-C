#include <stdio.h>
#include <math.h> 

int e_inteiro(float numero) {
    return (numero == floor(numero));
}

const char* par_ou_impar(int numero) {
    return (numero % 2 == 0) ? "par" : "impar";
}

const char* positivo_ou_negativo(float numero) {
    if (numero > 0) return "positivo";
    else if (numero < 0) return "negativo";
    else return "zero";
}

int main() {
    float num1, num2, resultado;
    int escolha;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro: Divisao por zero nao permitida.\n");
                return 1;
            }
            resultado = num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    printf("O resultado e %s.\n", par_ou_impar((int)resultado));
    if (e_inteiro(resultado)) {
        printf("O resultado e um numero inteiro.\n");
    } else {
        printf("O resultado e um numero decimal.\n");
    }
    printf("O resultado e %s.\n", positivo_ou_negativo(resultado));

    return 0;
}