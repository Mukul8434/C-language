//Ques:-Create a structure type'book' with name,price,and number of pages as its attributes.

#include<stdio.h>
#include<string.h>
int main(){
struct book{
    char name[50];
    float price;
    int noOfpages;
}a,b,c;
    a.noOfpages=100;
    a.price=411.3;
    strcpy(a.name,"Secret seven");

    printf("The noOfpages are=%d\n",a.noOfpages);
    printf("Price of book is=%f\n",a.price);
    printf("The name of book is=%s\n",a.name);

    printf("\n");

    b.noOfpages=200;
    b.price=454.6;
    strcpy(b.name,"Harry potter");

    printf("The noOfpages are=%d\n",b.noOfpages);
    printf("Price of book is=%f\n",b.price);
    printf("The name of book is=%s\n",b.name);    

    printf("\n");

    c.noOfpages=90;
    c.price=54;
    strcpy(c.name,"Lord");

    printf("The noOfpages are=%d\n",c.noOfpages);
    printf("Price of book is=%f\n",c.price);
    printf("The name of book is=%s\n",c.name);

    printf("\n");

    return 0;
}
