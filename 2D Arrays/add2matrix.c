//Ques:-Write a program to add two matrices.
#include<stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int add[2][2];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",add[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}