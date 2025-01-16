#include<stdio.h>
void greet(){
    printf("I love you \n");
    return;
}
int main(){
    int i=1;
    for (i=1;i<100;i++){
        greet();
    }
}