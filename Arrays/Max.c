//Ques:-Find the maximum value out of all the elements in the array.
#include<stdio.h>
int main(){
    int arr[5]={1,5,7,9,4};
    int max=-1;
     for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
     }
     printf("%d",max);
    return 0;
}