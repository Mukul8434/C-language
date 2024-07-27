//Ques:-Calculate the product of all the elements in the given array.
#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int product=1;             //while product we put equal to 1.
    for(int i=0;i<=5;i++){
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}