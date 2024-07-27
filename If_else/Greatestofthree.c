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
    if(a>b && a>c){
        printf("A is greatest :%d",a);
    }
    if(b>c && b>a){
        printf("B is greatest :%d",b);
    }
    if(c>a && c>b){
        printf("C is greatest :%d",c);
    }
    
    return 0;
}