//Ques:-Write a program to store 10 at every index of a 2D with 5 rows and 5 columns.
#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}