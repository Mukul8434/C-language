//Ques:-Print the factorial of first 'n' numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        printf("The factorial is : %d\n",fact);
    }
    
    return 0;
}