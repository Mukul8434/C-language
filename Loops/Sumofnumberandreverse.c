//Ques:-Write a program to print the sum of given number and its reverse.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int r=0;
      int sum=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);  
        n=n/10;
    }

    printf("%d",sum);

    return 0;
}