int main(int argc, char const *argv[])
{
    float nota1, nota2, media;
    char conceito;

    printf("digite uma nota: ");
    scanf("%f", &nota1);
    
    printf("digite uma outra nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if (9 < media <= 10)
    {
        conceito = 'A'; 
    }
    else if (7.5 < media <= 9)
    {
        conceito = 'B';
    }
    else if (6 < media <= 7.5)
    {
        conceito = 'C';
    }
    else if (4 < media <= 6)
    {
        conceito = 'D';
    }
    else if (0 < media <= 4)
    {
        conceito = 'E';
    }
    printf("nota parcial 1: %.2f\n", nota1);
    printf("nota parcial 2: %.2f\n", nota2);
    printf("media semestral: %.2f\n", media);
    printf("conceito: %c\n", conceito);
        if (conceito = 'A' || 'B' || 'C')
        {
            printf("APROVADO\n");
        }
        else if (conceito = 'D' || 'E')
        {
            printf("REPROVADO\n");
        }
        
    return 0;
}
