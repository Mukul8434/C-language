//Ques:-Write a function to calculate the n'th fibonacci number using recursion.
#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    // int x=fibo(n);
    printf("%d",fibo(n));
    return 0;
}