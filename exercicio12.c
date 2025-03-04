int main(int argc, char const *argv[])
{
    float altura, peso;

    printf("digite o valor da sua altura em metros,: ");
    scanf("%f", &altura);

    peso = (72.7 * altura) - 58;

    printf("o peso ideal dessa pessoa é: %.2f \n",peso);
    return 0;
}
