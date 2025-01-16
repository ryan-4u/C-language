#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int power;
    char tier;
}pokemon;
void fun(pokemon p){
    printf("%d\n",p.hp);
    return ;
}
int main(){
    pokemon Pikachu;
    Pikachu.hp=80;
    fun(Pikachu);
    return 0;
}
