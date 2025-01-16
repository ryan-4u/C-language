<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++){
        for (int j=0;j<2;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf(" Rno  Marks\n");
    for(int i=0;i<4;i++){
        for (int j=0;j<2;j++)
        {
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
      }
return 0;
=======
#include<stdio.h>
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++){
        for (int j=0;j<2;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf(" Rno  Marks\n");
    for(int i=0;i<4;i++){
        for (int j=0;j<2;j++)
        {
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
      }
return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}