#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num , attempt  , guess;
    int upper = 10 ,lower = 0 ;
    int attempts = 3;
    srand(time(NULL));
    num = ( rand() % (upper - lower + 1)) + lower ;
    printf("\t\t**NOTE**"); 
    printf("\nRange of random number : 0 to 10\n");
    printf("You have a Total of 3 attempts..\n\n");
    
    for( attempt=1; attempt<= attempts;attempt++){
    printf("Your  attempt no %d :\n ",attempt);
    printf("Enter your guess : ");
    scanf("%d",&guess);
    if( guess > num) {
        printf("TOO HIGH !!\n");
    }
    else if(guess < num){
         printf("TOO LOW !!\n");
    }
    else{
         printf("YOU ARE CORRECT !!\n");
         break ;
    }
    printf("\n");
    }

    if(guess == num ){
         printf(" You have WON !!\n");
    }
    else {
        printf(" You have LOST !! \n ");
        printf("The Random No is %d\n",num);
    }
    return 0;
}