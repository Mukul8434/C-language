//Ques:-Find the second largest elements in the given array.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=-1;
    int smax=arr[0];
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<=7;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}