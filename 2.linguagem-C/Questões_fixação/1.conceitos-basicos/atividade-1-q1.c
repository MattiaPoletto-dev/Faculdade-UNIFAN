#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

const float PI = 3.14159265359;

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL,"pt_BR.UTF-8");
    system("chcp 65001>nul");

    float a,b,c;
    float ab, al;
    float r;
    float area,volume;

//----------------------------------------------------------------

    printf("\n--> Área e Volume do Paralelepípedo <--\n");

    printf("\nComprimento (em metros): ");
    scanf("%f", &a);
    printf("Largura (em metros): ");
    scanf("%f", &b);
    printf("Altura (em metros): ");
    scanf("%f", &c);

    area = 2 * ((a * b) + (a * c) + (b * c));
    volume = a * b * c;

    printf("\nÁrea total (em m²): %.2f", area);
    printf("\nVolume     (em m³): %.2f", volume);

    printf("\n----------------------------------------------------------------");

    printf("\n\n--> Área e Volume do Cilíndro <--\n");

    printf("\nÁrea da base (em metros): ");
    scanf("%f", &ab);
    printf("Altura (em metros): ");
    scanf("%f", &al);
    
    area = 2 * ( (sqrt(PI * ab) * al) + ab);
    volume = ab * al;

    printf("\nÁrea total (em m²): %.2f", area);
    printf("\nVolume     (em m³): %.2f", volume);

    printf("\n----------------------------------------------------------------");
    printf("\n\n--> Área e Volume da Esfera <--\n");

    printf("\nRaio (em metros): ");
    scanf("%f", &r);

    area = 4 * PI * pow(r, 2);
    volume = (4 * PI * pow(r, 3)) / 3;

    printf("\nÁrea total (em m²): %.2f", area);
    printf("\nVolume       (em m³): %.2f", volume);
    printf("\n\n");
    
    system("pause");

    return 0;
}
