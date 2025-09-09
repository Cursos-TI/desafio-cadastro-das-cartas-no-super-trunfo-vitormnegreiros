#include <stdio.h>

float calculadensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

float calculapib(float pib, unsigned long int populacao) {
    return pib / populacao;
}

int main() {
    char estadoA, estadoB;
    char codigocartaA[3], codigocartaB[3];
    char nomecidadeA[20], nomecidadeB[20];
    unsigned long int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontoturisticoA, pontoturisticoB;


    printf("Digite a primeira letra do estado A:\n");
    scanf(" %c", &estadoA);

    printf("Digite o codigo da carta A:\n");
    scanf(" %2s", codigocartaA);

    printf("Digite o nome da cidade A:\n");
    scanf(" %19[^\n]", nomecidadeA);

    printf("Digite o numero de habitantes da cidade A:\n");
    scanf("%lu", &populacaoA);

    printf("Digite o tamanho em km2 da cidade A:\n");
    scanf("%f", &areaA);

    printf("Digite o PIB da cidade A:\n");
    scanf("%f", &pibA);

    printf("Digite a quantidade de pontos turisticos da cidade A:\n");
    scanf("%d", &pontoturisticoA);


    printf("\nDigite a primeira letra do estado B:\n");
    scanf(" %c", &estadoB);

    printf("Digite o codigo da carta B:\n");
    scanf(" %2s", codigocartaB);

    printf("Digite o nome da cidade B:\n");
    scanf(" %19[^\n]", nomecidadeB);

    printf("Digite o numero de habitantes da cidade B:\n");
    scanf("%lu", &populacaoB);

    printf("Digite o tamanho em km2 da cidade B:\n");
    scanf("%f", &areaB);

    printf("Digite o PIB da cidade B:\n");
    scanf("%f", &pibB);

    printf("Digite a quantidade de pontos turisticos da cidade B:\n");
    scanf("%d", &pontoturisticoB);

    float densidadeA = calculadensidade(populacaoA, areaA);
    float densidadeB = calculadensidade(populacaoB, areaB);

    float pibpercapitaA = calculapib(pibA, populacaoA);
    float pibpercapitaB = calculapib(pibB, populacaoB);

 
    printf("\n--- Carta A ---\n");
    printf("Estado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           estadoA, codigocartaA, nomecidadeA, populacaoA, areaA, pibA, pontoturisticoA);
    printf("Densidade: %.2f\nPIB per capita: %.2f\n", densidadeA, pibpercapitaA);

    printf("\n--- Carta B ---\n");
    printf("Estado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           estadoB, codigocartaB, nomecidadeB, populacaoB, areaB, pibB, pontoturisticoB);
    printf("Densidade: %.2f\nPIB per capita: %.2f\n", densidadeB, pibpercapitaB);

 
    printf("\n--- Comparação de cartas (Atributo: População) ---\n");
    printf("Carta A - %s (%c): %lu habitantes\n", nomecidadeA, estadoA, populacaoA);
    printf("Carta B - %s (%c): %lu habitantes\n", nomecidadeB, estadoB, populacaoB);

    if (populacaoA > populacaoB) {
        printf("Resultado: Carta A (%s) venceu!\n", nomecidadeA);
    } else if (populacaoB > populacaoA) {
        printf("Resultado: Carta B (%s) venceu!\n", nomecidadeB);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
