#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    double x,y;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    x =(-b + sqrt(b*b - 4*a*c))/(2*a);
    y =(-b - sqrt(b*b - 4*a*c))/(2*a);
    printf("The roots of the quadratic equation are: %lf %lf",x,y);
    return 0;
}