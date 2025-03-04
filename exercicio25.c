int main(int argc, char const *argv[])
{
    float n1, n2, n3, maior, menor;

    printf("digite um numero: ");
    scanf("%f", &n1);

    printf("digite outro numero: ");
    scanf("%f", &n2);

    printf("digite mais um numero: ");
    scanf("%f", &n3);

    maior = n1;
    if (n2 > maior)
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }

    menor = n1;
    if (n2 < menor)
    {
        menor = n2;
    }
    if (n3 < menor)
    {
        menor = n3;
    }
    printf("o maior numero e: %f\n", maior);
    printf("o menor numero e: %f\n", menor);
    
    return 0;
}
