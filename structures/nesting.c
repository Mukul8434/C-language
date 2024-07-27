// Nesting
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    mewtwo.normal.speed=180;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.tier='s';

    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.normal.hp);
    printf("%d\n",mewtwo.normal.attack);
    printf("%d\n",mewtwo.normal.speed);
    printf("%s\n",mewtwo.normal.name);
    printf("%c\n",mewtwo.normal.tier);

    return 0;
}