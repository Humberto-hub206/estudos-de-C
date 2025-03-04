int main(int argc, char const *argv[])
{
    float hora_trabalho, hora_mes, salario_bruto, salario_liquido, imposto_renda, INSS, sindicato;

    printf("digite quanto vc ganha por hora trabalhada: ");
    scanf("%f", &hora_trabalho);

    printf("digite quantas horas vc trabalhou no mes: ");
    scanf("%f", &hora_mes);

    salario_bruto = hora_mes * hora_trabalho;
    imposto_renda = salario_bruto * 11 / 100;
    INSS = salario_bruto * 8 / 100;
    sindicato = salario_bruto * 5 / 100;

    salario_liquido = salario_bruto - imposto_renda - INSS - sindicato;

    printf("salario bruto: %.2f \n", salario_bruto);
    printf("imposto de renda(11%): %.2f \n", imposto_renda);
    printf("INSS(8%): %.2f \n",INSS);
    printf("sindicato: %.2f \n", sindicato);
    printf("salario liquido: %.2f", salario_liquido);
    return 0;
}
