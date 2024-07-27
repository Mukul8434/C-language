//Ques:-Take positive integer input and tell if it is even or odd.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the positive integer :");
    scanf("%d",&n);
    if(n%2==0){
        printf("It is an even number ");
    }
    else{
        printf("It is odd number ");
    }
    
    return 0;
}