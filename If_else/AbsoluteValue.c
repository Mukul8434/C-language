//Ques:-Take integer input and print the absolute value of that integer.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
    }
    printf("The absolute value is : %d",n);

    return 0;
}