#include<stdio.h>
int main(){
    char arr[]="College wallah is best in online education";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}