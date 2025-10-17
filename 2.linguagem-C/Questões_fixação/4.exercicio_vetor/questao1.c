#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Questão 1
Crie um vetor A com 10
elementos inteiros. Construa um vetor B de mesmo tipo e tamanho, sendo que cada
elemento do vetor B deverá ser o respectivo elemento de A multiplicado por sua
posição (ou índice), ou seja: B[i] = A[i] * i.
*/

int main(int argc, char const *argv[]) {
    
    setlocale(LC_ALL,"portuguese");
    
    int a[10];
    int b[10];

    for (int i = 0;i < 10;i++) {
        printf("Complete o array: \n");
        printf("%d° número inteiro: ",i + 1);
        scanf("%d",&a[i]);
        b[i] = a[i] * i;
        system("cls");
    }
    printf("\n --> b[i] = a[i] * i");
    for (int i = 0;i < 10;i++) {
        printf("\na[%d] = %d  |  b[%d] = %d",i,a[i],i,b[i]);
    }
    printf("\n");
    system("pause");
}
