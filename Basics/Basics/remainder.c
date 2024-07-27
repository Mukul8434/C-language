//Ques:-Take two integers input,a and b:a>b,and find the remainder when a is divided by b.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the first number :");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :");
    scanf("%d",&b);
    int q=a/b;
    int r;
    r=a-(b*q);
    printf("The remainder is :%d",r);

    return 0;
}