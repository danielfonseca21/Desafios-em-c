#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
typedef struct {
    char estado[50];
    char codigo[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(Carta carta) {
    return carta.populacao / carta.area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(Carta carta) {
    return carta.pib / carta.populacao;
}

// Função para comparar duas cartas com base na população
void compararCartas(Carta carta1, Carta carta2) {
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Definindo duas cartas para comparação
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699.28, 10};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1200.27, 362.12, 8};

    // Calculando e exibindo a densidade populacional e PIB per capita
    printf("Densidade Populacional de %s: %.2f\n", carta1.nomeCidade, calcularDensidadePopulacional(carta1));
    printf("PIB per capita de %s: %.2f\n", carta1.nomeCidade, calcularPIBPerCapita(carta1));
    printf("Densidade Populacional de %s: %.2f\n", carta2.nomeCidade, calcularDensidadePopulacional(carta2));
    printf("PIB per capita de %s: %.2f\n", carta2.nomeCidade, calcularPIBPerCapita(carta2));

    // Comparando as cartas
    compararCartas(carta1, carta2);

    return 0;
}