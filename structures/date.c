/*Ques:-Create a structure 'date' that contains three members namely date,month and year. create 2 strucutre variables with different dates and now compare the two. if the dates are equal then display messages as "Equal"otherwise "Unequal".*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b;
    a.day=5;
    a.month=12;
    a.year=1999;

    b.day=19;
    b.month=01;
    b.year=2023;

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");

    return 0;
}