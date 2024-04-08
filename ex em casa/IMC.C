#include <stdio.h>
int main(void)
{

    float peso, altura, imc;

    printf("\n digite seu peso:  ");
    scanf("%f", &peso);
    printf("\n digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * 2);

    if (imc < 18.5)
    {
        printf("MAGRO ATE DEMAIS");
    }else{
        if (imc <= 24.9)
        {
            printf("NORMAL");
        } else {
            if (imc <= 35)
            {
                printf("OBESO 01");
            }else {
                if (imc <= 39)
                {
                    printf("OBESO 02");
                } else{
                    printf("morto ja");
                }
            }
        }
    }

    return 0;
}