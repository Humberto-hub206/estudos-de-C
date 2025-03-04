int main(int argc, char const *argv[])
{
    float nota1, nota2, media;

    printf("digite a nota parcial 1: ");
    scanf("%f", &nota1);

    printf("digite a nota parcial 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if (media == 10)
    {
        printf("aprovado com distincao!\n");
        
    }
    else if (media >= 7)
    {
        printf("aprovado!\n");
    }
    
    else
    {
        printf("reprovado :(\n");
    }
    
    return 0;
}
