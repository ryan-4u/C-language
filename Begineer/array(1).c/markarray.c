<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[10];
    int i;
    for(i=0;i<10;i++){
        printf("enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    printf("\n");
    for(i =0;i<10;i++){
    if(arr[i]<35)
    printf("%d\n",i);
    } 
     return 0;
=======
#include<stdio.h>
int main(){
    int arr[10];
    int i;
    for(i=0;i<10;i++){
        printf("enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    printf("\n");
    for(i =0;i<10;i++){
    if(arr[i]<35)
    printf("%d\n",i);
    } 
     return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}