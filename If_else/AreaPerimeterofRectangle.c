/*Ques:-Given the length and breadth of a rectangle,write a program to find whether the area of the rectangle is greater than its perimeter.*/
#include<stdio.h>
int main(){
    int l;
    printf("Enter the length of a rectangle :");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth of a rectangle :");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
    
    return 0;
}