#include<stdio.h>
int main(){
    int arr[2][3]={{2,3,4},{3,4,1}};
     int row1=0,row2=0;
    for(int i=0;i<1;i++){
        for (int j=0;j<3;j++)
        {
            row1 +=arr[i][j];
        }
      }
      for(int i=1;i<2;i++){
        for (int j=0;j<3;j++)
        {
            row2 +=arr[i][j];
        }
      }
    printf("\nsum of row1 is %d\n",row1);
    printf("\nsum of row2 is %d\n",row2);
return 0;
}