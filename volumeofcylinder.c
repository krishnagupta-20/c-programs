#include<stdio.h>
int main()
{
    float r,h,volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f",&r);
    printf("Enter the height of the cylinder: ");
    scanf("%f",&h);
    volume = 3.14*r*r*h;
    printf("Volume of the cylinder is: %f",volume);
    return 0;
}