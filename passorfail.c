#include <stdio.h>

int main() {
    int a,b,c,avg;
    
    printf("Marks optained subject A out of 100");
    scanf("%d",&a);
    
    printf("Marks optained subject B out of 100");
    scanf("%d",&b);
    
    printf("Marks optained subject C out of 100");
    scanf("%d",&c);
    
    avg=(a+b+c)/3;
    
    if (avg>40)
        printf("The student has passed the average");
    
    else 
        printf("The student has failed");
        
    if(a && b && c>33)
        printf("the student has passed all subjects individually");
    
    else 
        printf("the student has failed");
        
    return 0;
}