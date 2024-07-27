//Ques:-Take 3 number input and tell if they can be the sides of a triangle.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the first number :");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :");
    scanf("%d",&b);
    int c;
    printf("Enter the third number :");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }

    return 0;
}