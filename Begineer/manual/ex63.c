#include<stdio.h>
 int     main()
 {
    int sub1, sub2, sub3, sub4, sub5;
    float total, avg;
    
    printf("Enter marks for 5 subjects (out of 100):\n");
    scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = total / 5;
    printf("Average Percentage: %.2f%\n", avg);

    if (avg >= 60 && avg <= 100) 
        printf("Result: First Division\n");
    if (avg >= 50 && avg < 60) 
        printf("Result: Second Division\n");
    if (avg >= 40 && avg < 50) 
        printf("Result: Third Division\n");
    if (avg < 40 && avg >= 0) 
        printf("Result: Fail\n");
    if (avg < 0 || avg > 100) 
        printf("Invalid marks entered.\n");
    return 0;
}
