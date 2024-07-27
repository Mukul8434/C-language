#include<stdio.h>
#include<string.h>
int main(){
    char s1[12]="Raghav Garg";
    char s2[12];
    strcpy(s2,s1);
    s2[0]='M';
    printf("%s",s1);
    return 0;
}