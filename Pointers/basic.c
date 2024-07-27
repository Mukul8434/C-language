#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int *ptr=&n;
    // int m;
    // printf("Enter the number :");
    // scanf("%d",&m);
    printf("%p\n",ptr);

    return 0;
}