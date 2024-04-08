#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define palavras 5

int main (void){
    int querJogar;
    char arrPalavras[palavras][15];

    strcpy(arrPalavras[0], "MOYSEYS");
    strcpy(arrPalavras[1], "LAURA");
    strcpy(arrPalavras[2], "NOWE");
    strcpy(arrPalavras[3], "TODDY");

    printf("PALAVRA: %s", arrPalavras[0]);

    printf("\n####################");
    printf("\n---JOGO DA FORCA----");
    printf("\n####################");

    printf("\nDeseja jogar jogo da forca? insira 1 para jogar ou 0 para sair... \n");
    scanf("%d", &querJogar);

    if (querJogar == 1){
        
        srand(time(NULL));
        int i = rand() % palavras;

        char palavraEscolhida[15];
        strcpy(palavraEscolhida, arrPalavras[i]);

        printf("%s", palavraEscolhida);

        //randomiza o arry de palavras

    }else{
        printf("ate a proxima...");
        return 0;
    }
    
}