#include<stdio.h>
int main()
 {
    int a = 5, b = 10;
    void swap(int *, int *);
    printf(" Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf(" After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int *x, int *y) {
    int t;
    t = *x;  
    *x = *y;    
    *y = t;   
}
