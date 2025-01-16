#include<stdio.h>
int main()
  {
 int a, b, temp;
    
    printf("\n\n\t\tEnter first number: ");
    scanf("\t\t%d", &a);
    printf("\t\tEnter second number: ");
    scanf("\t\t%d", &b);
    temp = a;
    a = b;
    b = temp;
     printf("\t\tAfter swapping:");
    printf("\n\t\tFirst number = %d", a);
    printf("\n\t\tSecond number = %d\n\n\n", b);
     

   return 0;
  }  