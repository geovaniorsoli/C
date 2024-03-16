#include <stdio.h>
int main (){
    float nota1, nota2, media;
    
    printf("nota1: ");
    scanf("%f", &nota1);
    
    printf("nota2: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) /2;
    printf("resultado: %f", media);
    
    return 0;
}