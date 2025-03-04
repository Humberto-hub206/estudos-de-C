int main(int argc, char const *argv[])
{
    float n1;
    
    printf("digite um valor: ");
    scanf("%f", &n1);

    if (n1 > 0)
    {
        printf("%f é positivo", n1);
    }
    
    else if (n1 < 0)
    {
        printf("%f é negativo", n1);
    }
    
    return 0;
}
