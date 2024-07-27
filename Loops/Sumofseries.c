//Ques:-Print the sum of this series:1-2+3-4+5-6......upto 'n'.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
       if(i%2!=0){
        sum=sum+i;
       }
       if(i%2==0){
        sum=sum-i;
       }
    }
    printf("%d",sum);
    return 0;
}