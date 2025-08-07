#include <stdio.h>

int main() {	
    // Informações necessárias.
    char estado1, estado2;
	char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
	int populacao1, populacao2, pontos1, pontos2;
	float area1, area2, pib1, pib2;
	float denpop1, denpop2, pibcap1, pibcap2; 

	// Inserindo informações das cartas.

	printf("\n PRIMEIRA CARTA \n");

	printf("Estado (A-H):");
	scanf(" %c", &estado1);

	printf("Código:");
	scanf("%s", codigo1);

	printf("Nome da Cidade:");
	scanf("%s", cidade1);

	printf("População:");
	scanf("%d", &populacao1);
	
	printf("Área em km²:");
	scanf("%f", &area1);

	printf("PIB:");
	scanf("%f", &pib1);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos1);


	printf("\n SEGUNDA CARTA\n");

	printf("Estado (A-H):");
	scanf(" %c", &estado2);

	printf("Código:");
	scanf("%s", codigo2);

	printf("Nome da Cidade:");
	scanf("%s", cidade2);

	printf("População:");
	scanf("%d", &populacao2);
	
	printf("Área em km²:");
	scanf("%f", &area2);

	printf("PIB:");
	scanf("%f", &pib2);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos2);

	// Cálculo de densidade populacional.
	denpop1 = populacao1 / area1;
	denpop2 = populacao2 / area2;

	// Cálculo do PIB.
	pibcap1 = pib1 / populacao1;
	pibcap2 = pib2 / populacao2;
	


	// Exibindo as cartas.
	printf("\n Carta 1 \n");

	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Área em km²: %.2f\n", area1);
	printf("PIB: %f bilhões\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontos1);
	printf("Densidade Populacional: %.2f hab/km² \n", denpop1);
	printf("PIB per capita: %.2f PIB/hab \n", pibcap1);

	printf("\n Carta 2 \n");

	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área em km²: %.2f\n", area2);
	printf("PIB: %f bilhões\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontos2);
	printf("Densidade Populacional: %.2f hab/km² \n", denpop2);
	printf("PIB per capita: %.2f PIB/hab \n", pibcap2);


    return 0; 
}
