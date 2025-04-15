#include<stdio.h>
int main(){
    int a;
    printf("Enter the marks: ");
    scanf("%d", &a);

    if(a>=9 && a<=10)
    printf("Grade: A\n");
    else if(a>=8 && a<9){
    printf("Grade: B\n");}
    else if(a>=7 && a<8){
    printf("Grade: C\n");}
    else if(a>=6 && a<7){
    printf("Grade: D\n");}
    else if(a>=5 && a<6){
    printf("Grade: E\n");}
    else if(a>=0 && a<5){
    printf("Grade: F\n");}
    else{
    printf("Invalid marks\n");}
    return 0;
}