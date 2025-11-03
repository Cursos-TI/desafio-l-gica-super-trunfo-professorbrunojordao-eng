#include <stdio.h>

int main() {
    // ============================================================
    // SUPER TRUNFO - NIVEL AVENTUREIRO
    // ============================================================
    // Programa interativo para comparar duas cartas do Super Trunfo
    // usando um menu (switch) e estruturas de decisao (if-else).
    // ============================================================

    // ======== Dados da Carta 1 ========
    char nomePais1[50] = "Brasil";
    unsigned long int populacao1 = 203000000;
    float area1 = 8516000.0;
    float pib1 = 2400.0; // em bilhoes de reais
    int pontosTuristicos1 = 65;
    float densidade1 = populacao1 / area1;

    // ======== Dados da Carta 2 ========
    char nomePais2[50] = "Argentina";
    unsigned long int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 500.0; // em bilhoes de reais
    int pontosTuristicos2 = 40;
    float densidade2 = populacao2 / area2;

    int escolha;

    // ============================================================
    // MENU INTERATIVO
    // ============================================================
    printf("==========================================\n");
    printf("        SUPER TRUNFO - MENU DE BATALHA    \n");
    printf("==========================================\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("==========================================\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\n==========================================\n");

    // ============================================================
    // COMPARACAO USANDO SWITCH
    // ============================================================
    switch (escolha) {
        case 1: // Populacao
            printf("Comparacao de cartas (Atributo: Populacao)\n\n");
            printf("%s: %lu habitantes\n", nomePais1, populacao1);
            printf("%s: %lu habitantes\n\n", nomePais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Area
            printf("Comparacao de cartas (Atributo: Area)\n\n");
            printf("%s: %.2f km2\n", nomePais1, area1);
            printf("%s: %.2f km2\n\n", nomePais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparacao de cartas (Atributo: PIB)\n\n");
            printf("%s: %.2f bilhoes de reais\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes de reais\n\n", nomePais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turisticos
            printf("Comparacao de cartas (Atributo: Pontos Turisticos)\n\n");
            printf("%s: %d pontos turisticos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos turisticos\n\n", nomePais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demografica (menor valor vence)
            printf("Comparacao de cartas (Atributo: Densidade Demografica)\n\n");
            printf("%s: %.2f hab/km2\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km2\n\n", nomePais2, densidade2);

            // IF-ELSE ANINHADOS
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    printf("==========================================\n");

    return 0;
}