#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
    
    setlocale(LC_ALL,"pt_BR.UTF-8");
    system("chcp 65001>nul");

    int x;

    printf("-------------------------------\n");
    printf("   Digite um número inteiro: ");
    scanf("%d",&x);
    printf("\n-------------------------------\n\n");

    if (x % 2 == 0) {
        printf("O número inteiro %d é par!\n\n", x);
    } else {
        printf("O número inteiro %d é ímpar!\n\n", x);
    }
    printf("-------------------------------\n\n");

    system("pause");

    return 0;
}
