#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    setlocale(LC_ALL,"pt_BR.UTF-8");
    system("chcp 65001>nul");

    float nota1, nota2, media;

    printf("-----------------------------\n");
    printf("1ª nota: ");
    scanf("%f", &nota1);
    printf("2ª nota: ");
    scanf("%f", &nota2);
    printf("-----------------------------\n\n");
    
    media = (nota1 + nota2) / 2;

    if (media == 10) {
        printf("Média: %.2f", media);
        printf("\nAprovado com distinção!\n\n");
    } else if(media >= 7 && media != 10) {
        printf("Média: %.2f", media);
        printf("\nAprovado!\n\n");
    } else if (media >=3 && media < 7) {
        printf("Média: %.2f", media);
        printf("\nExame!\n\n");
    } else if (media < 3 && media >= 0) {
        printf("Média: %.2f", media);
        printf("\nReprovado!\n\n");
    } else {
        printf("Média inválida!\n\n");
    }

    system("pause");

    return 0;
}
