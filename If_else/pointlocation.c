//Ques:-Given a point (x,y),Write a program to find out if it lies on the x-axis,y-axis or at the origin,viz(0,0).
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates :");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("The point is on origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    if(y==0){
        printf("Lies on x-axis");
    }
    else{
        printf("The point does not lies on x or y-axis");
    }
    
    return 0;
}