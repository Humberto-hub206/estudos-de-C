int main(int argc, char const *argv[])
{
    float altura, pessoa, peso;

    printf("digite a sua altura em metros: ");
    scanf("%f", &altura);

    printf("se vc for homem digite 1, se for mulher digite 2: ");
    scanf("%f", &pessoa);
    
    if (pessoa = 1)
    {
        peso = (72.7 * altura) - 58;

        printf("o peso ideal dessa pessoa é: %.2f \n", peso);

    }
    else if (pessoa = 2)
    {
        peso = (62.1 * altura) - 44.7;

        printf("o peso ideal dessa pessoa é: %.2f \n", peso);
    }
    
    return 0;
}
