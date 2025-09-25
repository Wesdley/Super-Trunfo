#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    srand(time(0)); // Inicializa o gerador de números aleatórios com o tempo atual

    //funcionou perfeitamente, mas um pouco mais bagunçado
    char nomeCarta1[20] = "PrimeiraCarta", // Nome da primeira carta
    nomeCarta2[20] = "SegundaCarta", // Nome da segunda carta
    estado1, // Uma letra para cada estado primeira carta 
    estado2, // Uma letra para cada estado segunda carta
    codigo1[3], // Um codigo de 2 digitos para a primeira carta indo de 01 a 04
    codigo2[3], // Um codigo de 2 digitos para a segunda carta indo de 01 a 04
    nomeDaCidade1[50], // Nome da primeira cidade
    nomeDaCidade2[50]; // Nome da segunda cidade

    unsigned long int populacao1 = rand() % 1000000, // Populacao da primeira cidade
    populacao2 = rand() % 1000000; // Populacao da segunda cidade

    int pontosTuristicos1 = rand() % 1000, // Pontos turisticos da primeira cidade
    pontosTuristicos2 = rand() % 1000,
    pontos1 = 0, // Pontos turisticos da primeira cidade
    pontos2 = 0; // Pontos turisticos da segunda cidade

    float area1 = rand() % 1000000, // Area da primeira cidade
    area2 = rand() % 1000000, // Area da segunda cidade
    PIB1 = rand() % 1000000, //PIB da primeira cidade
    PIB2 = rand() % 1000000; //PIB da segunda cidade

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
/*
    // População
    printf("Digite a quantidade populacional da cidade: \n");
    scanf(" %lu", &populacao1);

    // Área
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area1);

    // PIB
    printf("Digite o PIB da cidade em R$: \n");
    scanf(" %f", &PIB1);

    // Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos1);
   */
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
/*
    // População
    printf("Digite a quantidade populacional da cidade: \n");
    scanf(" %lu", &populacao2);

    // Área
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area2);

    // PIB
    printf("Digite o PIB da cidade em R$: \n");
    scanf(" %f", &PIB2);

    // Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);
    */

    // ------------------------------------------------------------------------------- //

    // Calculos das cartas
    // Colocados abaixo do codigo para que receba os valores acima!!

    float DensidadePopulacional1 = populacao1 / area1, // Densidade populacional da primeira cidade
    DensidadePopulacional2 = populacao2 / area2; // Densidade populacional da segunda cidade

    float PIBPerCapita1 = PIB1 / populacao1, // PIB per capita da primeira cidade
    PIBPerCapita2 = PIB2 / populacao2; // PIB per capita da segunda cidade

    // Calculo do SUPER PORDER!

    float superpoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + ( 1 / DensidadePopulacional1) + PIBPerCapita1, // super poder da primeira cidade
    superpoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + ( 1 / DensidadePopulacional2) + PIBPerCapita2; // super poder da segunda cidade
    
    // Comparação das cartas
    int resultadoSuperpoder = (superpoder1 > superpoder2) ? 1 : 2, // Resultado FINAL
    resultadoPopulacao = (populacao1 > populacao2)  ? 1 : 2, // Resultado da População
    resultadoArea = (area1 > area2)  ? 1 : 2, // Resultado da Área
    resultadoPIB = (PIB1 > PIB2)  ? 1 : 2, // Resultado do PIB
    resultadoDensidadePopulacional = (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 2, // Resultado da Densidade Populacional
    resultadoPIBPerCapita = (PIBPerCapita1 > PIBPerCapita2) ? 1 : 2, // Resultado do PIB per Capita
    resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2; // Resultado dos Pontos Turísticos

    // ------------------------------------------------------------------------------- //
    // Impressão da primeira carta
    printf("\n\n==================== RESULTADOS ====================\n");
    
    printf("\n\n%s\n", nomeCarta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu, Resultado: %d\n", populacao1, resultadoPopulacao);
    printf("Área: %.2f km², Resultado: %d\n", area1, resultadoArea);
    printf("PIB: %.2f bilhões de reais, Resultado: %d\n", PIB1, resultadoPIB);
    printf("Número de Pontos Turísticos: %d, Resultado: %d\n", pontosTuristicos1, resultadoPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km², Resultado: %d\n", DensidadePopulacional1, resultadoDensidadePopulacional);
    printf("PIB per Capita: %.2f reais, Resultado: %d\n", PIBPerCapita1, resultadoPIBPerCapita);
    printf("Superpoder: %.2f, Resultado: %d\n", superpoder1, resultadoSuperpoder);

    // ------------------------------------------------------------------------------- //

    // Impressão da primeira carta
    printf("\n\n%s\n", nomeCarta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu, Resultado: %d\n", populacao2, resultadoPopulacao);
    printf("Área: %.2f km², Resultado: %d\n", area2, resultadoArea);
    printf("PIB: %.2f bilhões de reais, Resultado: %d\n", PIB2, resultadoPIB);
    printf("Número de Pontos Turísticos: %d, Resultado: %d\n", pontosTuristicos2, resultadoPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km², Resultado: %d\n", DensidadePopulacional2, resultadoDensidadePopulacional);
    printf("PIB per Capita: %.2f reais, Resultado: %d\n", PIBPerCapita2, resultadoPIBPerCapita);
    printf("Superpoder: %.2f, Resultado: %d\n", superpoder2, resultadoSuperpoder);

    // ------------------------------------------------------------------------------- //
    // Menu para comparar as cartas
    // int resultado1, resultado2, resultado3, ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    // ataque1 = rand() % 100 + 1; // Ataque da primeira carta
    // ataque2 = rand() % 100 + 1; // Ataque da segunda carta
    // defesa1 = rand() % 100 + 1; // Defesa da primeira carta
    // defesa2 = rand() % 100 + 1; // Defesa da segunda carta
    // recuo1 = rand() % 100 + 1; // Recuo da primeira carta
    // recuo2 = rand() % 100 + 1; // Recuo da segunda carta


    // inicio das comparações
    int opcao1, opcao2, resultado1, resultado2; // inicialização do menu e salvamento de pontos
    float soma1, soma2; // soma dos pontos
    while(1)
    {
        /* int primeiroAtributo, segundoAtributo, continuar;
        printf("\n\n==================== ATRIBUTOS DAS CARTAS ====================\n");
        printf("Escolha o primeiro atributo da carta: \n");
        printf("1. Ataque\n");
        printf("2. Defesa\n");
        printf("3. Recuo\n");
        scanf("%d", &primeiroAtributo);

        switch (primeiroAtributo)
        {
        case 1:
            resultado1 = (ataque1 > ataque2) ? 1 : 0;
            break;
        case 2:
            resultado1 = (defesa1 > defesa2) ? 1 : 0;
            break;
        case 3:
            resultado1 = (recuo1 > recuo2) ? 1 : 0;
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            continuar; // Volta para o início do loop
            break;
        }

         printf("\n\n==================== ATRIBUTOS DAS CARTAS ====================\n");
        printf("ATENÇÃO: Escolha um atributo diferente do primeiro!\n");
        printf("Escolha o Segundo atributo da carta: \n");
        printf("1. Ataque\n");
        printf("2. Defesa\n");
        printf("3. Recuo\n");
        scanf("%d", &segundoAtributo);

        // Comparação do segundo atributo para evitar que o jogador escolha o mesmo atributo
    
        if (primeiroAtributo == segundoAtributo) {
            printf("Escolha uma opção diferente!\n");
            continuar; // Volta para o início do loop
        } else {
            switch (segundoAtributo)
            {
            case 1:
                resultado2 = (ataque1 > ataque2) ? 1 : 0;
                break;
            case 2:
                resultado2 = (defesa1 > defesa2) ? 1 : 0;
                break;
            case 3:
                resultado2 = (recuo1 > recuo2) ? 1 : 0;
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                continuar; // Volta para o início do loop
                break;
            }
        } */
        
        
        printf("\n\n==================== MENU ====================\n\n");
        printf("Selecione o primeiro atributo para comparar:\n");
        printf("1 = População\n2 = Área\n3 = PIB\n4 = Pontos Turísticos\n5 = Densidade Populacional\n6 = PIB per Capita\n7 = Superpoder\n8 = Regras\n0 = Sair do Game\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao1);

        if (opcao1 == 0) {
            printf("\n\n==================== Saindo do Game ====================\n\n");
            break;
        }
        
        switch (opcao1) // Switch para escolher qual atributo deseja comparar
        {
            case 1:
            /*if (populacao1 > populacao2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %lu habitantes\n", populacao1);
            } else if (populacao2 > populacao1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %lu habitantes\n", populacao2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %lu habitantes\nSegunda Carta: %lu habitantes\n", populacao1, populacao2);
            }*/
                resultado1 = (populacao1 > populacao2) ? 1 : 0;
                soma1 = populacao1;
                soma2 = populacao2;
                break;
            case 2:
            /* if (area1 > area2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %.2f km²\n", area1);
            } else if (area2 > area1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %.2f km²\n", area2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %.2f km²\nSegunda Carta: %.2f km²\n", area1, area2);
            } */

                resultado1 = (area1 > area2) ? 1 : 0;
                soma1 = area1;
                soma2 = area2;
                break;
            case 3:
            /* if (PIB1 > PIB2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %.2f de reais\n", PIB1);
            } else if (PIB2 > PIB1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %.2f de reais\n", PIB2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %.2f de reais\nSegunda Carta: %.2f de reais\n", PIB1, PIB2);
            } */

                resultado1 = (PIB1 > PIB2) ? 1 : 0;
                soma1 = PIB1;
                soma2 = PIB2;
                break;
            case 4:
            /* if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %d pontos\n", pontosTuristicos1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %d pontos\n", pontosTuristicos2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %d pontos\nSegunda Carta: %d pontos\n", pontosTuristicos1, pontosTuristicos2);
            } */

                resultado1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
                soma1 = pontosTuristicos1;
                soma2 = pontosTuristicos2;
                break;
            case 5:
           /*  if (DensidadePopulacional1 < DensidadePopulacional2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %.2f habitantes por km²\n", DensidadePopulacional1);
            } else if (DensidadePopulacional2 < DensidadePopulacional1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %.2f habitantes por km²\n", DensidadePopulacional2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %.2f habitantes por km²\nSegunda Carta: %.2f habitantes por km²\n", DensidadePopulacional1, DensidadePopulacional2);
            } */

                resultado1 = (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 0;
                soma1 = DensidadePopulacional1;
                soma2 = DensidadePopulacional2;
                break;
            case 6:
            /* if (PIBPerCapita1 > PIBPerCapita2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %.2f de reais\n", PIBPerCapita1);
            } else if (PIBPerCapita2 > PIBPerCapita1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %.2f de reais\n", PIBPerCapita2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %.2f de reais\nSegunda Carta: %.2f de reais\n", PIBPerCapita1, PIBPerCapita2);
            } */

                resultado1 = (PIBPerCapita1 > PIBPerCapita2) ? 1 : 0;
                soma1 = PIBPerCapita1;
                soma2 = PIBPerCapita2;
                break;
            case 7:
            /* if (superpoder1 > superpoder2) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Primeira Carta foi a Vencedora: %.2f de Super Poder!\n", superpoder1);
            } else if (superpoder2 > superpoder1) {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nA Segunda Carta foi a Vencedora: %.2f de Super Poder!\n", superpoder2);
            } else {
                printf("\n==================== RESULTADO FINAL ====================\n");
                printf("\n\nAs Cartas Empataram\nPrimeira Carta: %.2f de Super Poder!\nSegunda Carta: %.2f de Super Poder!\n", superpoder1, superpoder2);
            } */

                resultado1 = (superpoder1 > superpoder2) ? 1 : 0;
                soma1 = superpoder1;
                soma2 = superpoder2;
                break;
            case 8:
                printf("\n\n==================== REGRAS ====================\n");
                printf("\nRegras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
                break;
            default:
            if (opcao1 < 0|| opcao1 > 8) {
                printf("Opção inválida!");
            }
            break;
        }

        printf("\n\n==================== MENU ====================\n\n");
        printf("Selecione o segundo atributo para comparar:\n");
        printf("ATENÇÃO: Escolha um atributo diferente do primeiro!\n");
        printf("1 = População\n2 = Área\n3 = PIB\n4 = Pontos Turísticos\n5 = Densidade Populacional\n6 = PIB per Capita\n7 = Superpoder\n8 = Regras\n0 = Sair do Game\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);

        if (opcao2 == 0) {
            printf("\n\n==================== Saindo do Game ====================\n\n");
            break;
        }

        if (opcao1 == opcao2) {
            printf("\n\nEscolha uma opção diferente!\n");
            continue; // Volta para o início do loop
        } else {
            switch (opcao2)
            {
                case 1:
                    resultado2 = (populacao1 > populacao2) ? 1 : 0;
                    soma1 = soma1 + populacao1;
                    soma2 = soma2 + populacao2;
                    break;
                case 2:
                    resultado2 = (area1 > area2) ? 1 : 0;
                    soma1 = soma1 + area1;
                    soma2 = soma2 + area2;
                    break;
                case 3:
                    resultado2 = (PIB1 > PIB2) ? 1 : 0;
                    soma1 = soma1 + PIB1;
                    soma2 = soma2 + PIB2;
                    break;
                case 4:
                    resultado2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
                    soma1 = soma1 + pontosTuristicos1;
                    soma2 = soma2 + pontosTuristicos2;
                    break;
                case 5:
                    resultado2 = (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 0;
                    soma1 = soma1 + DensidadePopulacional1;
                    soma2 = soma2 + DensidadePopulacional2;
                    break;
                case 6:
                    resultado2 = (PIBPerCapita1 > PIBPerCapita2) ?  1 : 0;
                    soma1 = soma1 + PIBPerCapita1;
                    soma2 = soma2 + PIBPerCapita2;
                    break;
                case 7:
                    resultado2 = (superpoder1 > superpoder2) ? 1 : 0;
                    soma1 = soma1 + superpoder1;
                    soma2 = soma2 + superpoder2;
                    break;
                case 8:
                    printf("\n\n==================== REGRAS ====================\n");
                    printf("\nRegras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
                    break;
                default:
                    if (opcao2 < 0|| opcao2 > 8) {
                        printf("Opção inválida!");
                    }
                    break;
            }
        }

        if (soma1 > soma2) {
            printf("\n\nParabéns! A primeira carta venceu!\n");
        } else if (soma1 < soma2) {
            printf("\n\nParabéns! A segunda carta venceu!\n");
        } else {
            printf("\n\nEmpate!\n");
        }

        printf("\nPontuação Final:\nPrimeira Carta: %.2f\nSegunda Carta: %.2f\n", soma1, soma2);
        break; // Encerra o loop após uma comparação
        // ------------------------------------------------------------------------------- //  
    }
    // fim while
    return 0;
    // jogo quimera
}