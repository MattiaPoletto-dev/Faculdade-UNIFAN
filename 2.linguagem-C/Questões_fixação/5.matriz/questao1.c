#include <stdio.h>
#include <stdlib.h>

/*
Dada uma matriz M 4x4 de valores reais, faça um algoritmo que leia esses valores e, ao final da leitura de todos, imprima
o relatório com os seguintes itens:

a)  A soma dos valores de cada coluna da matriz;
b)  A soma dos elementos acima da diagonal principal.
*/

int main() {

    float matriz4x4[4][4];
    float somaColunas[4] = {0,0,0,0}, acimaDiagonal = 0;

    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            printf("\nMatriz 4x4: ");
            printf("\nTermo a(%d,%d): ",i+1,j+1);
            scanf("%f",&matriz4x4[i][j]);

            somaColunas[j] += matriz4x4[i][j];

            if(j==i+1) {
                acimaDiagonal += matriz4x4[i][j];
            }
        }
            system("cls");
    }

    printf("\n-----------------------------");
    printf("\nMatriz 4x4: \n");
    for (int i=0;i<4;i++) {
        printf("| ");
        for (int j=0;j<4;j++) {
            printf("%.2f ",matriz4x4[i][j]);
        }
        printf("|\n");
    }
    printf("\n-----------------------------");
    printf("\nDados:");
    printf("\nSoma das colunas: ");
    for (int i=0;i<4;i++) {
        printf("\n - Coluna %d: %.2f",i+1,somaColunas[i]);
    }
    printf("\n\nSoma dos termos acima da diagonal principal: %.2f",acimaDiagonal);
    printf("\n-----------------------------\n\n");

    system("pause");

}