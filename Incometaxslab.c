#include<stdio.h>

int main()
{
    float income, tax;
    printf("Enter your income: ");
    scanf("%f", &income);
    if(income<=250000)
    {
        tax = 0;
    }
    else if(income>250000 && income<=500000)
    {
        tax = (income-250000)*0.05;
    }
    else if(income>500000 && income<=1000000)
    {
        tax = 12500 + (income-500000)*0.1;
    }
    else
    {
        tax = 62500 + (income-1000000)*0.15;
    }
    printf("Income tax to be paid: %f", tax);
    return 0;
}