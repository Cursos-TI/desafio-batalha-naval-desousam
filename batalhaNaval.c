#include <stdio.h>

int main() {

    // ========== TABULEIRO ==========
    // matriz 10x10 inicializada com 0 (água)
    int tabuleiro [10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    int tamanho = 3;

    // ========== NAVIO 1 - HORIZONTAL ==========
    int linhaH = 1, colunaH = 2;

    if (colunaH + tamanho <= 10){
        for(int i = 0; i < tamanho; i++){
            if(tabuleiro[linhaH][colunaH + i] == 0){
                tabuleiro[linhaH][colunaH + i] = 3;
            }
        }
    }

    // ========== NAVIO 2 - VERTICAL ==========
    int linhaV = 5, colunaV = 0;

    if (linhaV + tamanho <= 10){
        for(int i = 0; i < tamanho; i++){
            if(tabuleiro[linhaV + i][colunaV] == 0){
                tabuleiro[linhaV + i][colunaV] = 3;
            }
        }
    }

    // ========== NAVIO 3 - DIAGONAL PRINCIPAL ==========
    int linhaD1 = 0, colunaD1 = 0;

    if(linhaD1 + tamanho <= 10 && colunaD1 + tamanho <= 10){
        for(int i = 0; i < tamanho; i++){
            if (tabuleiro[linhaD1 + i][colunaD1 + i] == 0){
                tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
            }
        }
    }

    // ========== NAVIO 4 - DIAGONAL SECUNDARIA ==========
    int linhaD2 = 2, colunaD2 = 9;

    if(linhaD2 + tamanho <= 10 && colunaD2 - (tamanho - 1) >= 0){
        for(int i = 0; i < tamanho; i++){
            if (tabuleiro[linhaD2 + i][colunaD2 - i] == 0){
                tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
            }
        }
    }

    // ========== POSIÇÃO DOS NAVIOS ==========
    // horizontal
    int linhaH = 2;
    int colunaH = 4;

    //vertical
    int linhaV = 5;
    int colunaV = 1;

    // ========== VALIDAÇÃO ==========
    // verifica se cabe no tabuleiro (horizontal)
    if (colunaH + 3 <= 10){
        for (int i = 0; i < 3; i++){
            tabuleiro[linhaH][colunaH + i] = navio[i];
        }
    }

    // verifica se cabe no tabuleiro (vertical)
    if (linhaV + 3 <= 10){
        for (int i = 0; i < 3; i++){
            tabuleiro[linhaV + i][colunaH] = navio[i];
        }
    }

    // ========== EXIBIÇÃO DO TABULEIRO ==========
    printf("=== TABULEIRO ===\n\n");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
