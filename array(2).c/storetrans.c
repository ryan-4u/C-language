#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter no of rows: ",r);
    scanf("%d",&r);
    printf("Enter no of columns: ",c);
    scanf("%d",&c);
    int arr[r][c];
    int brr[c][r];
    for( i=0;i<r;i++){
        for ( j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }

    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    printf("Transpose of the matrix:\n");
    for( i=0;i<c;i++){
        for ( j=0;j<r;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}