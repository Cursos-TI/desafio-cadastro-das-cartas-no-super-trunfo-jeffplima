#include <stdio.h>
// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Objetivo: Cadastrar 2 cartas e exibir os valores capturados.
// Nível: NOVATO

int main() {
    printf("\n*-----------------------------------------------------------------------------*");
    printf("\n*---------------------------- SUPER TRUNFO -----------------------------------*");
    printf("\n*-----------------------------------------------------------------------------*");
	
    //Variáveis carta 1
    char estado1;
    char cod1[5];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
	
    //Variáveis carta 2
    char estado2;
    char cod2[5];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
	
    //Leitura dos dados da carta 1
    printf("\n\n=== Carta 1 ===\n");
    printf("Qual a letra do Estado:");
	scanf(" %c",&estado1);
	printf("Informe CODIGO da carta:");
    scanf(" %[^\n]",cod1);
    printf("Informe NOME da cidade:");
    scanf(" %[^\n]",cidade1);
    printf("Informe POPULACAO:");
    scanf(" %d",&populacao1);
    printf("Informe AREA em KM2:");
    scanf(" %f",&area1);
    printf("Informe PIB:");
    scanf(" %f",&pib1);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade:");
    scanf(" %d",&turismo1);
	
    //Leitura dos dados da carta 2
    printf("\n\n=== Carta 2 ===\n");
    printf("Qual a letra do Estado:");
    scanf(" %c",&estado2);
    printf("Informe CODIGO da carta:");
    scanf(" %s",cod2);
    printf("Informe NOME da cidade:");
    scanf(" %[^\n]",cidade2);
    printf("Informe POPULACAO:");
    scanf(" %d",&populacao2);
    printf("Informe AREA em KM2:");
    scanf(" %f",&area2);
    printf("Informe PIB:");
    scanf(" %f",&pib2);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade:");
    scanf(" %d",&turismo2);
	
    //Exibição das informações
    //Carta 1
	printf("\n===============================\nValores Digitados\n===============================\n");
    printf("\n=== Carta 1 ===");
    printf("\nEstado: %c",estado1);
    printf("\nCodigo: %s",cod1);
    printf("\nNome da Cidade: %s",cidade1);
    printf("\nPopulacao: %d",populacao1);
    printf("\nArea: %.2f",area1);
    printf("\nPIB: %.2f bilhoes de reais",pib1);
    printf("\nNumero de Pontos Turisticos: %d",turismo1);
	
	//Carta 2
    printf("\n\n=== Carta 2 ===");
    printf("\nEstado: %c",estado2);
    printf("\nCodigo: %s",cod2);
    printf("\nNome da Cidade: %s",cidade2);
    printf("\nPopulacao: %d",populacao2);
    printf("\nArea: %.2f",area2);
    printf("\nPIB: %.2f bilhoes de reais",pib2);
    printf("\nNumero de Pontos Turisticos: %d",turismo2);
	
    return 0;
}