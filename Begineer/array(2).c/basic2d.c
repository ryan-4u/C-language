<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[2][3];//={{1,2,3},{4,5,6}};
    //   arr[0][0]=1;
    //   arr[0][1]=2;
    //   arr[0][2]=3;
    //   arr[1][0]=4;
    //   arr[1][1]=5;
    //   arr[1][2]=6;
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
return 0;
=======
#include<stdio.h>
int main(){
    int arr[2][3];//={{1,2,3},{4,5,6}};
    //   arr[0][0]=1;
    //   arr[0][1]=2;
    //   arr[0][2]=3;
    //   arr[1][0]=4;
    //   arr[1][1]=5;
    //   arr[1][2]=6;
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}