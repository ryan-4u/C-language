<<<<<<< HEAD
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter no of rows/columns: ",n);
    scanf("%d",&n);
    int arr[n][n];
    for( i=0;i<n;i++){
        for ( j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }   
    printf("wave matrix:\n");
    for(int j=0;j<n;j++){
        if(j%2==0){
        for (int i=n-1;i>=0;i--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        }
        else{
        for(i=0;i<n;i++){
            printf("%d ",arr[i][j]);
        }
         printf("\n");
        }
      }
    return 0;
=======
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter no of rows/columns: ",n);
    scanf("%d",&n);
    int arr[n][n];
    for( i=0;i<n;i++){
        for ( j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }   
    printf("wave matrix:\n");
    for(int j=0;j<n;j++){
        if(j%2==0){
        for (int i=n-1;i>=0;i--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        }
        else{
        for(i=0;i<n;i++){
            printf("%d ",arr[i][j]);
        }
         printf("\n");
        }
      }
    return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}