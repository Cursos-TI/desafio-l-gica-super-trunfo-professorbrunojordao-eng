#include <stdio.h>

int main() {
    // ============================================================
    // SUPER TRUNFO - NIVEL MESTRE
    // ============================================================
    // Comparacao entre duas cartas de paises com dois atributos
    // escolhidos dinamicamente pelo jogador.
    // ============================================================

    // ======== Dados da Carta 1 ========
    char nomePais1[50] = "Brasil";
    unsigned long int populacao1 = 203000000;
    float area1 = 8516000.0;
    float pib1 = 2400.0; // em bilhoes
    int pontosTuristicos1 = 65;
    float densidade1 = populacao1 / area1;

    // ======== Dados da Carta 2 ========
    char nomePais2[50] = "Argentina";
    unsigned long int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 500.0; // em bilhoes
    int pontosTuristicos2 = 40;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // ============================================================
    // MENU PRINCIPAL - PRIMEIRA ESCOLHA
    // ============================================================
    printf("==============================================\n");
    printf("          SUPER TRUNFO - NIVEL MESTRE         \n");
    printf("==============================================\n");
    printf("Escolha o primeiro atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("==============================================\n");
    printf("Opcao: ");
    scanf("%d", &escolha1);

    // ============================================================
    // MENU DINAMICO - SEGUNDA ESCOLHA
    // ============================================================
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i == escolha1) continue; // nao mostra o atributo ja escolhido
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Numero de pontos turisticos\n"); break;
            case 5: printf("5 - Densidade demografica\n"); break;
        }
    }

    printf("Opcao: ");
    scanf("%d", &escolha2);

    // Evita que o usuario escolha o mesmo atributo duas vezes
    if (escolha2 == escolha1) {
        printf("\nErro: os dois atributos nao podem ser iguais.\n");
        return 1;
    }

    // ============================================================
    // OBTEM OS VALORES DOS ATRIBUTOS ESCOLHIDOS
    // ============================================================
    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Opcao invalida.\n"); return 1;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Opcao invalida.\n"); return 1;
    }

    // ============================================================
    // COMPARACAO INDIVIDUAL DOS ATRIBUTOS
    // ============================================================
    int resultado1, resultado2;

    // Primeiro atributo (menor densidade vence)
    if (escolha1 == 5)
        resultado1 = (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta1 > valor1_carta2 ? 2 : 0);
    else
        resultado1 = (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta1 < valor1_carta2 ? 2 : 0);

    // Segundo atributo (menor densidade vence)
    if (escolha2 == 5)
        resultado2 = (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta1 > valor2_carta2 ? 2 : 0);
    else
        resultado2 = (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta1 < valor2_carta2 ? 2 : 0);

    // ============================================================
    // SOMA DOS ATRIBUTOS
    // ============================================================
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // ============================================================
    // EXIBICAO DOS RESULTADOS
    // ============================================================
    printf("\n==============================================\n");
    printf("Comparacao entre %s e %s\n", nomePais1, nomePais2);
    printf("==============================================\n");

    // Exibe os valores do primeiro atributo
    printf("\nAtributo 1: ");
    switch (escolha1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turisticos\n"); break;
        case 5: printf("Densidade demografica\n"); break;
    }
    printf("%s: %.2f\n", nomePais1, valor1_carta1);
    printf("%s: %.2f\n", nomePais2, valor1_carta2);
    printf("Vencedor do atributo 1: %s\n", 
           resultado1 == 1 ? nomePais1 : (resultado1 == 2 ? nomePais2 : "Empate"));

    // Exibe os valores do segundo atributo
    printf("\nAtributo 2: ");
    switch (escolha2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turisticos\n"); break;
        case 5: printf("Densidade demografica\n"); break;
    }
    printf("%s: %.2f\n", nomePais1, valor2_carta1);
    printf("%s: %.2f\n", nomePais2, valor2_carta2);
    printf("Vencedor do atributo 2: %s\n", 
           resultado2 == 1 ? nomePais1 : (resultado2 == 2 ? nomePais2 : "Empate"));

    // Exibe as somas finais
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomePais1, soma1);
    printf("%s: %.2f\n", nomePais2, soma2);

    // Resultado final com operador ternario
    printf("\nResultado final: ");
    printf("%s\n", 
        (soma1 > soma2) ? nomePais1 :
        (soma2 > soma1) ? nomePais2 :
        "Empate!");

    printf("==============================================\n");

    return 0;
}