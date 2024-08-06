#include <stdio.h>
int main (){

    int array1[10], array2[10], arrayResult[10];

    printf("Digite 10 numeros para o array1\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array1[i]);
    }

    printf("digite 10 numeros para o array2\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < 10; i ++){
        arrayResult[i] = (array1[i] + array2[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("RESULTADO É: %d\n" , arrayResult[i]);
    }
    
    return 0;
}