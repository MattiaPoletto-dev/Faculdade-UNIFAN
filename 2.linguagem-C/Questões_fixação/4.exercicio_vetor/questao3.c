#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Questão 3
Faça um programa que leia e armazene, em vetores, as idades e o sexo (masculino: m ou feminino: f) de um conjunto de 10 pessoas. O programa deverá:
 
a) Imprimir as médias de idade de cada sexo;
b) Encontrar o homem mais velho;
c) Encontrar a mulher mais jovem.
*/

int main() {
    
    setlocale(LC_ALL,"Portuguese");

    int idades[10];
    int idade_homem_mais_velho = 0, homem_mais_velho = 0, idade_mulher_mais_jovem = 1000, mulher_mais_jovem = 0;
    int numero_de_homens = 0, numero_de_mulheres = 0;
    int soma_das_idades = 0, soma_das_idades_homens = 0, soma_das_idades_mulheres = 0;
    char sexo[10];

    for (int i = 0;i<10;i++) {
        printf("---------------------------------");
        printf("\nPessoa %d: ",i+1);
        
        do {
            printf("\nIdade: ");
            scanf("%d",&idades[i]);
            if (idades[i] < 0) {
                printf("ERRO! Idade deve ser maior ou igual a 0\n");
            }
        } while (idades[i] < 0);

        do {
            printf("Sexo: ");
            scanf(" %c",&sexo[i]);
            if (sexo[i] != 'f' && sexo[i] != 'F' && sexo[i] != 'm' && sexo[i] != 'M') {
                printf("ERRO! So é aceito 'm' ou 'f'\n");
            }
        } while (sexo[i] != 'f' && sexo[i] != 'F' && sexo[i] != 'm' && sexo[i] != 'M');

        soma_das_idades += idades[i];

        if (sexo[i] == 'm' || sexo[i] == 'M') {
            soma_das_idades_homens += idades[i];
            numero_de_homens++;
        } else {
            soma_das_idades_mulheres += idades[i];
            numero_de_mulheres++;
        }

        if (idades[i] > idade_homem_mais_velho && (sexo[i] == 'm' || sexo[i] == 'M')) {
            idade_homem_mais_velho = idades[i];
            homem_mais_velho = i+1;
        }

        if (idades[i] < idade_mulher_mais_jovem && (sexo[i] == 'f' || sexo[i] == 'F')) {
            idade_mulher_mais_jovem = idades[i];
            mulher_mais_jovem = i+1;
        }
    }

    float media_das_idades_mulheres = 0;
    float media_das_idades_homens = 0;
    float media_das_idades = (float) soma_das_idades / 10;

    if (numero_de_mulheres != 0) {
        media_das_idades_mulheres = (float) soma_das_idades_mulheres / numero_de_mulheres;
    }
    if (numero_de_homens != 0) {
        media_das_idades_homens = (float) soma_das_idades_homens / numero_de_homens;
    }


    system("cls");
    printf("\n---------------------------------");
    printf("\nDados:");
    printf("\n --> Média das idades : %.2f",media_das_idades);
    printf("\n      - Média feminina : %.2f",media_das_idades_mulheres);
    printf("\n      - Média masculina: %.2f",media_das_idades_homens);
    printf("\n --> Homem mais velho : Pessoa %d",homem_mais_velho);
    printf("\n                         -idade: %d",idade_homem_mais_velho);
    printf("\n --> Mulher mais jovem: Pessoa %d",mulher_mais_jovem);
    printf("\n                         -idade: %d",idade_mulher_mais_jovem);
    printf("\n---------------------------------\n\n");
    system("pause");

}
