<<<<<<< HEAD
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows: ",r);
    scanf("%d",&r);
    printf("Enter no of columns: ",c);
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
return 0;
=======
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows: ",r);
    scanf("%d",&r);
    printf("Enter no of columns: ",c);
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}