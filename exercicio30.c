int main(int argc, char const *argv[])
{
    float hora_trabalho, hora_mes, salario_bruto, salario_liquido, imposto_renda, INSS, FGTS, descontos;

    printf("digite quanto vc ganha por hora trabalhada: ");
    scanf("%f", &hora_trabalho);

    printf("digite quantas horas vc trabalhou no mes: ");
    scanf("%f", &hora_mes);

    salario_bruto = hora_mes * hora_trabalho;

    //descontos: imposto de renda e INSS
    //OBS.: FGTS é depositado pela empresa 

    if (salario_bruto <= 900)
    {
        imposto_renda = 0;

    }
    else if (900 < salario_bruto <= 1500)
    {
        imposto_renda = salario_bruto * 5/100;           
    }
    else if (1500 < salario_bruto <= 2500)
    {
        imposto_renda = salario_bruto * 10/100;    
    }
    else if (salario_bruto > 2500)
    {
        imposto_renda = salario_bruto * 20/100;   
    }

    FGTS = salario_bruto * 11/100;
    INSS = salario_bruto * 10/100;
    descontos = imposto_renda + INSS;
    salario_liquido = salario_bruto - descontos;

    printf("salario bruto: %.2f\n", salario_bruto);
    printf("imposto de renda: %.2f\n", imposto_renda);
    printf("INSS: %.2f\n", INSS);
    printf("FGTS: %.2f\n", FGTS);
    printf("total de descontos: %.2f\n", descontos);
    printf("salario liquido: %.2f\n", salario_liquido);
    return 0;
}
