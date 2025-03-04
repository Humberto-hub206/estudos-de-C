int main(int argc, char const *argv[])
{
    float n1, n2;
    
    printf("digite um número: ");
    scanf("%f", &n1);
    printf("digite outro número: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("%f é maior que %f \n", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("%f é maior que %f \n", n2, n1);
    }
    
    
    return 0;
}
