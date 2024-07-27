/*Ques:-If cost price and selling price of an item is input through the keyboard,Write a program to determine whether the seller has made profit or loss. Also determine how much profit he made or loss he incurred.*/
#include<stdio.h>
int main(){
    int cp;
    printf("Enter the cost price of an item :");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price of an item :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No profit no Loss");
    }
    
    return 0;
}