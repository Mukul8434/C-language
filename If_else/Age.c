//Ques:-If the ages of Ram,Shyam and Ajay are input through the keyboard,Write a program to determine the youngest of the three.
#include<stdio.h>
int main(){
    int p;
    printf("Enter the ages of Ram :");
    scanf("%d",&p);
    int q;
    printf("Enter the age of Shyam :");
    scanf("%d",&q);
    int r;
    printf("Enter the age of Ajay :");
    scanf("%d",&r);
    if(p<q && p<r){
        printf("%d :Ram is the youngest",p);
    }
    if(q<p && q<r){
        printf("%d :Shyam is the youngest",q);
    }
    if(r<p && r<q){
        printf("%d :Ajay is the youngest",r);
    }
    
    return 0;
}