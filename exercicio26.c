int main(int argc, char const *argv[])
{
    float produto1, produto2, produto3, menor;

    printf("digite o preco do produto: ");
    scanf("%f", &produto1);

    printf("digite o preco de outro produto: ");
    scanf("%f", &produto2);

    printf("digite o preco mais um produto: ");
    scanf("%f", &produto3);

    menor = produto1;

    if (produto2 < menor)
    {
        menor = produto2;
    }
    if (produto3 < menor)
    {
        menor = produto3;
    }
    
    printf("o mais barato e o produto com o valor de: %f\n", menor);
    return 0;
}
