/*Ques:-Rotate the given array'a' by k steps,where k is non-negative.
NOTE:-k can be greater than n as well where n is the size of array a.*/
#include<stdio.h>
void reverse(int arr[],int a,int b){  // reversing part of array
    for(int i=a,j=b;i<j;i++,j--){
        // arr[i] and arr[j];
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,0,6);
    // index 1-4 reverse
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}