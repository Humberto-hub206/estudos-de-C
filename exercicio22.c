int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); 

    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
            letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("A letra %c e uma vogal.\n", letra);
        } else {
            printf("A letra %c e uma consoante.\n", letra);
        }
    } else {
        printf("Caractere invalido! Digite apenas letras.\n");
    }

    return 0;
}