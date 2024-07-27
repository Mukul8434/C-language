//Ques:-If an array arr contains n elements, then check if the given array is a palindrome or not.
#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=4;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[5]={1,2,3,2,1};
    reverse(arr);
    for(int i=0;i<=4;i++){
        for(int j=4;j>=0;j--){
            if(i==j && i!=j){
                break;
                printf("%d ",arr[i]);

            }
        }
        printf("%d ",arr[i]);
    }
    return 0;
}