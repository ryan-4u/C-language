#include<stdio.h>
long factorial(int); //Function declaration
int main()
{
int num;
long fact;
printf("Enter a number to find factorial: ");
scanf("%d", &num);
if(num<0)
printf("Factorial of negative no. is not defined. \n");
else
{
fact = factorial(num);
printf("%d!=%d \n", num, fact);
}
return 0;
}
//Function definition
long factorial(int num)
{
long f = 1;
while (num>0)
f = f*num--;
return(f);
}