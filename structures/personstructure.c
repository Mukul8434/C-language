/*Ques:-Create a structure type 'person' with name,salary and ageas its attributes.Declare and initialize 2 variables for this.print the name of first person and age of the other.*/
#include<stdio.h>
#include<string.h>
struct person{
    char name[50];
    int salary;
    int age;
};
int main(){
    struct person a;
    strcpy(a.name,"Abhishek");
    a.salary=45000;
    a.age=27;

    struct person b;
    strcpy(b.name,"Mukul");
    b.salary=54000;
    b.age=30;    

    printf("The name of 1st person = %s\n",a.name);
    printf("The age of 2nd person = %d\n",b.age);
    return 0;
}