//Ques:-Make a function which calculates 'a' raised to the power 'b' using recursion.
#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int recAns=a*power(a,b-1);
    return recAns;
}
int main(){
    int a;
    printf("Enter the base :");
    scanf("%d",&a);
    int b;
    printf("Enter the power :");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}