#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"portuguese");
	
    float peso, altura, imc, somaImc;
    int contador = 0;
    char opcao;

    
    while (1) {
        contador += 1;
        system("cls");
        
        printf("------------------------\n");
    	printf(" --> Cálculo do IMC <--");
    	printf("\n------------------------");
        
        printf("\n\nPessoa %d",contador);
        printf("\nQual é o peso dela (em kg)? ");
        scanf("%f", &peso);
        printf("\nQual é a altura dela (em metros)? ");
        scanf("%f", &altura);
        
        imc = peso / (altura * altura);
        somaImc += imc;

        if (imc >= 0 && imc < 18.5) {
            printf("\nPessoa %d está abaixo do peso\n", contador);
            printf("IMC: %.1f",imc);
        } else if (imc >= 18.5 && imc < 25){
            printf("\nPessoa %d está no peso ideal\n", contador);
            printf("IMC: %.1f",imc);
        } else if (imc >= 25 && imc < 30) {
            printf("\nPessoa %d está acima do peso\n", contador);
            printf("IMC: %.1f",imc);
        } else if (imc >= 30 && imc < 35) {
            printf("\nPessoa %d está com obesidade 1\n", contador);
            printf("IMC: %.1f",imc);
        } else if (imc >= 35 && imc < 40) {
            printf("\nPessoa %d está com obesidade 2\n", contador);
            printf("IMC: %.1f",imc);
        } else if (imc >= 40) {
            printf("\nPessoa %d está com obesidade 3\n", contador);
            printf("IMC: %.1f",imc);
        } else {
            printf("\nPeso ou Altura inválida!\n");
        }
        printf("\nDeseja continuar [s/n]? ");
        fflush(stdin);
        scanf(" %c", &opcao);
        if (opcao == 'n' || opcao=='N') {
            break;
        }
    }
    float imcTotal = somaImc / contador;

    if (imcTotal >= 0 && imcTotal < 18.5) {
            printf("\nA média das %d pessoas está abaixo do peso", contador);
            printf("\nIMC: %.1f",imcTotal);
        } else if (imcTotal >= 18.5 && imcTotal < 25){
            printf("\nA média das %d pessoas está no peso ideal", contador);
            printf("\nIMC: %.1f",imcTotal);
        } else if (imcTotal >= 25 && imcTotal < 30) {
            printf("\nA média das %d pessoas está  acima do peso", contador);
            printf("\nIMC: %.1f",imcTotal);
        } else if (imcTotal >= 30 && imcTotal < 35) {
            printf("\nA média das %d pessoas está  com obesidade 1", contador);
            printf("\nIMC: %.1f",imcTotal);
        } else if (imcTotal >= 35 && imcTotal < 40) {
            printf("\nA média das %d pessoas está  com obesidade 2", contador);
            printf("\nIMC: %.1f",imcTotal);
        } else if (imcTotal >= 40) {
            printf("\nA média das %d pessoas está com obesidade 3", contador);
            printf("\nIMC: %.1f",imcTotal);
        } else {
            printf("\nPeso ou Altura inválida!");
        }

    return 0;
}

