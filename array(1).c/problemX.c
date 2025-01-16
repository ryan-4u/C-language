<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[6]={10,11,12,13,14,15};
    int i;
     for(i=0;i<6;i++)
    printf("%d ",arr[i]);
    for(i=0;i<6;i++){
        if(i%2==0){
        arr[i]=arr[i]+10;
        }
        else{
        arr[i]=arr[i]*2;   
        }
    }
    printf("\n");
         for(i=0;i<6;i++){
    printf("%d ",arr[i]);
}
printf("\n");
    return 0;
=======
#include<stdio.h>
int main(){
    int arr[6]={10,11,12,13,14,15};
    int i;
     for(i=0;i<6;i++)
    printf("%d ",arr[i]);
    for(i=0;i<6;i++){
        if(i%2==0){
        arr[i]=arr[i]+10;
        }
        else{
        arr[i]=arr[i]*2;   
        }
    }
    printf("\n");
         for(i=0;i<6;i++){
    printf("%d ",arr[i]);
}
printf("\n");
    return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}