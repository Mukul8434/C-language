/*Ques:-A record contains name of cricketer,his age,number of test matches that he has played and the average runs that he has scored in each test match.create an array of structure to hold record of 3 such cricketer and then write a program to read these records.*/
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfmatches;
        float average;
    }cricketer;

    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
    }

    for(int i=0;i<3;i++){
        printf("Name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Number of matches played : %d\n",arr[i].noOfmatches);
        printf("Average : %f\n\n",arr[i].average);
    }
    return 0;
}