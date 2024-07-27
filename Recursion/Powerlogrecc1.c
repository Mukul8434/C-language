//Ques:-Power function (Logarithmic)
#include<stdio.h>
int powerlog(int a,int b){
    if(b==1) return a;
    int x=powerlog(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main(){
    int a;
    printf("Enter the base :");
    scanf("%d",&a);
    int b;
    printf("Enter the power :");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}