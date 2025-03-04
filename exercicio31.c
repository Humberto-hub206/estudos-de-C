int main(int argc, char const *argv[])
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("domingo");
    }
    else if (num == 2)
    {
        printf("segunda");
    }
    else if (num == 3)
    {
        printf("terca");
    }
    else if (num == 4)
    {
        printf("quarta");
    }
    else if (num == 5)
    {
        printf("quinta");
    }
    else if (num == 6)
    {
        printf("sexta");
    }
    else if (num == 7)
    {
        printf("sabado");
    }
    else
    {
        printf("valor invalido");
    }
    
    return 0;
}
