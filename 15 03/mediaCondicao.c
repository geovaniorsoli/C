#include <stdio.h>
int main (){
    float nota1, nota2, media = 0;
    
    printf("nota1: ");
    scanf("%f", &nota1);
    
    printf("nota2: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) /2;
    printf("resultado: %f \n", media);
    
    if(media < 6 ){
        printf("reprovado");
    }else{
        printf("aprovado");
    }
    return 0;
}