#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter a string");
    gets(str);
    puts("The size of is :");
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}