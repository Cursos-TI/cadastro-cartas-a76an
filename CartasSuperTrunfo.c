#include <stdio.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigoCarta[4], cidade[25], estado2, codigoCarta2[4], cidade2[25];
    int pontosTuristicos, pontosTuristicos2;
    unsigned long int populacao, populacao2;
    float area, pib, densidadePopulacional, pibPerCapita, area2, pib2, densidadePopulacional2, pibPerCapita2, pibBilhao, pibBilhao2, superPoder, superPoder2;
    bool resultadoPontosTuristicos, resultadoPopulacao, resultadoArea, resultadoPib, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;
   
  // Área para entrada de dados
    printf("Para a Carta 1:\n");
    printf("Informe o estado (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado);
    printf("Informe o código (a letra do estado seguida de um número de 01 a 04, ex: A01, B03):\n");
    scanf("%s", codigoCarta);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Informe a população:\n");
    scanf("%lu", &populacao);
    printf("Informe a área (em km²):\n");
    scanf("%f", &area);
    printf("Informe o PIB:\n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

    printf("\n*********************************************\n");

    printf("Para a Carta 2:\n");
    printf("Informe o estado (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);
    printf("Informe o código (a letra do estado seguida de um número de 01 a 04, ex: A01, B03):\n");
    scanf("%s", codigoCarta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Informe a população:\n");
    scanf("%lu", &populacao2);
    printf("Informe a área (em km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

  // Transforma o PIB em bilhões de reais
  pibBilhao = pib / 1000000000.0;
  pibBilhao2 = pib2 / 1000000000.0;
  
  // Calcula a densidade populacional e o PIB per capita
  densidadePopulacional = (float) populacao/area;
  pibPerCapita = (float) pib/populacao;
    
  densidadePopulacional2 = (float) populacao2/area2;
  pibPerCapita2 = (float) pib2/populacao2;

  // Calcula o Super Poder
  superPoder = populacao + area + pib + pontosTuristicos + pibPerCapita + (1/densidadePopulacional);
  superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);

  // Compara cada um dos atributos
  resultadoPontosTuristicos = pontosTuristicos > pontosTuristicos2;
  resultadoPopulacao = populacao > populacao2;
  resultadoArea = area > area2;
  resultadoPib = pib > pib2;
  resultadoDensidadePopulacional = densidadePopulacional < densidadePopulacional2;
  resultadoPibPerCapita = pibPerCapita > pibPerCapita2;
  resultadoSuperPoder = superPoder > superPoder2;
  
  // Área para exibição dos dados da cidade
  printf("\n");
  printf("\n*********************************************\n");
  
  printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n"
      "Número de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
      estado, codigoCarta, cidade, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita);
  printf("\n*********************************************\n");
  printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n"
      "Número de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
      estado2, codigoCarta2, cidade2, populacao2, area2, pibBilhao2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

  // Área para exibição do resultado da comparação das cartas
  printf("\n*********************************************\n");
  
  printf("Comparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidadePopulacional);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibPerCapita);
  printf("Super Poder: Carta 1 venceu (%d\n", resultadoSuperPoder);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontosTuristicos);

  printf("\n*********************************************\n");

return 0;
} 
