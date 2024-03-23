#include <stdio.h>
int main (){
    float nota1, nota2, media = 0;
    
    printf("nota1: ");
    scanf("%f", &nota1);
    
    printf("nota2: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) /2;
    printf("resultado: %f \n", media);
    
    if(media < 7 ){
        float rec, maiornota = 0;
        printf("reprovado \n");
        printf("digite rec: ");
        scanf("%f", &rec);
        if(nota1 > nota2){
            maiornota = nota1;
        } else{
            maiornota = nota2;
        }
        media = (maiornota + rec) / 2;
        printf("resutado: %.2f \n", media);
        if (media < 7){
            printf("reprovado do mesmo jeito \n");
        }else{
            printf("aprovado \n");
        }
    }else{
        printf("aprovado \n");
    }
    return 0;
}