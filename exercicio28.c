int main(int argc, char const *argv[])
{
    char turno;
    printf("digite M para matutino, V para vespertino e N para noturno: ");
    scanf("%c", &turno);

    if (turno == 'M' || turno == 'm')
    {
        printf("bom dia!");
    }
    else if (turno == 'V' || turno == 'v')
    {
        printf("boa tarde!");
    }
    else if (turno == 'N' || turno == 'n')
    {
        printf("boa noite!");
    }
    
    else
    {
        printf("valor invalido!");
    }
    
    
    return 0;
}