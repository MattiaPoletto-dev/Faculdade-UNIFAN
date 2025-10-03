#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
    
    setlocale(LC_ALL,"pt-BR.UTF-8");
    system("chcp 65001>nul");

    int qtdProduto;
    float valorUnidade, impostoPorcentagem, receita, valorImposto, valorLiquido;

    printf("Quantas unidades do produto foram vendidas? ");
    scanf("%d",&qtdProduto);
    printf("Valor de cada unidade: R$");
    scanf("%f", &valorUnidade);
    printf("Imposto (em %%): ");
    scanf("%f",&impostoPorcentagem);

    receita = qtdProduto * valorUnidade;
    valorImposto = receita * (impostoPorcentagem / 100);
    valorLiquido = receita - valorImposto;

    printf("\nValor bruto: R$%.2f", receita);
    printf("\nImposto de %.0f%%: R$%.2f",impostoPorcentagem, valorImposto);
    printf("\nValor líquido: R$%.2f", valorLiquido);

    printf("\n\n");
    system("pause");
    return 0;
}
