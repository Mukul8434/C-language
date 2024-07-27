//Ques:Take 3 positive integers input and print the greatest of them.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    int c;
    printf("Enter the 3rd number :");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest",a);
        }
        else{
            printf("%d is greatest",c);
        }
    }
    else{
        if(b>c){
            printf("%d is greatest",b);
        }
        else{
            printf("%d is greatest",c);
        }
    }
    
    return 0;
}