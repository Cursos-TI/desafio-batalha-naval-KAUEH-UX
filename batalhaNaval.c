#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com água (0)

    // Coordenadas do navio horizontal e vertical
    int navio_horizontal_linha = 2, navio_horizontal_coluna = 3;
    int navio_vertical_linha = 5, navio_vertical_coluna = 7;

    // Posicionando o navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navio_horizontal_linha][navio_horizontal_coluna + i] = 3;
    }

    // Posicionando o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navio_vertical_linha + i][navio_vertical_coluna] = 3;
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}