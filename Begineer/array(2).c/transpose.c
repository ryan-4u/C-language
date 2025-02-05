<<<<<<< HEAD
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter no of rows: ",r);
    scanf("%d",&r);
    printf("Enter no of columns: ",c);
    scanf("%d",&c);
    int arr[r][c];
    for( i=0;i<r;i++){
        for ( j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
=======
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter no of rows: ",r);
    scanf("%d",&r);
    printf("Enter no of columns: ",c);
    scanf("%d",&c);
    int arr[r][c];
    for( i=0;i<r;i++){
        for ( j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}