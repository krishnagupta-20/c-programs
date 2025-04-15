#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int r,l,b,h;
    char fig;
    float area;
    printf("Choose figure from Circle(c), Rectangle(r) and Triangle(t):\t");
    scanf("%char", &fig);
    switch(fig)
    {
        case 'c':
            printf("Enter radius of circle:\t");
            scanf("%d",&r);
            area=3.14f*(float)r*(float)r;
            printf("Area of circle is %f",area);
            break;
        case 'r':
            printf("Enter length and breadth of rectangle:\t");
            scanf("%d%d",&l,&b);
            area=(float)l*(float)b;
            printf("Area of rectangle is %f",area);
            break;
        case 't':
            printf("Enter base and height of triangle:\t");
            scanf("%d%d",&b,&h);
            area=0.5f*((float)b)*((float)h);
            printf("Area of triangle is %f",area);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}