<<<<<<< HEAD
#include<stdio.h>
int main() 
{
    int i,j,k;
    int m ;
    printf("Enter row of first matrix:");
    scanf("%d",&m);
    int n ;
    printf("Enter column of first matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements for the first  matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
         printf("Enter element at position [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
        }
    }
    int p ;
    printf("Enter row of second matrix:");
    scanf("%d",&p);
    int q ;
    printf("Enter column of second matrix:");
    scanf("%d",&q);
    int brr[p][q];
    printf("\nEnter elements for the second matrix:\n");
     for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
         printf("Enter element at position [%d][%d]: ", i, j);
         scanf("%d", &brr[i][j]);
        }
    }
    if(n!=p){
        printf("matrix multiplication is not possible\n\n");
    }
    else{
    int result[m][q];
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            result[i][j] = 0;
            for(k=0;k<n;k++){
                result[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }

    printf("\nThe resulting product matrix is:\n");
    
       for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    }
    return 0; 
}
=======
#include<stdio.h>
int main() 
{
    int i,j,k;
    int m ;
    printf("Enter row of first matrix:");
    scanf("%d",&m);
    int n ;
    printf("Enter column of first matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements for the first  matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
         printf("Enter element at position [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
        }
    }
    int p ;
    printf("Enter row of second matrix:");
    scanf("%d",&p);
    int q ;
    printf("Enter column of second matrix:");
    scanf("%d",&q);
    int brr[p][q];
    printf("\nEnter elements for the second matrix:\n");
     for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
         printf("Enter element at position [%d][%d]: ", i, j);
         scanf("%d", &brr[i][j]);
        }
    }
    if(n!=p){
        printf("matrix multiplication is not possible\n\n");
    }
    else{
    int result[m][q];
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            result[i][j] = 0;
            for(k=0;k<n;k++){
                result[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }

    printf("\nThe resulting product matrix is:\n");
    
       for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    }
    return 0; 
}
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
