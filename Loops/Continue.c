//Ques:-WAP to print odd number from 1 to 100 except 5.
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
           continue;
        }
         printf("%d ",i);
    }
    
    return 0;
}