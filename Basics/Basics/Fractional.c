//Ques:-Take integer as input and print half of the number.
//Ques:-Take float input and print the fractional part of the real number.
#include<stdio.h>
int main(){
    float x;
    printf("Enter the value of x :");
    scanf("%f",&x);
    int y;
    y=x;
    printf("%d\n",y);
    float z=x-y;
    printf("%f",z);
    
    return 0;
}