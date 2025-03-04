int eh_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // Ano bissexto
    }
    return 0; // Ano não bissexto
}

// Função para verificar se o mês é válido e o número de dias no mês
int verificar_data(int dia, int mes, int ano) {
    // Verifica se o mês está entre 1 e 12
    if (mes < 1 || mes > 12) {
        return 0; // Mês inválido
    }

    int dias_no_mes;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias_no_mes = 31; 
            break;
        case 4: case 6: case 9: case 11:
            dias_no_mes = 30; 
            break;
        case 2:
            // Verifica se é fevereiro e o ano é bissexto
            if (eh_bissexto(ano)) {
                dias_no_mes = 29; // Fevereiro em ano bissexto
            } else {
                dias_no_mes = 28; // Fevereiro em ano não bissexto
            }
            break;
    }


    if (dia < 1 || dia > dias_no_mes) {
        return 0; // Dia inválido
    }

    return 1; // Data válida
}

int main() {
    int dia, mes, ano;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (verificar_data(dia, mes, ano)) {
        printf("A data %02d/%02d/%d e valida.\n", dia, mes, ano);
    } else {
        printf("A data %02d/%02d/%d e invalida.\n", dia, mes, ano);
    }

    return 0;
}