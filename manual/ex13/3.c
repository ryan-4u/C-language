 main() 
{
    int mat1[2][2], mat2[2][2], result[2][2];
    int i, j, k;
     
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
            result[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            for (k = 0; k < 2; k++) 
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nThe resulting product matrix is:\n");
    
       for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
