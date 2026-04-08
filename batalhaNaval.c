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
