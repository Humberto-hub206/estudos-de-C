int main() {
    int saque;

    printf("Digite o valor do saque (entre 10 e 600 reais): ");
    scanf("%d", &saque);

    if (saque < 10 || saque > 600) {
        printf("Valor fora do intervalo permitido.\n");
        return 1;  
    }


    int notas_100 = 0, notas_50 = 0, notas_10 = 0, notas_5 = 0, notas_1 = 0;

    
    notas_100 = saque / 100;
    saque = saque % 100;  

    
    notas_50 = saque / 50;
    saque = saque % 50;  


    notas_10 = saque / 10;
    saque = saque % 10;  

   
    notas_5 = saque / 5;
    saque = saque % 5;  

   
    notas_1 = saque;  

   
    if (notas_100 > 0) {
        printf("%d nota(s) de 100 reais\n", notas_100);
    }
    if (notas_50 > 0) {
        printf("%d nota(s) de 50 reais\n", notas_50);
    }
    if (notas_10 > 0) {
        printf("%d nota(s) de 10 reais\n", notas_10);
    }
    if (notas_5 > 0) {
        printf("%d nota(s) de 5 reais\n", notas_5);
    }
    if (notas_1 > 0) {
        printf("%d nota(s) de 1 real\n", notas_1);
    }

    return 0;
}