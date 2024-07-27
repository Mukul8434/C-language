//Ques:-Find out the maximum element and minimum element in a 2D array and the index of the maximum element.
#include<stdio.h>
int main(){
    int arr[2][2]={{4,110},{2,94}};
    int max=-1;             // Maximum element we find.
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<arr[i][j]){
               max=arr[i][j];
            }
        }
    }
    printf("The maximum element is :%d ",max);

    printf("\n");
    int min=arr[0][0];     // Minimum element we find.
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("The minimum element is :%d ",min);
    return 0;
}