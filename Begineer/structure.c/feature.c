#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int power;
        char tier;
        char name[15];
    }pokemon;

    pokemon a,b,c;
    a.hp=70;
    a.power=100;
    a.tier='A';
    strcpy(a.name,"Blastoie");
//mehod 1 to copy
    b.hp =a.hp;
    b.power=a.power;
    b.tier=a.tier;
    strcpy(b.name,a.name);
    //mwehod 2
c=a;
strcpy(c.name,"venasaur");//we can change specific attributes
// and it would not change from where we copies, a in this case
 printf("hp=%d\n power=%d\n tier=%c\n name=%s\n",b.hp,b.power,b.tier,b.name);
  printf("hp=%d\n power=%d\n tier=%c\n name=%s\n",c.hp,c.power,c.tier,c.name); 
  printf("hp=%d\n power=%d\n tier=%c\n name=%s\n",a.hp,a.power,a.tier,a.name);
 return 0;
}
   