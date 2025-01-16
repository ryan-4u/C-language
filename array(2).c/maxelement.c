<<<<<<< HEAD
#include<stdio.h>

int main(){
    int arr[3][2]={{4,2},{1,3},{2,3}};
    int i,j,max,min;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int a,b,c,d;
    max=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         if(arr[i][j]>max){
         
         max =arr[i][j];
         }
        }
    }
    min=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         if(arr[i][j]<min){
    
         min =arr[i][j];
         }
        }
    }
    printf("the min element is %d with index[%d][%d] \n",min,a,b);
    printf("the max element is %d \n",max);
    return 0;
=======
#include<stdio.h>

int main(){
    int arr[3][2]={{4,2},{1,3},{2,3}};
    int i,j,max,min;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int a,b,c,d;
    max=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         if(arr[i][j]>max){
         
         max =arr[i][j];
         }
        }
    }
    min=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
         if(arr[i][j]<min){
    
         min =arr[i][j];
         }
        }
    }
    printf("the min element is %d with index[%d][%d] \n",min,a,b);
    printf("the max element is %d \n",max);
    return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}