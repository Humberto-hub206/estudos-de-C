int main(int argc, char const *argv[])
{
    float peso, multa, peso_alem;

    printf("digite quantos quilos de peixe joao pescou: ");
    scanf("%f", &peso);

    if (peso > 50)
    {
        peso_alem = peso - 50;
        multa = peso_alem * 4;
        
        printf("o peso excedido foi de: %.2f \n", peso_alem);
        printf("a multa nesse caso sera de: %.2f \n", multa);
    }
   else
   {
    printf("peso dentro dos parametros, pode passar!");
   }
   
    
    return 0;
}
