/*Ques:-Given an array of integers numbers that is already sorted in non-decreasing order,find two numbers such that they add up to a specific target number.*/
//*2-Pointers ->'algorithms'.
#include<stdio.h>
#include<string.h>
int main(){
    int arr[]={1,2,3,4,5,8,9,10};
    int target=8;
    int i=0;
    int j=8;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("The two numbers = %d and %d",arr[i],arr[j]);
            break;
        }
        else if (arr[i]+arr[j]>target){
            j--;
        }
        else i++;
    }
    return 0;
}