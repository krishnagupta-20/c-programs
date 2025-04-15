#include<stdio.h>

int main()
{
    int a,b;
    printf("Input First Number");
    scanf("%d",a);

    printf("Input Second Number");
    scanf("%d",b);

    if(a%b==0)
    {
        printf("a is a multiple of b");
    }

    if(b%a==0)
    {
        printf("b is a multiple of b");
    }

return 0;
}