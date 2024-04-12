#include <stdio.h>
#include <math.h>
int main (){

    int opcao;
    float grau, resposta;

    printf("\n digite 1 para celsius");
    printf("\n digite 2 para fahrenheit \n ---> ");
    scanf("%i", &opcao);

    printf("\n digite sua temperatura:");
    scanf("%f", &grau);

    if(opcao == 1){
        resposta = (grau * 9/5) + 32;
    }else{
        resposta = (grau - 32) * 5/9;
    }

    printf("Sua resposta convertida: %.2f", resposta);


    return 0;
}