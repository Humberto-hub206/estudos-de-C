int main(int argc, char const *argv[])
{
    float n1, n2, n3, temp;

    printf("digite um numero: ");
    scanf("%f", &n1);

    printf("digite outro numero: ");
    scanf("%f", &n2);

    printf("digite mais um numero: ");
    scanf("%f", &n3);

    if (n1 < n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 < n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 < n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("Numeros em ordem decrescente: %f %f, %f\n", n1, n2, n3);

    return 0;
}
