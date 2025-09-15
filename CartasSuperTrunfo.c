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

    
    int escolha1, escolha2;

    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &escolha1);

    
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == escolha1) continue; 
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
            case 6: printf("6 - PIB per capita\n"); break;
        }
    }
    scanf("%d", &escolha2);

    
    float valorA1, valorB1, valorA2, valorB2;

    
    switch (escolha1) {
        case 1: valorA1 = populacaoA; valorB1 = populacaoB; break;
        case 2: valorA1 = areaA; valorB1 = areaB; break;
        case 3: valorA1 = pibA; valorB1 = pibB; break;
        case 4: valorA1 = pontoturisticoA; valorB1 = pontoturisticoB; break;
        case 5: valorA1 = densidadeA; valorB1 = densidadeB; break;
        case 6: valorA1 = pibpercapitaA; valorB1 = pibpercapitaB; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    
    switch (escolha2) {
        case 1: valorA2 = populacaoA; valorB2 = populacaoB; break;
        case 2: valorA2 = areaA; valorB2 = areaB; break;
        case 3: valorA2 = pibA; valorB2 = pibB; break;
        case 4: valorA2 = pontoturisticoA; valorB2 = pontoturisticoB; break;
        case 5: valorA2 = densidadeA; valorB2 = densidadeB; break;
        case 6: valorA2 = pibpercapitaA; valorB2 = pibpercapitaB; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    
    float pontosA = 0, pontosB = 0;

    
    if (escolha1 == 5) { 
        (valorA1 < valorB1) ? pontosA++ : (valorB1 < valorA1 ? pontosB++ : 0);
    } else {
        (valorA1 > valorB1) ? pontosA++ : (valorB1 > valorA1 ? pontosB++ : 0);
    }

    
    if (escolha2 == 5) { 
        (valorA2 < valorB2) ? pontosA++ : (valorB2 < valorA2 ? pontosB++ : 0);
    } else {
        (valorA2 > valorB2) ? pontosA++ : (valorB2 > valorA2 ? pontosB++ : 0);
    }

    
    float somaA = valorA1 + valorA2;
    float somaB = valorB1 + valorB2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("%s (A) - %s (B)\n", nomecidadeA, nomecidadeB);
    printf("Atributo 1: %.2f vs %.2f\n", valorA1, valorB1);
    printf("Atributo 2: %.2f vs %.2f\n", valorA2, valorB2);
    printf("Soma dos atributos: %.2f (A) vs %.2f (B)\n", somaA, somaB);

    if (somaA > somaB) {
        printf("Resultado: Carta A (%s) venceu!\n", nomecidadeA);
    } else if (somaB > somaA) {
        printf("Resultado: Carta B (%s) venceu!\n", nomecidadeB);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
