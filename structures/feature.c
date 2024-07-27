#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon a,b;
    strcpy(a.name,"charizard");
    a.hp=100;
    a.attack=90;
    a.tier='A';
    a.speed=60;

    b=a;// deep copy

    b.attack=200;
   

    printf("%d",b.attack);
    return 0;
}