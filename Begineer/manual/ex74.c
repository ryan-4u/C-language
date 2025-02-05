#include<stdio.h>
int main() 
{
    float bs, da, hra, gs;
     
    printf("Enter the basic salary: ");
    scanf("%f", &bs);
    if (bs >= 5000) 
    {
        da = 0.15 * bs;
        hra = 0.10 * bs;
    } 
    else 
    {
        da = 0.10 * bs;
        hra = 0.05 * bs;
    }
    gs = bs + da + hra;
    printf("Gross Salary: %.2f\n", gs);
    return 0;
}
