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
     int sum=0;
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
      }
    printf("\nsum of array is %d\n",sum)  ;
return 0;
}