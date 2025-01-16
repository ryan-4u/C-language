#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        int age;
        int n_t;
        float avgruns;
        char name[15];
    }crick;

    crick arr[20];
    for(int i=0;i<20;i++){
    arr[0].hp=60;
    arr[0].tier='A';
    arr[0].power=60;
    strcpy(arr[0].name,"Pikachu");
    }
    arr[1].hp=90;
    arr[1].tier='A';
    arr[1].power=120;
    strcpy(arr[1].name,"Charizard");

    arr[2].hp=200;
    arr[2].tier='S';
    arr[2].power=160;
    strcpy(arr[2].name,"Mewtwo");
    for(int i=0 ;i<3 ; i++)
    printf("hp=%d\n power=%d\n tier=%c\n name=%s\n",arr[i].hp,arr[i].power,arr[i].tier,arr[i].name);
   
return 0;