int main(int argc, char const *argv[])
{
    float tamanho_arquivo, velocidade_internet, tempo_dowload;

    printf("digite o tamanho do arquivo em MB: ");
    scanf("%f", &tamanho_arquivo);

    printf("digite o valor da velocidade de internet em Mbps: ");
    scanf("%f", &velocidade_internet);

    tempo_dowload = (tamanho_arquivo / (velocidade_internet/8))/60;

    printf("o tempo para o dowload sera de: %.2f minutos\n", tempo_dowload);
    return 0;
}
