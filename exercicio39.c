int main(int argc, char const *argv[])
{
    int num, resto;

    printf("digite um numero: ");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 1)
    {
        printf("o numero %d e impar", num);
    }
    else if (resto == 0)
    {
        printf("o numero %d e par", num);
    }
    
    return 0;
}
