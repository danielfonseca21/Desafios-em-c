#include <stdio.h>

    int main() {
        // Declaração das variáveis para a primeira carta
        char estado1;
        char codigo1[5]; // Para armazenar o código da carta (ex: A01)
         char nomeCidade1[50]; // Para armazenar o nome da cidade
         int populacao1;
         float area1;
         float pib1;
         int pontosTuristicos1;
    
        // Leitura dos dados da primeira carta
        printf("Digite o estado (A-H) da Carta 1: ");
        scanf(" %c", &estado1);
        printf("Digite o código da Carta 1 (ex: A01): ");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade da Carta 1: ");
        scanf(" %[^\n]", nomeCidade1); // Lê até a nova linha
        printf("Digite a população da cidade da Carta 1: ");
        scanf("%d", &populacao1);
        printf("Digite a área da cidade da Carta 1 (em km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
        scanf("%d", &pontosTuristicos1);
    
        // Declaração das variáveis para a segunda carta
        char estado2;
        char codigo2[5]; // Para armazenar o código da carta (ex: B02)
        char nomeCidade2[50]; // Para armazenar o nome da cidade
        int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
    
         // Leitura dos dados da segunda carta
        printf("\nDigite o estado (A-H) da Carta 2: ");
        scanf(" %c", &estado2);
        printf("Digite o código da Carta 2 (ex: B02): ");
        scanf("%s", codigo2);
        printf("Digite o nome da cidade da Carta 2: ");
        scanf(" %[^\n]", nomeCidade2); // Lê até a nova linha
        printf("Digite a população da cidade da Carta 2: ");
        scanf("%d", &populacao2);
        printf("Digite a área da cidade da Carta 2 (em km²): ");
        scanf("%f", &area2);
        printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
        scanf("%d", &pontosTuristicos2);
    
        // Exibição das informações da primeira carta
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
        // Exibição das informações da segunda carta
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);

}
