#include <stdio.h>

int main() {
    // ============================================================
    //          SUPER TRUNFO - NIVEL NOVATO
    // ============================================================
    // Programa para comparar duas cartas do Super Trunfo
    // com base em um unico atributo numerico (definido no codigo).
    // ============================================================

    // ======== Declaracao das variaveis da Carta 1 =========
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // ======== Declaracao das variaveis da Carta 2 =========
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // ============================================================
    // ENTRADA DE DADOS DAS CARTAS
    // ============================================================
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Codigo da carta (ex: A02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ============================================================
    // CALCULOS DERIVADOS
    // ============================================================
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ============================================================
    // COMPARACAO ENTRE AS CARTAS
    // ============================================================
    // Escolha do atributo a ser comparado:
    // 1 - Populacao
    // 2 - Area
    // 3 - PIB
    // 4 - Densidade Populacional
    // 5 - PIB per capita

    int atributoEscolhido = 1; // Altere aqui para comparar outro atributo

    printf("\n==============================\n");
    if (atributoEscolhido == 1) {
        printf("Comparacao de cartas (Atributo: Populacao)\n\n");
        printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 2) {
        printf("Comparacao de cartas (Atributo: Area)\n\n");
        printf("Carta 1 - %s (%s): %.2f km2\n", nomeCidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km2\n", nomeCidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 3) {
        printf("Comparacao de cartas (Atributo: PIB)\n\n");
        printf("Carta 1 - %s (%s): %.2f bilhoes\n", nomeCidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhoes\n", nomeCidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 4) {
        printf("Comparacao de cartas (Atributo: Densidade Populacional)\n\n");
        printf("Carta 1 - %s (%s): %.2f hab/km2\n", nomeCidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km2\n", nomeCidade2, estado2, densidade2);

        // Para densidade populacional, o menor valor vence
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 5) {
        printf("Comparacao de cartas (Atributo: PIB per capita)\n\n");
        printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    } else {
        printf("Atributo invalido.\n");
    }

    printf("==============================\n");

    return 0;
}
