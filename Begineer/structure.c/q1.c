#include <stdio.h>
#include <string.h>
int main(){
    struct person{
        int age;
        float salary;
        char name[15];
    }A ,B ;
     A.age =25;
    A.salary =34000.90;
    strcpy(A.name,"Rakesh");
    B.age =24;
    B.salary =78000.90;
    strcpy(B.name,"Mukesh");
    printf("%s\n%d",A.name,B.age);
    return 0;
    
}