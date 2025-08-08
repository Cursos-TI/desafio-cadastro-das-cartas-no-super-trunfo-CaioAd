#include <stdio.h>

int main() {	
    // Informações necessárias.
    char estado1, estado2;
    char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int.
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float denpop1, denpop2, pibcap1, pibcap2; 
    float super1, super2;

    // Inserindo informações das cartas.
    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo de densidade populacional.
    denpop1 = (float)populacao1 / area1;
    denpop2 = (float)populacao2 / area2;

    // Cálculo do PIB per capita.
    pibcap1 = pib1 / (float)populacao1;
    pibcap2 = pib2 / (float)populacao2;

    // Cálculo do Super Poder.
    super1 = (float)populacao1 + area1 + pib1 + pontos1 + pibcap1 + (1.0f / denpop1);
    super2 = (float)populacao2 + area2 + pib2 + pontos2 + pibcap2 + (1.0f / denpop2);

    // Exibindo as cartas.
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f PIB/hab\n", pibcap1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f PIB/hab\n", pibcap2);
    printf("Super Poder: %.2f\n", super2);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence).
    printf("\n===== RESULTADOS DAS COMPARAÇÕES =====\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional: %d\n", denpop1 < denpop2); // Menor vence.
    printf("PIB per Capita: %d\n", pibcap1 > pibcap2);
    printf("Super Poder: %d\n", super1 > super2);

    return 0;
}
