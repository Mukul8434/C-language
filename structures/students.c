/*Ques:-Create a structure to specify data on students with these attributes:Roll number,Name,Department,Course,Year of joining.Create 2 structur vriables. Now, create a function to check if two students have the same department.Pass the two structure variable as input to this function.*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct students{
        int roll;
        char name[20];
        char department[20];
        char course[30];
        int yearOfjoining;
    }student;

void check(student s1,student s2){
    if(s1.department==s2.department)
    printf("Yes,they are the same department");
    else printf("They are not same department");
    return;
}
int main(){
    student s1,s2; 
    s1.roll=01;
    strcpy(s1.name,"Mukul");
    strcpy(s1.department,"Engineering");
    strcpy(s1.course,"CSE");
    s1.yearOfjoining=2024;

    s2.roll=02;
    strcpy(s2.name,"Ankul");
    strcpy(s2.department,"Engineering");
    strcpy(s2.course,"Electrical");
    s2.yearOfjoining=2025;

    check(s1,s2);
   
    return 0;
}