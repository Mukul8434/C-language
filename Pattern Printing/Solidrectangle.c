#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){     // outer loops -> no. of lines.
        for(int i=1;i<=n;i++){ // inner loops -> no. of stars in each line.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}