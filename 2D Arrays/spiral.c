//Ques:-Given an n*m matrix 'a', print all the elements of the matrix in spiral order.(Leetcode-54)
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int m;
    printf("Enter the number of column :");
    scanf("%d",&m);
    int a[n][m];
    printf("\nEnter all the elements :");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // spiral print 
    printf("\n");
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while(count<tne){
        // print the minimum row 
        for(int i=minc;i<=maxc;i++){
            printf("%d ",a[minr][i]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        // print the maximum column
        for(int j=minr;j<=maxr;j++){
            printf("%d ",a[j][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        // print maximum row
        for(int i=maxc;i>=minc;i--){
            printf("%d ",a[maxr][i]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        // print the minimum column
        for(int j=maxr;j>=minr;j--){
            printf("%d ",a[j][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return 0;
}