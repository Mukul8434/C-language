#include<stdio.h>
void Zigzag(int n){
    if(n==0) return;
    printf("%d ",n);
    Zigzag(n-1);
    printf("%d ",n);
    Zigzag(n-1);
    printf("%d ",n);
    return;
}

int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    Zigzag(n);

    return 0;
}