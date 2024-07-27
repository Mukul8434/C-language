//Ques:-Given an array containing elements from 1 to 100 except one element in this range is missing.find the missing element.
#include<stdio.h>
int main(){
    int arr[99];
    int sum=0;
    for(int i=0;i<=98;i++){
        sum=sum+arr[i];
    }
    int sum2=0;
    for(int i=0;i<=98;i++){
        sum2=(100*101)/2;
    }
    int result=sum2-sum;
    printf("%d",result);
    return 0;
}