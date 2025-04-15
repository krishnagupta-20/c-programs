//Lab 4 Question 5
#include<stdio.h>
#include<math.h>
int main(){
    int calls;
    float bill;
    printf("Enter the number of calls:\t");
    scanf("%d", &calls);

    switch(calls){
        case 1 ... 100:
            printf("Your bill is Rs. 200");
            break;
        
        case 101 ... 150:
            printf("Your bill is Rs. %f", ((calls-100)*.6)+200);
            break;
        
        case 151 ... 200:
        printf("Your bill is Rs. %f", ((calls-150)*.5)+230);
        break;

        case 201 ... 1000:
            printf("Your bill is Rs. %f", ((calls-200)*.4)+255);
            break;
    }
    return 0;
}