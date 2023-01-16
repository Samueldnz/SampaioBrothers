#include <stdio.h> 
#include <math.h> 

#define INTEREST 1.1375  //Interest rate

//functions about Compound Interest by x years
double time10years(int presentValue);
double time20years(int presentValue);
double time30years(int presentValue);
double time40years(int presentValue);
double time50years(int presentValue);

int main(void)
{
    int presentValue;

    //future value in the end of x years
    double futureValue10, futureValue20, futureValue30, futureValue40, futureValue50; 

    printf("Enter with the present value: "); 
    scanf("%d", &presentValue); // get the value from the keyboard

    //calculating
    futureValue10 = time10years(presentValue);
    futureValue20 = time20years(presentValue);
    futureValue30 = time30years(presentValue);
    futureValue40 = time40years(presentValue);
    futureValue50 = time50years(presentValue);

    //output of calculated values 
    printf("Future values: \n");
    printf("\n");
    printf("10 years: %.2f\n", futureValue10);
    printf("20 years: %.2f\n", futureValue20);
    printf("30 years: %.2f\n", futureValue30);
    printf("40 years: %.2f\n", futureValue40);
    printf("50 years: %.2f\n", futureValue50);
    
    return 0;
}

// Formula: Future Value = Presente Value * (1 + Interest)^time
double time10years(int presentValue)
{
    double x = presentValue*pow(INTEREST, 10);
    return x;
}

double time20years(int presentValue)
{
    double x = presentValue*pow(INTEREST, 20);
    return x;
}

double time30years(int presentValue)
{
    double x = presentValue*pow(INTEREST, 30);
    return x;
}

double time40years(int presentValue)
{
    double x = presentValue*pow(INTEREST, 40);
    return x;
}

double time50years(int presentValue)
{
    double x = presentValue*pow(INTEREST, 50);
    return x;
}