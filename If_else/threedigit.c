//Ques:-Take positive integer input and tell if it is a three digit number or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the positive integer :");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("Its a three digit number");
    }
    else{
        printf("Its not a three digit number");
    }
    
    return 0;
}