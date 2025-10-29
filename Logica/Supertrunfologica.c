#include <stdio.h> 

int main() {

    ////// Variáveis para armazenar dados das cidades /////
    char estado1, nome_cidade[50], codigo1[4], estado2, nome_cidade2[50], codigo2[4]; 
    int populacao1, turistico1, populacao2, turistico2, opcao; 
    float area1, pib1, area2, pib2, densidade1, densidade2;  
    double percap1, percap2, pib1edensidade1, pib1edensidade2, densinversa1, densinversa2, superpoder1, superpoder2; 

    ///// Entrada de informações //////
    printf("\n===== Escolha o atributo para comparar: =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Supertrunfo Total (Old version)\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    ///// informações /////
    switch (opcao) {

        case 1:
            ////// Carta 1 /////
            printf("\n==== Informações da carta 1 ====\n");
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade);  
            printf("População dessa cidade: ");
            scanf("%d", &populacao1); 
            
            ////// Carta 2 //////
            printf("\n==== Informações da carta 2 ====\n");
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade2); 
            printf("População dessa cidade: ");  
            scanf("%d", &populacao2); 

            //////// Comparação e resultado //////////
            printf("\nComparando: População\n");
            printf("Cidade 1: %s - %d hab\n", nome_cidade, populacao1);
            printf("Cidade 2: %s - %d hab\n", nome_cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (populacao1 < populacao2)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Resultado: empate entre %s e %s!\n", nome_cidade, nome_cidade2);
            break;

        case 2:
            ///// Carta 1 /////
            printf("\n==== Informações da carta 1 ====\n"); 
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade);
            printf("Área da cidade em km²: ");
            scanf("%f", &area1); 

            ///// Carta 2 /////
            printf("\n==== Informações da carta 2 ====\n"); 
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade2);
            printf("Área da cidade em km²: ");
            scanf("%f", &area2); 

            ///// Comparação e resultado /////
            printf("\nComparando: Área (km²)\n");
            printf("Cidade 1: %s - %.1f km²\n", nome_cidade, area1);
            printf("Cidade 2: %s - %.1f km²\n", nome_cidade2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (area1 < area2)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Resultado: empate entre %s e %s!\n", nome_cidade, nome_cidade2);
            break;

        case 3:
            ///// Carta 1 /////
            printf("\n==== Informações da carta 1 ====\n"); 
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade);
            printf("PIB da cidade (em bilhões): ");
            scanf("%f", &pib1);
        
            ///// Carta 2 /////
            printf("\n==== Informações da carta 2 ====\n"); 
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade2);
            printf("PIB da cidade (em bilhões): ");
            scanf("%f", &pib2);

            ///// Comparação e resultado /////
            printf("\nComparando: PIB\n");
            printf("Cidade 1: %s - %.1f bi\n", nome_cidade, pib1);
            printf("Cidade 2: %s - %.1f bi\n", nome_cidade2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (pib1 < pib2)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Resultado: empate entre %s e %s!\n", nome_cidade, nome_cidade2);
            break;

        case 4:
            ///// Carta 1 /////
            printf("\n==== Informações da carta 1 ====\n");
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade);  
            printf("Número de pontos turísticos: ");
            scanf("%d", &turistico1);
            
            ///// Carta 2 /////
            printf("\n==== Informações da carta 2 ====\n");
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade2); 
            printf("Número de pontos turísticos: ");
            scanf("%d", &turistico2); 

            ///// Comparação e resultado /////
            printf("\nComparando: Pontos Turísticos\n");
            printf("Cidade 1: %s - %d pontos\n", nome_cidade, turistico1);
            printf("Cidade 2: %s - %d pontos\n", nome_cidade2, turistico2);

            if (turistico1 > turistico2)
                printf("Resultado: %s venceu!\n", nome_cidade);
            else if (turistico1 < turistico2)
                printf("Resultado: %s venceu!\n", nome_cidade2);
            else
                printf("Resultado: empate entre %s e %s!\n", nome_cidade, nome_cidade2);
            break;

        case 5:
            ///// Carta 1 /////
            printf("\n==== Informações da carta 1 ====\n");
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade); 
            printf("População dessa cidade: ");
            scanf("%d", &populacao1); 
            printf("Área da cidade em km²: ");
            scanf("%f", &area1); 

            ///// Carta 2 /////
            printf("\n==== Informações da carta 2 ====\n");
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade2); 
            printf("População dessa cidade: ");  
            scanf("%d", &populacao2);
            printf("Área da cidade em km²: ");
            scanf("%f", &area2); 

            ////// Cálculo da densidade demográfica /////
            densidade1 = (float) populacao1 / area1;
            densidade2 = (float) populacao2 / area2;

            printf("\nComparando: Densidade Demográfica\n");
            printf("Cidade 1: %s - %.2f hab/km²\n", nome_cidade, densidade1);
            printf("Cidade 2: %s - %.2f hab/km²\n", nome_cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Resultado: %s venceu (menor densidade)!\n", nome_cidade);
            else if (densidade1 > densidade2)
                printf("Resultado: %s venceu (menor densidade)!\n", nome_cidade2);
            else
                printf("Resultado: empate entre %s e %s!\n", nome_cidade, nome_cidade2);
            break;

        case 6:
            ///// Carta 1 /////
            printf("\n====informações da carta 1 ====\n");
            printf("Digite o estado de 'A' a 'H': ");
            scanf(" %c", &estado1); 
            printf("Digite o código postal: ");
            scanf("%s", codigo1); 
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade);  
            printf("População: ");
            scanf("%d", &populacao1); 
            printf("Área (km²): ");
            scanf("%f", &area1);
            printf("PIB (em bilhões): ");
            scanf("%f", &pib1); 
            printf("Número de pontos turísticos: ");
            scanf("%d", &turistico1); 

            ////// Carta 2 /////
            printf("\n=== Informações da carta 2 ===\n");
            printf("Digite o estado de 'A' a 'H': ");
            scanf(" %c", &estado2);
            printf("Digite o código postal: ");
            scanf("%s", codigo2);
            printf("Nome da cidade: ");
            scanf(" %s[^\n]", nome_cidade2); 
            printf("População: ");  
            scanf("%d", &populacao2); 
            printf("Área (km²): ");
            scanf("%f", &area2); 
            printf("PIB (em bilhões): ");
            scanf("%f", &pib2); 
            printf("Número de pontos turísticos: ");
            scanf("%d", &turistico2); 

            ///// Cálculos /////
            densidade1 = (float) populacao1 / area1;
            densidade2 = (float) populacao2 / area2;
            percap1 = (double) (pib1 * 1e9) / populacao1;
            percap2 = (double) (pib2 * 1e9) / populacao2;
            densinversa1 = 1.0 / densidade1;
            densinversa2 = 1.0 / densidade2;

            ///// Superpoder (corrigido) //////
            superpoder1 = (double) populacao1 + area1 + pib1 + turistico1 + percap1 + densinversa1;
            superpoder2 = (double) populacao2 + area2 + pib2 + turistico2 + percap2 + densinversa2;

            printf("\n==== Resultado do Supertrunfo ====\n");
            printf("Carta 1: %s → Poder total: %.2f\n", nome_cidade, superpoder1);
            printf("Carta 2: %s → Poder total: %.2f\n", nome_cidade2, superpoder2);

            if (superpoder1 > superpoder2)
                printf("🏆 Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
            else if (superpoder1 < superpoder2)
                printf("🏆 Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Empate entre %s e %s!\n", nome_cidade, nome_cidade2);
            break;

        default:
            printf("\nO número %d não corresponde a uma opção do menu!\n", opcao);
            break;
    }

    return 0;
}