#include <stdio.h>

int main() {

    // ========== TABULEIRO ==========
    // matriz 10x10 inicializada com 0 (água)
    int tabuleiro [10][10];

    for (int i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // ========== NAVIOS ==========
    // cada navio tem tamanho 3
    int navio [3] = {3, 3, 3};

    // ========== POSIÇÃO DOS NAVIOS ==========
    // horizontal
    int linhaH = 2;
    int colunaH = 4;

    //vertical
    int linhaV = 5;
    int colunaV = 1;

    return 0;
}
