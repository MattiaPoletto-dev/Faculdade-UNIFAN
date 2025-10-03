#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    setlocale(LC_ALL,"pt_BR.UTF-8");
    system("chcp 65001>nul");
    
    int a,b;

    printf("--------------------------------\n");
    printf("1° número inteiro: ");
    scanf("%d",&a);
    printf("\n2° número inteiro: ");
    scanf("%d",&b);
    printf("\n--------------------------------\n");

    if (a > b) {
        printf("O número %d é maior!\n\n", a);
    } else if (a < b) {
        printf("O número %d é maior!\n\n", b);
    } else {
        printf("Os dois números são iguais a %d\n\n", a);
    }

    system("pause");

    return 0;
}
