//Ques:-Count the number of elements in given array greater than the given numbers x.
#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,8,9};
    int x=4;
    int count=0;
    for(int i=0;i<=7;i++){       
        if(arr[i]>x){
            count++;
        }        
    }
    printf("%d ",count);
    return 0;
}