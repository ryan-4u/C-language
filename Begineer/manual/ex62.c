#include<stdio.h>
int main()
 {
    int num;
        
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0) 
        printf("%d is positive\n\n", num);
    if(num < 0) 
        printf("%d is negative\n\n", num);
    if(num == 0) 
        printf("The number is zero\n");
    return 0;
}
