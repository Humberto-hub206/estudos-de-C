int main(int argc, char const *argv[])
{
    float lado1, lado2, lado3;

    printf("digite o lado desse triangulo: ");
    scanf("%f", &lado1);
    printf("digite o lado desse triangulo: ");
    scanf("%f", &lado2);
    printf("digite o lado desse triangulo: ");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triangulo e Equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triangulo e Isosceles.\n");
        } else {
            printf("O triangulo e Escaleno.\n");
        }
    } else {
        printf("Os lados informados nao formam um triangulo.\n");
    }

    return 0;
}
