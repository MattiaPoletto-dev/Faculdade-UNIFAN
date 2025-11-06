#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Questão 2
Faca um programa que receba um vetor
com 10 valores inteiros e que indique: quantos são pares, quantos são impares,
quantos são positivos e quantos são negativos.
*/

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];
    int pares = 0,impares = 0,positivos = 0,negativos = 0;

    for (int i=0;i<10;i++) {

        printf("\nDigite o %d° número inteiro: ",i+1);
        scanf("%d",&numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (numeros[i] > 0) {
            positivos++;
        }

        if (numeros[i] < 0) {
            negativos++;
        }
        printf("\n");
    }

    system("cls");
    printf("\nNúmeros digitados: ");
    for (int i = 0;i<10;i++) {
        printf("%d ",numeros[i]);
    }
    printf("\n------------------------");
    printf("\nDados:");
    printf("\n --> Pares    : %d",pares);
    printf("\n --> Ímpares  : %d",impares);
    printf("\n --> Positivos: %d",positivos);
    printf("\n --> Negativos: %d",negativos);
    printf("\n------------------------\n\n");

    system("pause");


}
