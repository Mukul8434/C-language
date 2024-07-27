/*Ques:-Two numbers are entered through the keyboard.Write a program to find the value of one number raised to the power of another.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the first number :");
    scanf("%d",&n);
    int m;
    printf("Enter the second number :");
    scanf("%d",&m);
    int power=1;
    for(int i=1;i<=m;i++){
        power=power*n;
    }
    printf("%d raised to the power %d is :%d",n,m,power);
    
    return 0;
}