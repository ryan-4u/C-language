#include<stdio.h>
int   main() 
{
    int mat1[2][2], mat2[2][2], diff[2][2];
    int i, j;
     
    printf("Enter elements for the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
           printf("Enter element at position [%d][%d]: ", i, j);  
           scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements for the second 2x2 matrix:\n");
    
for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
          printf("Enter element at position [%d][%d]: ", i, j);
          scanf("%d", &mat2[i][j]);
        }
    }
      for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\nThe resulting difference matrix is:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
