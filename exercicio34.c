#include <math.h>
int main(int argc, char const *argv[])
{
    int A, B, C, delta, x1, x2;

    printf("digite o valor de A: ");
    scanf("%d", &A);
    printf("digite o valor de B: ");
    scanf("%d", &B);
    printf("digite o valor de C: ");
    scanf("%d", &C);
    
    if (A == 0)
    {
        printf("essa equacao nao e do segundo grau");
    }
    else
    {
        // calculo de delta 
        delta = B*B - 4*A*C;

        if (delta < 0)
        {
            printf("as raizes nao sao reais");
        }
       else if (delta == 0)
       {
        
            x1 == x2;
            x1 = -B / 2*A;
            printf("a equacao possui apenas uma raiz");
            printf("raiz: %d", x1);

       }
       else
       {
        x1 = (-B + sqrt(delta)) / 2*A;
        x2 = (-B - sqrt(delta)) / 2*A;

        printf("raiz de X1 e X2 sao respectivamente: %d e %d", x1, x2);
       }
       
        
    }
    
    return 0;
}
