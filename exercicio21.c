int main(int argc, char const *argv[])
{
    char sexo;
    printf("digite M para masculino e F para feminino: ");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        printf("voce pertence ao genero masculino");
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        printf("voce pertence ao genero feminino");
    }
    else
    {
        printf("sexo invalido");
    }
    
    
    return 0;
}