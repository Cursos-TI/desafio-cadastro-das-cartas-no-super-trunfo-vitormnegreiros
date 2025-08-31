#include <stdio.h>

float calculadensidade(int populacao, float area){
    return populacao/area;
};
float calculapib(float pib,int populacao){
    return pib/populacao;
};

int main() {
 char estadoA, estadoB;
 char codigocartaA[3], codigocartaB[3];
 char nomecidadeA[20], nomecidadeB[20];
 int populacaoA, populacaoB;
 float areaA, areaB;
 float pibA, pibB;
 int pontoturisticoA, pontoturisticoB;

 printf("digite a primeira letra do estado A:\n");
 scanf(" %c", &estadoA);
 
 printf("digite a primeira letra do estado B:\n");
 scanf(" %c", &estadoB);
 
 printf("digite o codigo da carta A:\n");
 scanf("%3[^\n]", codigocartaA);
 
 printf("digite o codigo da carta B:\n");
 scanf("%3[^\n]", codigocartaB);
 
 printf("digite o nome da cidade A:\n");
 scanf(" %19[^\n]", nomecidadeA);
 
 printf("digite o nome da cidade B:\n");
 scanf(" %19[^\n]", nomecidadeB);
 
 printf("digite o numero de habitantes da cidade A:\n");
 scanf("%d", &populacaoA);

 printf("digite o numero de habitantes da cidade B:\n");
 scanf("%d", &populacaoB);

 printf("digite o tamanho em km2 da cidade A:\n");
 scanf("%f", &areaA);

 printf("digite o tamanho em km2 da cidade B:\n");
 scanf("%f", &areaB);

 printf("digite o pib da cidade A:\n");
 scanf("%f", &pibA);

 printf("digite o pib da cidade B:\n");
 scanf("%f", &pibB);

 printf("digite a quantidade de pontos turisticos da cidade A:\n");
 scanf("%d", &pontoturisticoA);

 printf("digite a quantidade de pontos turisticos da cidade B:\n");
 scanf("%d", &pontoturisticoB);

 float densidadecA = calculadensidade(populacaoA,areaA);
 float densidadecB = calculadensidade(populacaoB,areaB);

 float pibcA = calculapib(pibA,populacaoA);
 float pibcB = calculapib(pibB,populacaoB);

 printf("\n--- Carta A ---\n");
 printf("Estado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
    estadoA, codigocartaA, nomecidadeA, populacaoA, areaA, pibA, pontoturisticoA);
 printf("a densidade da carta A é: %f\n", densidadecA );
 printf(" O resultado do PIB per capita da carta A é: %f\n", pibcA );

printf("\n \n");

 printf("\n--- Carta B ---\n");
 printf("Estado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
    estadoB, codigocartaB, nomecidadeB, populacaoB, areaB, pibB, pontoturisticoB);

 printf("a densidade da carta B é: %f\n", densidadecB );
 printf(" O resultado do PIB per capita da carta B é: %f\n", pibcB );

    return 0;
}
