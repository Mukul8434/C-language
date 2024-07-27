#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int m;
    printf("Enter the number of column :");
    scanf("%d",&m);
    int a[n][m];
    printf("\nEnter elements of 1st matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // wave print
    for(int i=0;i<n;i++){
        if(i%2==0){
             for(int j=0;j<m;j++){
                 printf("%d ",a[i][j]);
             }
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
        }   
        printf("\n");
    }
    return 0;
}