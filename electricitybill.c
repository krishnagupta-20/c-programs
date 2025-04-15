//LAB 4 QUESTION 7
#include<stdio.h>
#include<math.h>
//OUTPUT NOT COMING
int main()
{
    int units;
    float bill;
    printf("Enter the number of units consumed:\t");
    scanf("%d", &units);

    switch(units)
    {
        case 1 ... 100:
            bill = 0;
            break;
        
        case 101 ... 200:
            bill = (units-100)*1.5;
            printf("Your bill is Rs. %.2f", bill);
            break;
        
        case 201 ... 400:
            bill = (units-200)*2.5+150;
            printf("Your bill is Rs. %.2f", bill);
            break;
        
        case 401 ... 1000:
            bill = (units-400)*3.5+650;
            printf("Your bill is Rs. %.2f", bill);
            break;
        }
        return 0;
}