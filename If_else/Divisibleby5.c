//Ques:-Take positive integer input and tell if it is divisible by 5 or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the positive integer :");
    scanf("%d",&n);
    if(n%5==0){
        printf("It is divisible by 5");
    }
    else{
        printf("It is not divisible by 5");
    }
    
    return 0;
}