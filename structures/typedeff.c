#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        int noOfpages;
        float price;
    }book;
    
    book a;

     a.noOfpages=100;
     a.price=411.3;
     strcpy(a.name,"famus five");

     printf("%d\n",a.noOfpages);
     printf("%f\n",a.price);
     printf("%s\n",a.name);
     
    return 0;
}