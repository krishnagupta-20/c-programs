#include<stdio.h>
int main()
{
    int month, days;
    printf("Enter the month number: ");
    scanf("%d", &month);
    switch(month)
    {
        case 1: days = 31;
                break;
        case 2: days = 59; //59=28+31
                break;
        case 3: days = 90; //90=28+31+30
                break;
        case 4: days = 120; //120=28+31+30+31
                break;
        case 5: days = 151; //151=28+31+30+31+30
                break;
        case 6: days = 181; //181=28+31+30+31+30+31
                break;
        case 7: days = 212; //212=28+31+30+31+30+31+30
                break;
        case 8: days = 243; //243=28+31+30+31+30+31+30+31
                break;
        case 9: days = 273; //273=28+31+30+31+30+31+30+31+31
                break;
        case 10: days = 304; //304=28+31+30+31+30+31+30+31+31+30
                break;
        case 11: days = 334; //334=28+31+30+31+30+31+30+31+31+30+31
                break;
        case 12: days = 365; //365=28+31+30+31+30+31+30+31+31+30+31+30
                break;
        default: printf("Invalid month number\n");
    }
    if(month >= 1 && month <= 12)
        printf("Number of days in %d month is: %d\n", month, days);
    return 0;
}