/*Ques:-Write a program to print out all Armstrong numbers between 1 and 500.If sum of cubes of each digit of the number is equal to the number itself,then the number is called an Armstrong number.For example,153=(1*1*1)+(5*5*5)+(3*3*3).*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=0;
    int lastdigit=0;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("The sum is : %d",sum);
    return 0;
}