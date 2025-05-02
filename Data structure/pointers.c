#include<stdio.h>

int main(){
    int a = 5 ;
    int *b = &a ;

    printf("value of a : %d\n",a) ;
    // * is dereference operator
    printf("value of a : %d\n",*(&a) ) ; //defererencing address of a
    printf("value of a : %d\n",*b) ;
    printf("address of a : %d\n",&a) ;
    printf("value of b == address of a : %d\n",b) ;
    printf("address of b : %d\n",&b) ;
    return 0 ;
}