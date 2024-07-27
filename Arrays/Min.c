//Ques:-Find the minimum value out of all the elements in the given array.
#include<stdio.h>
int main(){
    int arr[6]={4,7,5,1,9,34};
    int min=arr[0];
    for(int i=0;i<=5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}