#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int posicionarNavioHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {

    if (coluna + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Erro: Navio horizontal não cabe no tabuleiro.\n");
        return 0;
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != 0) {
            printf("Erro: O navio se sobrepõe a outra posição.\n");
            return 0;
        }
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }

    return 1;
}

int posicionarNavioVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {

    if (linha + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Erro: Navio vertical não cabe no tabuleiro.\n");
        return 0;
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != 0) {
            printf("Erro: O navio se sobrepõe a outra posição.\n");
            return 0;
        }
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }

    return 1;
}

int main() {

    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};


    int linhaHorizontal = 2, colunaHorizontal = 3; 
    int linhaVertical = 5, colunaVertical = 6;


    if (!posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal)) {
        printf("Falha ao posicionar o navio horizontal.\n");
    }
    if (!posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical)) {
        printf("Falha ao posicionar o navio vertical.\n");
    }

    printf("Tabuleiro após posicionamento dos navios:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
