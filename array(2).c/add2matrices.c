<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int brr[2][3]={{7,8,9},{10,11,12}};
    int crr[2][3];
    for( int i=0;i<2;i++){
        for( int j=0;j<3;j++){
            crr[i][j]=arr[i][j] + brr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
      }
return 0;
=======
#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int brr[2][3]={{7,8,9},{10,11,12}};
    int crr[2][3];
    for( int i=0;i<2;i++){
        for( int j=0;j<3;j++){
            crr[i][j]=arr[i][j] + brr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
      }
return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}