int main(int argc, char const *argv[])
{
    float salario_atual, salario_reajuste, percentual_de_aumento, valor_do_aumento;

    printf("digite o valor do salario atual: ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 280)
    {
        valor_do_aumento = salario_atual*20/100;
        percentual_de_aumento = 20;
       salario_reajuste = salario_atual + salario_atual*20/100;
    }
    else if (280 < salario_atual <= 700)
    {
        valor_do_aumento = salario_atual*15/100;
        percentual_de_aumento = 15;
        salario_reajuste = salario_atual + salario_atual*15/100;
    }
    else if (700 < salario_atual <= 1500)
    {
        valor_do_aumento = salario_atual*10/100;
        percentual_de_aumento = 10;
        salario_reajuste = salario_atual + salario_atual*10/100;
    }
    else if (salario_atual > 1500)
    {
        valor_do_aumento = salario_atual*5/100;
        percentual_de_aumento = 5;
        salario_reajuste = salario_atual + salario_atual*5/100;
    }
    
    printf("salario atual: %f\n", salario_atual);
    printf("percentual aplicado: %f\n", percentual_de_aumento);
    printf("valor do aumtento: %f\n", valor_do_aumento);
    printf("novo salario: %f\n", salario_reajuste);
    return 0;
}
