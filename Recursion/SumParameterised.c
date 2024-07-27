//Ques:-Print  sum from 1 to n (parameterised)
#include<stdio.h>
void sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){   // by using Loop.
        s=s+i;  
    }
    printf("%d",s);
    return;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    sum(n);
    return 0;
}