//Ques:-Write a program to rotate a matrix 90 degree clockwise.(Leetcode-48)
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int m;
    printf("Enter the number of column :");
    scanf("%d",&m);
    printf("Enter all the elements\n");
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}