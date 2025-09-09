#include <stdio.h>

int main () {
    /* Test de otimização

    // primeira carta
    char nomeCarta1[20] = "PrimeiraCarta";
    char estado1; // Uma letra para cada estado
    char codigo1[3]; // Um codigo de 3 digitos para a carta
    char nomeDaCidade1[50]; // Nome da cidade
    int populacao1; // Populacao da cidade
    float area1; // Area da cidade
    float PIB1; // PIB da cidade
    int pontosTuristicos1; // Pontos turisticos da cidade

    //podemos melhorar e tirar esse monte de codigo inuteis

    // ------------------------------------------------------------------------------- //

    // segunda carta
    char nomeCarta2[20] = "SegundaCarta";
    char estado2; // Uma letra para cada estado
    char codigo2[3]; // Um codigo de 2 digitos para a carta indo de 01 a 04
    char nomeDaCidade2[50]; // Nome da cidade
    int populacao2; // Populacao da cidade
    float area2; // Area da cidade
    float PIB2; // PIB da cidade
    int pontosTuristicos2; // Pontos turisticos da cidade

    // ------------------------------------------------------------------------------- //
    */

    //funcionou perfeitamente, mas um pouco mais bagunçado
    char nomeCarta1[20] = "PrimeiraCarta", // Nome da primeira carta
    nomeCarta2[20] = "SegundaCarta", // Nome da segunda carta
    estado1, // Uma letra para cada estado primeira carta 
    estado2, // Uma letra para cada estado segunda carta
    codigo1[3], // Um codigo de 2 digitos para a primeira carta indo de 01 a 04
    codigo2[3], // Um codigo de 2 digitos para a segunda carta indo de 01 a 04
    nomeDaCidade1[50], // Nome da primeira cidade
    nomeDaCidade2[50]; // Nome da segunda cidade

    int populacao1, // Populacao da primeira cidade
    populacao2, // Populacao da segunda cidade
    pontosTuristicos1, // Pontos turisticos da primeira cidade
    pontosTuristicos2; // Pontos turisticos da segunda cidade

    float area1, // Area da primeira cidade
    area2, // Area da segunda cidade
    PIB1, //PIB da primeira cidade
    PIB2; //PIB da segunda cidade

    // ------------------------------------------------------------------------------- //

    // Primeira carta
    printf("Digite uma letra para o estado entre A até H: \n");
    scanf(" %c", &estado1);

    // Código da carta
    printf("Digite o código da carta (2 dígitos) entre 01 a 04: \n");
    scanf(" %s", &codigo1);

    // Nome da Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomeDaCidade1);

    // População
    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao1);

    // Área
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB1);

    // Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    // ------------------------------------------------------------------------------- //

    // Segunda carta
    printf("Digite uma letra para o estado entre A até H: \n");
    scanf(" %c", &estado2);

    // Código da carta
    printf("Digite o código da carta (2 dígitos) entre 01 a 04: \n");
    scanf(" %s", &codigo2);

    // Nome da Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomeDaCidade2);

    // População
    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);

    // Área
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB2);

    // Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // ------------------------------------------------------------------------------- //

    // Calculos das cartas
    // Colocados abaixo do codigo para que receba os valores acima!!

    float DensidadePopulacional1 = populacao1 / area1, // Densidade populacional da primeira cidade
    DensidadePopulacional2 = populacao2 / area2; // Densidade populacional da segunda cidade

    float PIBPerCapita1 = PIB1 / populacao1, // PIB per capita da primeira cidade
    PIBPerCapita2 = PIB2 / populacao2; // PIB per capita da segunda cidade

    // ------------------------------------------------------------------------------- //

    // Impressão da primeira carta
    printf("%s\n", nomeCarta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n km²", area1);
    printf("PIB: %.2f\n bilhões de reais", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n hab/km²", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n reais", PIBPerCapita1);


    // ------------------------------------------------------------------------------- //

    // Impressão da primeira carta
    printf("%s\n", nomeCarta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n km²", area2);
    printf("PIB: %.2f\n bilhões de reais", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n hab/km²", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n reais", PIBPerCapita2);

    // ------------------------------------------------------------------------------- //

    return 0;
}