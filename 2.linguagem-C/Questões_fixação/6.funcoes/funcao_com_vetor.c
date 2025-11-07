#include <stdio.h>
#include <stdlib.h>

/*
enviar a questão passada em sala. Modificar este código de tal forma 
que o usuário digite as notas e defina a quantidade de notas.
#include <stdio.h>
float calcularMedia(int notas[], int tamanho) {
int soma = 0;
for (int i = 0; i < tamanho; i++) {
    soma += notas[i]; }
    return (float)soma / tamanho;
}
int main() {
int notas[3] = {7, 8, 9};
float media = calcularMedia(notas, 3);
printf("Média das notas: %.2f \n", media);
return 0;
}
*/

float calcularMedia(float notas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i]; }
        return (float)soma / tamanho;
}

int main() {
    int numNotas;
    printf("Quantas notas deseja digitar? ");
    scanf("%d",&numNotas);

    float notas[numNotas];
    for (int i = 0;i<numNotas;i++) {
        printf("Nota %d: ",i+1);
        scanf("%f",&notas[i]);
        if (notas[i] < 0 || notas[i] > 10) {
            printf("Nota inválida! Apenas aceitos de 0 a 10\n");
            i--;
        }
    }

    float media = calcularMedia(notas, numNotas);
    printf("Média das notas: %.2f \n", media);
    system("pause");
    return 0;
    
}