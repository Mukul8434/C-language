//Ques:-Swap 2 numbers without using a third variable.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
    
    return 0;
}