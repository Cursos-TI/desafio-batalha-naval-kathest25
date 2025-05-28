#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Consiferando um tabuleiro para uma matriz 10x10. E quatro navios, incluindo dois na diagonal.

int main() {
    int tabuleiro[10][10];
    int i, j;

    // Tabuleiro é inicializado
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;

    int naviohorizontal[3] = {3, 3, 3};
    int naviovertical[3] = {3, 3, 3};
    int naviodiagonal1[3] = {3, 3, 3};
    int naviodiagonal2[3] = {3, 3, 3};

    int linhaH = 8, colunaH = 3;
    int linhaV = 6, colunaV = 7;
    int linhaD1 = 0, colunaD1 = 0;       // Diagonal 1
    int linhaD2 = 0, colunaD2 = 9;       // Diagonal 2

    // Limites e sobreposição
    if (colunaH + 2 < 10 && linhaV + 2 < 10 &&
        linhaD1 + 2 < 10 && colunaD1 + 2 < 10 &&
        linhaD2 + 2 < 10 && colunaD2 - 2 >= 0 &&
        tabuleiro[linhaH][colunaH] == 0 &&
        tabuleiro[linhaH][colunaH + 1] == 0 &&
        tabuleiro[linhaH][colunaH + 2] == 0 &&
        tabuleiro[linhaV][colunaV] == 0 &&
        tabuleiro[linhaV + 1][colunaV] == 0 &&
        tabuleiro[linhaV + 2][colunaV] == 0 &&
        tabuleiro[linhaD1][colunaD1] == 0 &&
        tabuleiro[linhaD1 + 1][colunaD1 + 1] == 0 &&
        tabuleiro[linhaD1 + 2][colunaD1 + 2] == 0 &&
        tabuleiro[linhaD2][colunaD2] == 0 &&
        tabuleiro[linhaD2 + 1][colunaD2 - 1] == 0 &&
        tabuleiro[linhaD2 + 2][colunaD2 - 2] == 0) {

        tabuleiro[linhaH][colunaH] = 3;
        tabuleiro[linhaH][colunaH + 1] = 3;
        tabuleiro[linhaH][colunaH + 2] = 3;

        tabuleiro[linhaV][colunaV] = 3;
        tabuleiro[linhaV + 1][colunaV] = 3;
        tabuleiro[linhaV + 2][colunaV] = 3;

        tabuleiro[linhaD1][colunaD1] = 3;
        tabuleiro[linhaD1 + 1][colunaD1 + 1] = 3;
        tabuleiro[linhaD1 + 2][colunaD1 + 2] = 3;

        tabuleiro[linhaD2][colunaD2] = 3;
        tabuleiro[linhaD2 + 1][colunaD2 - 1] = 3;
        tabuleiro[linhaD2 + 2][colunaD2 - 2] = 3;
    }

    // Exibição do tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }     
    }

    return 0;
}

    
