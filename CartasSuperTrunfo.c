#include <stdio.h>

int main() {
	char estado1, codigo1[5], cidade1[50];
	int populacao1, pontos_turisticos1;
	float area1, pib1;
	
	char estado2, codigo2[5], cidade2[50];
	int populacao2, pontos_turisticos2;
	float area2, pib2;
	
	printf("\n CADASTRO DA PRIMEIRA CARTA \n");
	
	printf("Estado (A-H): ");
	scanf("%s", &estado1);
	
	printf("Código da Carta (Ex:A01, B03): ");
	scanf("%s", &codigo1);
	
	printf("Nome da Cidade: ");
	scanf("%s", &cidade1);
	
	printf("População: ");
	scanf("%d", &populacao1);
	
	printf("Área em km²: ");
	scanf("%f", &area1);
	
	printf("PIB: ");
	scanf("%f", &pib1);
	
	printf("Número de Pontos Turísticos: ");
	scanf("%d", &pontos_turisticos1);
	
	printf("\n CADASTRO DA SEGUNDA CARTA \n");
		
	printf("Estado (A-H): ");
	scanf("%s", &estado2);
	
	printf("Código da Carta (Ex:A01, B03): ");
	scanf("%s", &codigo2);
	
	printf("Nome da Cidade: ");
	scanf("%s", &cidade2);
	
	printf("População: ");
	scanf("%d", &populacao2);
	
	printf("Área em km²: ");
	scanf("%f", &area2);
	
	printf("PIB: ");
	scanf("%f", &pib2);
	
	printf("Número de Pontos Turísticos: ");
	scanf("%d", &pontos_turisticos2);
	
	printf("\n CARTA 1 \n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Cidade: %s\n", cidade1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões\n", pib1);
	printf("População: %d\n", populacao1);
	printf("Pontos Turísticos: %d\n", pontos_turisticos1);

	printf("\n CARTA 2 \n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Cidade: %s\n", cidade2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões\n", pib2);
	printf("População: %d\n", populacao2);
	printf("Pontos Turísticos: %d\n", pontos_turisticos2);
	
	
	return 0;
}
