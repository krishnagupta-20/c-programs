//Lab 4 Question 6
#include<stdio.h>
#include<math.h>
int main()
{
    int c;
    float b;
    printf("Enter the number of calls:\t");
    scanf("%d", &c);

    switch (c)
    {
        case 1 ... 150:
            printf("Your bill is Rs. Nil");
            break;
    
        case 151 ... 250:
            b=(c-150)*.9;
            printf("Your bill is Rs. %f",b);
            break;
        
        case 251 ... 400:
            b=(c-250)*1.2+90;
            printf("Your bill is Rs. %f", b);
            break;

        case 401 ...1000:
            b=(c-400)*1.5+270;
            printf("Your bill is Rs. %f", b);
            break;
    }
    return 0;
}