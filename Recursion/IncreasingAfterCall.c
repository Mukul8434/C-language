//Ques:-Print 1 to n. (After recursive call)
#include<stdio.h>
void increasing(int n){
    if(n==0) return; // base case
    increasing(n-1); // call
    printf("%d\n",n);// code
   
    return;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    increasing(n);
    return 0;
}