#include <stdio.h>

#define TAM 10
#define HAB 5

int main() {

    // ========== TABULEIRO ==========
    // matriz 10x10 inicializada com 0 (água)
    int tabuleiro [TAM][TAM];

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // ========== NAVIOS ==========
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[8][6] = 3;

    // ========== MATRIZES DE HABILIDADE ==========
    int cone[HAB][HAB] = {0};
    int cruz[HAB][HAB] = {0};
    int octaedro[HAB][HAB] = {0};

    // ========== CONE ==========
    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){
            if(j >= (HAB/2 - i) && j <= (HAB/2 + i)){
                cone[i][j] = 1;
            }
        }
    }

    // ========== CRUZ ==========
    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){
            if(i == HAB/2 || j == HAB/2){
                cruz[i][j] = 1;
            }
        }
    }

    // ========== OCTAEDRO ==========
    for(int i = 0; i < HAB; i++){
        for(int j = 0; j < HAB; j++){
            if(abs(i - HAB/2) + abs(j - HAB/2) <= HAB/2){
                octaedro[i][j] = 1;
            }
        }
    }

    // ========== POSIÇÃO DAS HABILIDADES ==========
    int origemLinha = 5;
    int origemColuna = 5;

    // ===== APLICAR CONE =====
    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {
            int lin = origemLinha + i - HAB/2;
            int col = origemColuna + j - HAB/2;

            if (lin >= 0 && lin < TAM && col >= 0 && col < TAM) {
                if (cone[i][j] == 1 && tabuleiro[lin][col] == 0) {
                    tabuleiro[lin][col] = 5;
                }
            }
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
