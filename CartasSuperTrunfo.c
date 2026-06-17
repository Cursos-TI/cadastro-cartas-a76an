#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Tema 2 - Densidade populacional e PIB per capita
// Objetivos: Calcular a densidade populacional e o PIB per capita das duas cartas, com os dados informados pelo usuário, e exibir todas as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado, codigoCarta[3], cidade[25], estado2, codigoCarta2[3], cidade2[25];
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, pib, area2, pib2, densidadePopulacional, pibPerCapita, densidadePopulacional2; pibPerCapita2;

  // Área para entrada de dados
    printf("Para a Carta 1:\n");
    printf("Informe o estado (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado);
    printf("Informe o código (a letra do estado seguida de um número de 01 a 04, ex: A01, B03):\n");
    scanf("%s", codigoCarta);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Informe a população:\n");
    scanf("%d", &populacao);
    printf("Informe a área (em km²):\n");
    scanf("%f", &area);
    printf("Informe o PIB:\n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

    printf("Para a Carta 2:\n");
    printf("Informe o estado (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);
    printf("Informe o código (a letra do estado seguida de um número de 01 a 04, ex: A01, B03):\n");
    scanf("%s", codigoCarta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Informe a população:\n");
    scanf("%d", &populacao2);
    printf("Informe a área (em km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

  // Calcula a densidade populacional e o PIB per capita
    densidadePopulacional = (float) populacao/area;
  pibPerCapita = (float) pib/populacao;
    
    densidadePopulacional2 = (float) populacao2/area2;
  pibPerCapita2 = (float) pib2/populacao2;
  
  // Área para exibição dos dados da cidade
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n
      Densidade Populacional: %f hab/km²\n, PIB per Capita: %f reais\n", 
      estado, codigoCarta, cidade, populacao, area, pontosTuristicos, densidadePopulacional, pibPerCapita);
    printf("\n*********************************************\n");
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado2, codigoCarta2, cidade2, populacao2, area2, pontosTuristicos2);

return 0;
} 
