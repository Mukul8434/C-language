/*Ques:-Given an array of marks of students,if the mark of any student is less than 35.print its roll number.[roll number here refers to the index of the array.]*/
#include<stdio.h>
int main(){
    int marks[5]={23,56,65,54,22};
    for(int i=0;i<=4;i++){
       if(marks[i]<35){
        printf("%d ",i);
       }
    }
    return 0;
}