#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int power;
        char tier;
        char name[15];
    }pokemon;
typedef struct legendarypokemon{
    pokemon basic;
    char specability[10];
}legend;
legend a;
strcpy(a.specability,"Pressure");
a.basic.hp=170;
a.basic.power=200;
printf("%s\n%d\n",a.specability,a.basic.hp);
return 0;
}