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
    printf("Transpose of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int temp;
         temp =arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]= temp;   
        }
    }
    for( i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      for(i=0;i<n;i++){
     int j=0;
     int k=n-1;
     while(j<k){
         int temp=arr[i][j];
         arr[i][j]=arr[i][k];
         arr[i][k]=temp;
         j++;
         k--;
     }



      }
      for(int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
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
    printf("Transpose of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int temp;
         temp =arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]= temp;   
        }
    }
    for( i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      for(i=0;i<n;i++){
     int j=0;
     int k=n-1;
     while(j<k){
         int temp=arr[i][j];
         arr[i][j]=arr[i][k];
         arr[i][k]=temp;
         j++;
         k--;
     }



      }
      for(int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
    return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}