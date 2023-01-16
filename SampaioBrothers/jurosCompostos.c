#include <stdio.h> //biblioteca de funções básicas
#include <math.h> //biblioteca de funções matemáticas

#define JUROS 1.1375  //referente ao juros do investimento mais seguro do pais (SELIC no dia 14/01/23)

//funções de juros composto calculados conforme o tempo
double tempo10anos(int capital);
double tempo20anos(int capital);
double tempo30anos(int capital);
double tempo40anos(int capital);
double tempo50anos(int capital);

int main(void)
{
    int capitalInvestido; //capital que será investido

    double montante10, montante20, montante30, montante40, montante50; //valor total no final de x anos
   

    printf("Insira o Capital a ser investido: "); 
    scanf("%d", &capitalInvestido); //insere o valor que será investido

    //calculando o montante usando a fórmula de juros compostos
    montante10 = tempo10anos(capitalInvestido);
    montante20 = tempo20anos(capitalInvestido);
    montante30 = tempo30anos(capitalInvestido);
    montante40 = tempo40anos(capitalInvestido);
    montante50 = tempo50anos(capitalInvestido);

    //saída dos valores encontrados referente a x anos
    printf("Valores dos montantes: \n");
    printf("\n");
    printf("10 anos: %.2f\n", montante10);
    printf("20 anos: %.2f\n", montante20);
    printf("30 anos: %.2f\n", montante30);
    printf("40 anos: %.2f\n", montante40);
    printf("50 anos: %.2f\n", montante50);
    
    return 0;
}

//funções que calculam juros composto conforme x anos -> Fórmula: Montante = Capital * (1 + Juros)^tempo
double tempo10anos(int capital)
{
    double x = capital*pow(JUROS, 10);
    return x;
}

double tempo20anos(int capital)
{
    double x = capital*pow(JUROS, 20);
    return x;
}

double tempo30anos(int capital)
{
    double x = capital*pow(JUROS, 30); 
    return x;
}

double tempo40anos(int capital)
{
    double x = capital*pow(JUROS, 40);
    return x;
}

double tempo50anos(int capital)
{
    double x = capital*pow(JUROS, 50);
    return x;
}