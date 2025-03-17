#include <stdio.h>

// Função principal
int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3], codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis para a Carta 2
    char estado2[3], codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada dos dados da primeira carta
    printf("==== Insira os dados da primeira carta ====\n");
    
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da segunda carta 
    printf("\n==== Insira os dados da segunda carta ====\n");

    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Código da Carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per capita
float densidadePop1 = populacao1 / area1;
float densidadePop2 = populacao2 / area2;

// Converte populacao para float para evitar truncamento
float pibPerCapita1 = pib1 / (float)populacao1;
float pibPerCapita2 = pib2 / (float)populacao2;

// Exibição dos cálculos
printf("\n==== Dados Calculados ====\n");
printf("Densidade Populacional (Carta 1 - %s): %.2f hab/km²\n", nomeCidade1, densidadePop1);
printf("PIB per capita (Carta 1 - %s): %.2f milhões de reais\n", nomeCidade1, pibPerCapita1);

printf("Densidade Populacional (Carta 2 - %s): %.2f hab/km²\n", nomeCidade2, densidadePop2);
printf("PIB per capita (Carta 2 - %s): %.2f milhões de reais\n", nomeCidade2, pibPerCapita2);

    // Comparação de um atributo (exemplo: População)
    printf("\n==== Comparação de cartas (Atributo: População) ====\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Carta 1 e Carta 2 têm a mesma população (%d habitantes).\n", populacao1);
        printf();
        printf("Resultado: Empate!\n");
    }

    return 0;
}
