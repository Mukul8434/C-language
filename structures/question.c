//Ques:-Create a structure'person' having attributes as age and weight.Access its structure variables using pointers.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct person{
 int age;
 float weight;
 }person;

    int main(){
    person p1;
    p1.age=23;
    p1.weight=65.57;

    person*x=&p1;
    printf("%d\n",(*x).age);
    printf("%f\n",(*x).weight);
    
    return 0;
}