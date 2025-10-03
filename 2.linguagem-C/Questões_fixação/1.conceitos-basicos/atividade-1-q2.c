#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    setlocale(LC_ALL,"pt_BR.UTF-8");
    system("chcp 65001>nul");

    int a,b,x;
    
    printf("Atribua um valor inteiro a variável 'a': ");
    scanf("%d",&a);
    printf("\nAtribua um valor inteiro a variável 'b': ");
    scanf("%d",&b);

    x = a;
    a = b;
    b = x;

    printf("\nAs variáveis foram trocadas:");
    printf("\nVariável 'a': %d",a);
    printf("\nVariável 'b': %d\n\n",b);

    system("pause");

    return 0;
}
