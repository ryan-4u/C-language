#include<stdio.h>
int main()
{
int rollno;
float sub1, sub2, sub3, sub4, sum, score;
printf ("\n Enter Roll Number: ");
scanf("%d", &rollno);
printf (" Enter Marks in 4 Subjects:");
scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4);
sum=sub1+sub2+sub3+sub4;
score = (sum/400)*100;
printf("\n Roll Number: %d", rollno);
printf("\n Percentage score secured: %2.2f%c\n\n\n", score,'%');
return 0;
}