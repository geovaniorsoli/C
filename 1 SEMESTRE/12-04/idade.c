#include <stdio.h>
int main (){

    int idade, resultado, resultaquo;

    printf("digite sua idade: ");
    scanf("%d", &idade );

    resultado = (idade % 4);
    resultaquo = (idade / 4);

    printf("resultado: %.2d", resultado );
    printf("\nresultaquo: %.2d", resultaquo );

    return 0;
}