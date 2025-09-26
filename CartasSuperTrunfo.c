#include <stdio.h>

int main() {
//Cartas Super Trunfo
//variáveis

    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[30], cidade2[30];
    int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
    float area, PIB, area2, PIB2;


//solicitação de dados ao usuário
//Carta 1
    printf ("\nDados da Carta 1:\n");
    printf ("Digite uma letra de A-H: \n");
    scanf (" %c", &estado);

    printf ("Digite o código da carta (letra + número de 01 a 04): \n");
    scanf ("%s", codigo);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", cidade);

    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área da cidade em km²: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &PIB);

    printf ("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf ("%d", &pontos_turisticos);

    //Carta 2
    printf ("\nDados da Carta 2:\n");
    printf ("Digite uma letra de A-H: \n");
    scanf (" %c", &estado2);

    printf ("Digite o código da carta (letra + número de 01 a 04): \n");
    scanf ("%s", codigo2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", cidade2);

    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área da cidade em km²: \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &PIB2);

    printf ("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf ("%d", &pontos_turisticos2);


//impressão dos dados fornecidos

    printf("\nCarta 1:\nEstado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea (em km²): %.2fkm²\nPIB: %.2f\nQuantidade de pontos turísticos: %d\n", estado, codigo, cidade, populacao, area, PIB, pontos_turisticos);
    printf("\nCarta 2:\nEstado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea (em km²): %.2fkm²\nPIB: %.2f\nQuantidade de pontos turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, PIB2, pontos_turisticos2);

return 0;
}