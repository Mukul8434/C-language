//Ques:-Find the total number of pairs in the array whose sum is equal to the given value of x.
#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totlapairs=0;
    int x=12;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
                totlapairs++;
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totlapairs);
    return 0;
}