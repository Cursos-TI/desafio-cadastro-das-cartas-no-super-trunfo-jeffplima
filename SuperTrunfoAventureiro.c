#include<stdio.h>
int calcularDensidade(int pop,float km){
    int densidade=pop/(int)km;
    return densidade;
}
float calcularRenda(float PIB,int POP){
    float renda=PIB/(float)POP;
    return renda;
}
int main(){

    printf("\n*-----------------------------------------------------------------------------*");
    printf("\n*---------------------------- SUPER TRUNFO -----------------------------------*");
    printf("\n*-----------------------------------------------------------------------------*");
    
    printf("\nQual o pais do jogo? ");
    char pais[30];
    scanf(" %[^\n]",&pais);
    printf("Pais informado: %s\n\n",pais);

   	//ESTADO: A
    //Carta 1
    char A_1_UF;//Estado
    char A_1_COD[2];//Código
    char A_1_NOME[60];//Nome da cidade
    int A_1_POP;//População
    float A_1_KM;//Área em km²
    float A_1_PIB;//PIB
    int A_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char A_2_UF;//Estado
    char A_2_COD[2];//Código
    char A_2_NOME[60];//Nome da cidade
    int A_2_POP;//População
    float A_2_KM;//Área em km²
    float A_2_PIB;//PIB
    int A_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char A_3_UF;//Estado
    char A_3_COD[2];//Código
    char A_3_NOME[60];//Nome da cidade
    int A_3_POP;//População
    float A_3_KM;//Área em km²
    float A_3_PIB;//PIB
    int A_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char A_4_UF;//Estado
    char A_4_COD[2];//Código
    char A_4_NOME[60];//Nome da cidade
    int A_4_POP;//População
    float A_4_KM;//Área em km²
    float A_4_PIB;//PIB
    int A_4_TUR;//Número de pontos turísticos da cidade

    //ESTADO: B
    //Carta 1
    char B_1_UF;//Estado
    char B_1_COD[2];//Código
    char B_1_NOME[60];//Nome da cidade
    int B_1_POP;//População
    float B_1_KM;//Área em km²
    float B_1_PIB;//PIB
    int B_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char B_2_UF;//Estado
    char B_2_COD[2];//Código
    char B_2_NOME[60];//Nome da cidade
    int B_2_POP;//População
    float B_2_KM;//Área em km²
    float B_2_PIB;//PIB
    int B_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char B_3_UF;//Estado
    char B_3_COD[2];//Código
    char B_3_NOME[60];//Nome da cidade
    int B_3_POP;//População
    float B_3_KM;//Área em km²
    float B_3_PIB;//PIB
    int B_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char B_4_UF;//Estado
    char B_4_COD[2];//Código
    char B_4_NOME[60];//Nome da cidade
    int B_4_POP;//População
    float B_4_KM;//Área em km²
    float B_4_PIB;//PIB
    int B_4_TUR;//Número de pontos turísticos da cidade
    
    //ESTADO: C
    //Carta 1
    char C_1_UF;//Estado
    char C_1_COD[2];//Código
    char C_1_NOME[60];//Nome da cidade
    int C_1_POP;//População
    float C_1_KM;//Área em km²
    float C_1_PIB;//PIB
    int C_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char C_2_UF;//Estado
    char C_2_COD[2];//Código
    char C_2_NOME[60];//Nome da cidade
    int C_2_POP;//População
    float C_2_KM;//Área em km²
    float C_2_PIB;//PIB
    int C_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char C_3_UF;//Estado
    char C_3_COD[2];//Código
    char C_3_NOME[60];//Nome da cidade
    int C_3_POP;//População
    float C_3_KM;//Área em km²
    float C_3_PIB;//PIB
    int C_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char C_4_UF;//Estado
    char C_4_COD[2];//Código
    char C_4_NOME[60];//Nome da cidade
    int C_4_POP;//População
    float C_4_KM;//Área em km²
    float C_4_PIB;//PIB
    int C_4_TUR;//Número de pontos turísticos da cidade

	//ESTADO: D
    //Carta 1
    char D_1_UF;//Estado
    char D_1_COD[2];//Código
    char D_1_NOME[60];//Nome da cidade
    int D_1_POP;//População
    float D_1_KM;//Área em km²
    float D_1_PIB;//PIB
    int D_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char D_2_UF;//Estado
    char D_2_COD[2];//Código
    char D_2_NOME[60];//Nome da cidade
    int D_2_POP;//População
    float D_2_KM;//Área em km²
    float D_2_PIB;//PIB
    int D_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char D_3_UF;//Estado
    char D_3_COD[2];//Código
    char D_3_NOME[60];//Nome da cidade
    int D_3_POP;//População
    float D_3_KM;//Área em km²
    float D_3_PIB;//PIB
    int D_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char D_4_UF;//Estado
    char D_4_COD[2];//Código
    char D_4_NOME[60];//Nome da cidade
    int D_4_POP;//População
    float D_4_KM;//Área em km²
    float D_4_PIB;//PIB
    int D_4_TUR;//Número de pontos turísticos da cidade

    //ESTADO: E
    //Carta 1
    char E_1_UF;//Estado
    char E_1_COD[2];//Código
    char E_1_NOME[60];//Nome da cidade
    int E_1_POP;//População
    float E_1_KM;//Área em km²
    float E_1_PIB;//PIB
    int E_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char E_2_UF;//Estado
    char E_2_COD[2];//Código
    char E_2_NOME[60];//Nome da cidade
    int E_2_POP;//População
    float E_2_KM;//Área em km²
    float E_2_PIB;//PIB
    int E_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char E_3_UF;//Estado
    char E_3_COD[2];//Código
    char E_3_NOME[60];//Nome da cidade
    int E_3_POP;//População
    float E_3_KM;//Área em km²
    float E_3_PIB;//PIB
    int E_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char E_4_UF;//Estado
    char E_4_COD[2];//Código
    char E_4_NOME[60];//Nome da cidade
    int E_4_POP;//População
    float E_4_KM;//Área em km²
    float E_4_PIB;//PIB
    int E_4_TUR;//Número de pontos turísticos da cidade

    //ESTADO: F
    //Carta 1
    char F_1_UF;//Estado
    char F_1_COD[2];//Código
    char F_1_NOME[60];//Nome da cidade
    int F_1_POP;//População
    float F_1_KM;//Área em km²
    float F_1_PIB;//PIB
    int F_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char F_2_UF;//Estado
    char F_2_COD[2];//Código
    char F_2_NOME[60];//Nome da cidade
    int F_2_POP;//População
    float F_2_KM;//Área em km²
    float F_2_PIB;//PIB
    int F_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char F_3_UF;//Estado
    char F_3_COD[2];//Código
    char F_3_NOME[60];//Nome da cidade
    int F_3_POP;//População
    float F_3_KM;//Área em km²
    float F_3_PIB;//PIB
    int F_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char F_4_UF;//Estado
    char F_4_COD[2];//Código
    char F_4_NOME[60];//Nome da cidade
    int F_4_POP;//População
    float F_4_KM;//Área em km²
    float F_4_PIB;//PIB
    int F_4_TUR;//Número de pontos turísticos da cidade

    //Estado: G
    char G_1_UF;//Estado
    char G_1_COD[2];//Código
    char G_1_NOME[60];//Nome da cidade
    int G_1_POP;//População
    float G_1_KM;//Área em km²
    float G_1_PIB;//PIB
    int G_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char G_2_UF;//Estado
    char G_2_COD[2];//Código
    char G_2_NOME[60];//Nome da cidade
    int G_2_POP;//População
    float G_2_KM;//Área em km²
    float G_2_PIB;//PIB
    int G_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char G_3_UF;//Estado
    char G_3_COD[2];//Código
    char G_3_NOME[60];//Nome da cidade
    int G_3_POP;//População
    float G_3_KM;//Área em km²
    float G_3_PIB;//PIB
    int G_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char G_4_UF;//Estado
    char G_4_COD[2];//Código
    char G_4_NOME[60];//Nome da cidade
    int G_4_POP;//População
    float G_4_KM;//Área em km²
    float G_4_PIB;//PIB
    int G_4_TUR;//Número de pontos turísticos da cidade

    //Estado: H
    char H_1_UF;//Estado
    char H_1_COD[2];//Código
    char H_1_NOME[60];//Nome da cidade
    int H_1_POP;//População
    float H_1_KM;//Área em km²
    float H_1_PIB;//PIB
    int H_1_TUR;//Número de pontos turísticos da cidade
	//Carta 2
    char H_2_UF;//Estado
    char H_2_COD[2];//Código
    char H_2_NOME[60];//Nome da cidade
    int H_2_POP;//População
    float H_2_KM;//Área em km²
    float H_2_PIB;//PIB
    int H_2_TUR;//Número de pontos turísticos da cidade
    //Carta 3
    char H_3_UF;//Estado
    char H_3_COD[2];//Código
    char H_3_NOME[60];//Nome da cidade
    int H_3_POP;//População
    float H_3_KM;//Área em km²
    float H_3_PIB;//PIB
    int H_3_TUR;//Número de pontos turísticos da cidade
    //Carta 4
    char H_4_UF;//Estado
    char H_4_COD[2];//Código
    char H_4_NOME[60];//Nome da cidade
    int H_4_POP;//População
    float H_4_KM;//Área em km²
    float H_4_PIB;//PIB
    int H_4_TUR;//Número de pontos turísticos da cidade

    int densidade;
    float renda;

    //Leitura dos dados
    printf("\nIniciando cadastro das cartas!\n");
    
    //Estado A
    printf("Estado: A\n");
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado:");
    scanf(" %c",&A_1_UF);
    printf("Informe CODIGO da carta:");
    scanf("%s",&A_1_COD);
    printf("Informe NOME da cidade:");
    scanf(" %[^\n]",&A_1_NOME);
    printf("Informe POPULACAO:");
    scanf("%d",&A_1_POP);
    printf("Informe AREA em KM2:");
    scanf("%f",&A_1_KM);
    printf("Informe PIB:");
    scanf("%f",&A_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade:");
    scanf("%d",&A_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("\nEstado: %c",A_1_UF);
    printf("\nCodigo: %s",A_1_COD);
    printf("\nNome: %s",A_1_NOME);
    printf("\nPopulacao: %d",A_1_POP);
    printf("\nArea em Km2: %.1f",A_1_KM);
    printf("\nPIB anual: %.2f",A_1_PIB);
    printf("\nPontos turisticos: %d",A_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(A_1_POP,A_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(A_1_PIB,A_1_POP));
    
    //Carta 2
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&A_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&A_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&A_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&A_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&A_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&A_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&A_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",A_2_UF);
    printf("\nCodigo: %s",A_2_COD);
    printf("\nNome: %s",A_2_NOME);
    printf("\nPopulacao: %d",A_2_POP);
    printf("\nArea em KM²: %.2f",A_2_KM);
    printf("\nPIB: %.2f",A_2_PIB);
    printf("\nPontos turisticos: %d",A_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(A_2_POP,A_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(A_2_PIB,A_2_POP));
    
    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&A_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&A_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&A_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&A_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&A_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&A_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&A_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",A_3_UF);
    printf("\nCodigo: %s",A_3_COD);
    printf("\nNome: %s",A_3_NOME);
    printf("\nPopulacao: %d",A_3_POP);
    printf("\nArea em KM²: %.2f",A_3_KM);
    printf("\nPIB: %.2f",A_3_PIB);
    printf("\nPontos turisticos: %d",A_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(A_3_POP,A_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(A_3_PIB,A_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&A_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&A_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&A_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&A_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&A_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&A_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&A_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",A_4_UF);
    printf("\nCodigo: %s",A_4_COD);
    printf("\nNome: %s",A_4_NOME);
    printf("\nPopulacao: %d",A_4_POP);
    printf("\nArea em KM²: %.2f",A_4_KM);
    printf("\nPIB: %.2f",A_4_PIB);
    printf("\nPontos turisticos: %d",A_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(A_4_POP,A_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(A_4_PIB,A_4_POP));

    //Estado B
    printf("Estado: B\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&B_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&B_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&B_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&B_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&B_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&B_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&B_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",B_1_UF);
    printf("\nCodigo: %s",B_1_COD);
    printf("\nNome: %s",B_1_NOME);
    printf("\nPopulacao: %d",B_1_POP);
    printf("\nArea em KM²: %.2f",B_1_KM);
    printf("\nPIB: %.2f",B_1_PIB);
    printf("\nPontos turisticos: %d",B_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(B_1_POP,B_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(B_1_PIB,B_1_POP));

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&B_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&B_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&B_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&B_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&B_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&B_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&B_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",B_2_UF);
    printf("\nCodigo: %s",B_2_COD);
    printf("\nNome: %s",B_2_NOME);
    printf("\nPopulacao: %d",B_2_POP);
    printf("\nArea em KM²: %.2f",B_2_KM);
    printf("\nPIB: %.2f",B_2_PIB);
    printf("\nPontos turisticos: %d",B_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(B_2_POP,B_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(B_2_PIB,B_2_POP));

    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&B_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&B_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&B_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&B_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&B_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&B_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&B_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",B_3_UF);
    printf("\nCodigo: %s",B_3_COD);
    printf("\nNome: %s",B_3_NOME);
    printf("\nPopulacao: %d",B_3_POP);
    printf("\nArea em KM²: %.2f",B_3_KM);
    printf("\nPIB: %.2f",B_3_PIB);
    printf("\nPontos turisticos: %d",B_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(B_3_POP,B_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(B_3_PIB,B_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&B_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&B_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&B_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&B_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&B_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&B_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&B_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",B_4_UF);
    printf("\nCodigo: %s",B_4_COD);
    printf("\nNome: %s",B_4_NOME);
    printf("\nPopulacao: %d",B_4_POP);
    printf("\nArea em KM²: %.2f",B_4_KM);
    printf("\nPIB: %.2f",B_4_PIB);
    printf("\nPontos turisticos: %d",B_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(B_4_POP,B_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(B_4_PIB,B_4_POP));

	//Estado C
    printf("Estado: C\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&C_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&C_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&C_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&C_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&C_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&C_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&C_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",C_1_UF);
    printf("\nCodigo: %s",C_1_COD);
    printf("\nNome: %s",C_1_NOME);
    printf("\nPopulacao: %d",C_1_POP);
    printf("\nArea em KM²: %.2f",C_1_KM);
    printf("\nPIB: %.2f",C_1_PIB);
    printf("\nPontos turisticos: %d",C_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(C_1_POP,C_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(C_1_PIB,C_1_POP));

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&C_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&C_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&C_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&C_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&C_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&C_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&C_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",C_2_UF);
    printf("\nCodigo: %s",C_2_COD);
    printf("\nNome: %s",C_2_NOME);
    printf("\nPopulacao: %d",C_2_POP);
    printf("\nArea em KM²: %.2f",C_2_KM);
    printf("\nPIB: %.2f",C_2_PIB);
    printf("\nPontos turisticos: %d",C_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(C_2_POP,C_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(C_2_PIB,C_2_POP));
    
    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&C_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&C_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&C_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&C_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&C_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&C_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&C_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",C_3_UF);
    printf("\nCodigo: %s",C_3_COD);
    printf("\nNome: %s",C_3_NOME);
    printf("\nPopulacao: %d",C_3_POP);
    printf("\nArea em KM²: %.2f",C_3_KM);
    printf("\nPIB: %.2f",C_3_PIB);
    printf("\nPontos turisticos: %d",C_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(C_3_POP,C_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(C_3_PIB,C_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&C_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&C_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&C_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&C_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&C_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&C_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&C_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",C_4_UF);
    printf("\nCodigo: %s",C_4_COD);
    printf("\nNome: %s",C_4_NOME);
    printf("\nPopulacao: %d",C_4_POP);
    printf("\nArea em KM²: %.2f",C_4_KM);
    printf("\nPIB: %.2f",C_4_PIB);
    printf("\nPontos turisticos: %d",C_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(C_4_POP,C_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(C_4_PIB,C_4_POP));

	//Estado D
    printf("Estado: D\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&D_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&D_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&D_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&D_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&D_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&D_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&D_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",D_1_UF);
    printf("\nCodigo: %s",D_1_COD);
    printf("\nNome: %s",D_1_NOME);
    printf("\nPopulacao: %d",D_1_POP);
    printf("\nArea em KM²: %.2f",D_1_KM);
    printf("\nPIB: %.2f",D_1_PIB);
    printf("\nPontos turisticos: %d",D_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(D_1_POP,D_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(D_1_PIB,D_1_POP));

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&D_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&D_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&D_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&D_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&D_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&D_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&D_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",D_2_UF);
    printf("\nCodigo: %s",D_2_COD);
    printf("\nNome: %s",D_2_NOME);
    printf("\nPopulacao: %d",D_2_POP);
    printf("\nArea em KM²: %.2f",D_2_KM);
    printf("\nPIB: %.2f",D_2_PIB);
    printf("\nPontos turisticos: %d",D_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(D_2_POP,D_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(D_2_PIB,D_2_POP));

    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&D_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&D_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&D_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&D_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&D_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&D_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&D_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",D_3_UF);
    printf("\nCodigo: %s",D_3_COD);
    printf("\nNome: %s",D_3_NOME);
    printf("\nPopulacao: %d",D_3_POP);
    printf("\nArea em KM²: %.2f",D_3_KM);
    printf("\nPIB: %.2f",D_3_PIB);
    printf("\nPontos turisticos: %d",D_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(D_3_POP,D_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(D_3_PIB,D_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&D_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&D_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&D_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&D_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&D_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&D_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&D_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",D_4_UF);
    printf("\nCodigo: %s",D_4_COD);
    printf("\nNome: %s",D_4_NOME);
    printf("\nPopulacao: %d",D_4_POP);
    printf("\nArea em KM²: %.2f",D_4_KM);
    printf("\nPIB: %.2f",D_4_PIB);
    printf("\nPontos turisticos: %d",D_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(D_4_POP,D_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(D_4_PIB,D_4_POP));

	//Estado E
    printf("Estado: E\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&E_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&E_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&E_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&E_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&E_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&E_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&E_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",E_1_UF);
    printf("\nCodigo: %s",E_1_COD);
    printf("\nNome: %s",E_1_NOME);
    printf("\nPopulacao: %d",E_1_POP);
    printf("\nArea em KM²: %.2f",E_1_KM);
    printf("\nPIB: %.2f",E_1_PIB);
    printf("\nPontos turisticos: %d",E_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(E_1_POP,E_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(E_1_PIB,E_1_POP));

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&E_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&E_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&E_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&E_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&E_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&E_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&E_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",E_2_UF);
    printf("\nCodigo: %s",E_2_COD);
    printf("\nNome: %s",E_2_NOME);
    printf("\nPopulacao: %d",E_2_POP);
    printf("\nArea em KM²: %.2f",E_2_KM);
    printf("\nPIB: %.2f",E_2_PIB);
    printf("\nPontos turisticos: %d",E_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(E_2_POP,E_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(E_2_PIB,E_2_POP));

    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&E_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&E_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&E_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&E_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&E_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&E_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&E_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",E_3_UF);
    printf("\nCodigo: %s",E_3_COD);
    printf("\nNome: %s",E_3_NOME);
    printf("\nPopulacao: %d",E_3_POP);
    printf("\nArea em KM²: %.2f",E_3_KM);
    printf("\nPIB: %.2f",E_3_PIB);
    printf("\nPontos turisticos: %d",E_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(E_3_POP,E_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(E_3_PIB,E_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&E_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&E_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&E_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&E_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&E_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&E_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&E_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",E_4_UF);
    printf("\nCodigo: %s",E_4_COD);
    printf("\nNome: %s",E_4_NOME);
    printf("\nPopulacao: %d",E_4_POP);
    printf("\nArea em KM²: %.2f",E_4_KM);
    printf("\nPIB: %.2f",E_4_PIB);
    printf("\nPontos turisticos: %d",E_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(E_4_POP,E_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(E_4_PIB,E_4_POP));

	//Estado F
    printf("Estado: F\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&F_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&F_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&F_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&F_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&F_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&F_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&F_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",F_1_UF);
    printf("\nCodigo: %s",F_1_COD);
    printf("\nNome: %s",F_1_NOME);
    printf("\nPopulacao: %d",F_1_POP);
    printf("\nArea em KM²: %.2f",F_1_KM);
    printf("\nPIB: %.2f",F_1_PIB);
    printf("\nPontos turisticos: %d",F_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(F_1_POP,F_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(F_1_PIB,F_1_POP));

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&F_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&F_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&F_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&F_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&F_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&F_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&F_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",F_2_UF);
    printf("\nCodigo: %s",F_2_COD);
    printf("\nNome: %s",F_2_NOME);
    printf("\nPopulacao: %d",F_2_POP);
    printf("\nArea em KM²: %.2f",F_2_KM);
    printf("\nPIB: %.2f",F_2_PIB);
    printf("\nPontos turisticos: %d",F_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(F_2_POP,F_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(F_2_PIB,F_2_POP));

    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&F_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&F_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&F_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&F_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&F_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&F_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&F_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",F_3_UF);
    printf("\nCodigo: %s",F_3_COD);
    printf("\nNome: %s",F_3_NOME);
    printf("\nPopulacao: %d",F_3_POP);
    printf("\nArea em KM²: %.2f",F_3_KM);
    printf("\nPIB: %.2f",F_3_PIB);
    printf("\nPontos turisticos: %d",F_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(F_3_POP,F_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(F_3_PIB,F_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&F_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&F_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&F_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&F_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&F_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&F_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&F_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",F_4_UF);
    printf("\nCodigo: %s",F_4_COD);
    printf("\nNome: %s",F_4_NOME);
    printf("\nPopulacao: %d",F_4_POP);
    printf("\nArea em KM²: %.2f",F_4_KM);
    printf("\nPIB: %.2f",F_4_PIB);
    printf("\nPontos turisticos: %d",F_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(F_4_POP,F_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(F_4_PIB,F_4_POP)); 

	//Estado G
    printf("Estado: G\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&G_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&G_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&G_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&G_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&G_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&G_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&G_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",G_1_UF);
    printf("\nCodigo: %s",G_1_COD);
    printf("\nNome: %s",G_1_NOME);
    printf("\nPopulacao: %d",G_1_POP);
    printf("\nArea em KM²: %.2f",G_1_KM);
    printf("\nPIB: %.2f",G_1_PIB);
    printf("\nPontos turisticos: %d",G_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(G_1_POP,G_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(G_1_PIB,G_1_POP)); 

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&G_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&G_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&G_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&G_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&G_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&G_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&G_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",G_2_UF);
    printf("\nCodigo: %s",G_2_COD);
    printf("\nNome: %s",G_2_NOME);
    printf("\nPopulacao: %d",G_2_POP);
    printf("\nArea em KM²: %.2f",G_2_KM);
    printf("\nPIB: %.2f",G_2_PIB);
    printf("\nPontos turisticos: %d",G_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(G_2_POP,G_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(G_2_PIB,G_2_POP));

    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&G_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&G_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&G_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&G_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&G_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&G_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&G_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",G_3_UF);
    printf("\nCodigo: %s",G_3_COD);
    printf("\nNome: %s",G_3_NOME);
    printf("\nPopulacao: %d",G_3_POP);
    printf("\nArea em KM²: %.2f",G_3_KM);
    printf("\nPIB: %.2f",G_3_PIB);
    printf("\nPontos turisticos: %d",G_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(G_3_POP,G_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(G_3_PIB,G_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&G_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&G_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&G_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&G_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&G_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&G_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&G_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",G_4_UF);
    printf("\nCodigo: %s",G_4_COD);
    printf("\nNome: %s",G_4_NOME);
    printf("\nPopulacao: %d",G_4_POP);
    printf("\nArea em KM²: %.2f",G_4_KM);
    printf("\nPIB: %.2f",G_4_PIB);
    printf("\nPontos turisticos: %d",G_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(G_4_POP,G_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(G_4_PIB,G_4_POP));

	//Estado H
    printf("Estado: H\n");
    
    //Carta 1
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&H_1_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&H_1_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&H_1_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&H_1_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&H_1_KM);
    printf("Informe PIB: ");
    scanf("%f",&H_1_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&H_1_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",H_1_UF);
    printf("\nCodigo: %s",H_1_COD);
    printf("\nNome: %s",H_1_NOME);
    printf("\nPopulacao: %d",H_1_POP);
    printf("\nArea em KM²: %.2f",H_1_KM);
    printf("\nPIB: %.2f",H_1_PIB);
    printf("\nPontos turisticos: %d",H_1_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(H_1_POP,H_1_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(H_1_PIB,H_1_POP));

    //Carta 2
    printf("\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&H_2_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&H_2_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&H_2_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&H_2_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&H_2_KM);
    printf("Informe PIB: ");
    scanf("%f",&H_2_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&H_2_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",H_2_UF);
    printf("\nCodigo: %s",H_2_COD);
    printf("\nNome: %s",H_2_NOME);
    printf("\nPopulacao: %d",H_2_POP);
    printf("\nArea em KM²: %.2f",H_2_KM);
    printf("\nPIB: %.2f",H_2_PIB);
    printf("\nPontos turisticos: %d",H_2_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(H_2_POP,H_2_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(H_2_PIB,H_2_POP));

    //Carta 3
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&H_3_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&H_3_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&H_3_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&H_3_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&H_3_KM);
    printf("Informe PIB: ");
    scanf("%f",&H_3_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&H_3_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",H_3_UF);
    printf("\nCodigo: %s",H_3_COD);
    printf("\nNome: %s",H_3_NOME);
    printf("\nPopulacao: %d",H_3_POP);
    printf("\nArea em KM²: %.2f",H_3_KM);
    printf("\nPIB: %.2f",H_3_PIB);
    printf("\nPontos turisticos: %d",H_3_TUR);   
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(H_3_POP,H_3_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(H_3_PIB,H_3_POP));

    //Carta 4
    printf("-----------------------------------------------------------\nProxima carta\n");
    printf("\nInforme a PRIMEIRA letra do Estado: ");
    scanf(" %c",&H_4_UF);
    printf("Informe CODIGO da carta: ");
    scanf(" %s",&H_4_COD);
    printf("Informe NOME da cidade: ");
    scanf(" %[^\n]",&H_4_NOME);
    printf("Informe POPULACAO: ");
    scanf("%d",&H_4_POP);
    printf("Informe AREA em KM²: ");
    scanf("%f",&H_4_KM);
    printf("Informe PIB: ");
    scanf("%f",&H_4_PIB);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade: ");
    scanf("%d",&H_4_TUR);
    //Conferencia das informações
    printf("\n-----------------------------------------------------------\nDados informados:\n");
    printf("Estado: %c",H_4_UF);
    printf("\nCodigo: %s",H_4_COD);
    printf("\nNome: %s",H_4_NOME);
    printf("\nPopulacao: %d",H_4_POP);
    printf("\nArea em KM²: %.2f",H_4_KM);
    printf("\nPIB: %.2f",H_4_PIB);
    printf("\nPontos turisticos: %d",H_4_TUR);
    //Calcular densidade demográfica e renda per capita
    printf("\nDensidade Populacional: %d pessoas/km²",calcularDensidade(H_4_POP,H_4_KM));
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",calcularRenda(H_4_PIB,H_4_POP));
    
    printf("\nPrograma finalizado com sucesso!");
    return 0;
}
