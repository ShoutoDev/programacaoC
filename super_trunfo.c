#include <stdio.h>

int main(){
    char estado[10], estado2[10];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[30], nomeCidade2[30];
    unsigned long int populacao, populacao2;    //Definição de todas as variáveis
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2;
    float perCapita, perCapita2;
    float superPoder, superPoder2;
    float densidadeInversa, densidadeInversa2;
    unsigned long int resultado;
    unsigned long int resultado2;
    unsigned long int resultado3;
    unsigned long int resultado4;
    unsigned long int resultado5;
    unsigned long int resultado6;
    unsigned long int resultado7;



    printf("Carta 1 \n");     /*Cadastro da Carta 1*/

    printf("Digite o Estado (letras de A a H): \n");     /*Entrada de Estado*/    
    scanf("%s", &estado);

    printf("Digite a letra do Estado e Código da carta (de 01 a 04): \n");     /*Entrada do Código da Carta*/
    scanf("%s", &codigoCarta);

    printf("Digite o Nome da Cidade (só primeiro nome): \n");     /*Entrada do nome da cidade*/
    scanf("%s", &nomeCidade);

    printf("Digite o número de habitantes da cidade: \n");     /*entrada do numero de habitantes*/
    scanf("%d", &populacao);

    printf("Digite a área da Cidade em quilômetros quadrados: \n");     /*Entrada da área em km²*/
    scanf("%f", &area);

    printf("Digite o Pib da Cidade: \n");     /*Entrada do Pib da cidade*/
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");     /*Entrada da quantidade de ponto turistico*/ 
    scanf("%d", &pontosTuristicos);
    
    /*Divisão entre cartas*/ 

    printf("---------------------------------------------------------------------------------------------------------------------\n");

    printf("Carta 2 \n");     /*Cadastro da Carta 1*/

    printf("Digite o Estado (letras de A a H): \n");     /*Entrada de Estado*/                     
    scanf(" %s", &estado2);

    printf("Digite a letra do Estado e Código da carta (de 01 a 04): \n");    /*Entrada do Código da Carta*/
    scanf(" %s", &codigoCarta2);

    printf("Digite o Nome da Cidade (só primeiro nome): \n");     /*Entrada do nome da cidade*/
    scanf(" %s", &nomeCidade2);

    printf("Digite o número de habitantes da cidade: \n");     /*entrada do numero de habitantes*/
    scanf(" %d", &populacao2);

    printf("Digite a área da Cidade em quilômetros quadrados: \n");     /*Entrada da área em km²*/
    scanf(" %f", &area2);

    printf("Digite o Pib da Cidade: \n");     /*Entrada do Pib da cidade*/
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");     /*Entrada da quantidade de ponto turistico*/
    scanf(" %d", &pontosTuristicos2);

    printf("------------------------------------------------------\n");

    densidade = populacao / area;   // calculado a densidade da carta 1
    perCapita = pib / populacao;    // calculando o pib per capita da carta 1

    densidade2 = populacao2 / area2;    // calculado a densidade da carta 2
    perCapita2 = pib2 / populacao2;     // calculando o pib per capita da carta 2

    densidadeInversa = 1 / densidade;  // calculando a densidade inversa de ambas as cartas
    densidadeInversa2 = 1 / densidade2;

    superPoder = (float)populacao + area + pib + pontosTuristicos + perCapita + densidadeInversa;  //calculando o super poder de ambas as cartas
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + perCapita2 + densidadeInversa2;

    /*Impressão dos valores*/

    printf("Carta 1: \n");                    
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigoCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de Reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f Reais \n", perCapita);

    printf("------------------------------------------------------\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais \n", perCapita2);

    printf("------------------------------------------------------\n");

    printf("Comparação de Cartas: \n");        //Comparativo das Cartas para ver quem venceu!
    printf("População: %lu\n", (int)populacao > populacao2);
    printf("Área: %lu\n", (int)area > area2);
    printf("PIB: %lu\n", (int)pib > pib2);
    printf("Pontos Turísticos: %lu\n", (int)pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: %lu\n", (int)densidade > densidade2);
    printf("PIB per Capita: %lu\n", (int)perCapita > perCapita2);
    printf("Super Poder: %lu\n", (int)superPoder > superPoder2);

    return 0;


}
