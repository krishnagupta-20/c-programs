#include<stdio.h>
int main()
{
int length, breadth, area;
printf("the length is:-");
scanf("%d",&length);

printf("the breadth is:-");
scanf("%d",&breadth);

area= length*breadth;

printf("The area of the rectangle is:- %d", area);

return 0;
}