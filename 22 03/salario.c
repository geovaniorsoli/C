#include <stdio.h>

float salario = 3000, reajustePorcentual = 0.05, SalarioAtual = 0;
int VR = 28, diasNoMes = 30, diaUteisNoMes = 20, horaTrabalhada = 6;
int main (){
    SalarioAtual = (salario * reajustePorcentual);
    SalarioAtual = (SalarioAtual + salario);
    float totalHorasTrabalhadas = horaTrabalhada * diasNoMes;
    float valorTotalPorHora =  SalarioAtual / totalHorasTrabalhadas;
    float valorTotalRecebido = (VR * diaUteisNoMes) + SalarioAtual;
    
    printf("Salario atual: %.2f \n", SalarioAtual );
    printf("Valor total recebido: %.2f \n", valorTotalRecebido);
    printf("Valor por hora e: %.2f \n", valorTotalPorHora);

return 0;
}