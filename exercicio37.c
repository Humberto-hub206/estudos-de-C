int main() {
    int numero;
    int centenas, dezenas, unidades;

    
    printf("Digite um numero entre 1 e 999: ");
    scanf("%d", &numero);

    
    if (numero < 1 || numero >= 1000) {
        printf("Numero fora do intervalo permitido.\n");
        return 1; 
    }

    centenas = numero / 100;       
    dezenas = (numero % 100) / 10;  
    unidades = numero % 10;         

    if (centenas > 0) {
        if (centenas == 1) {
            printf("%d centena", centenas);
        } else {
            printf("%d centenas", centenas);
        }

        if (dezenas > 0 || unidades > 0) {
            printf(", ");
        }
    }

    if (dezenas > 0) {
        if (dezenas == 1) {
            printf("%d dezena", dezenas);
        } else {
            printf("%d dezenas", dezenas);
        }

        if (unidades > 0) {
            printf(" e ");
        }
    }

    if (unidades > 0) {
        if (unidades == 1) {
            printf("%d unidade", unidades);
        } else {
            printf("%d unidades", unidades);
        }
    }
    printf("\n");

    return 0;
}