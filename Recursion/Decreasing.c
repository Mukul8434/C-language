#include<stdio.h>
void greeting(int n){
    // for(int i=1;i<=n;i++){
    //     printf("Good Morning\n");
    // }
    if(n==0){
        return;
    }
    printf("Good Morning\n");
    greeting(n-1);   // Function call recursion.
    return;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    greeting(n);

    return 0;
}