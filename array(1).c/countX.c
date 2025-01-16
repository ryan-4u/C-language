<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[10]={0,10,20,30,40,50,60,70,80,90};
    int x;
    printf("Enter x:"); 
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]>x) count++;
    }
    printf("%2d\n",count);
    return 0;
}
=======
#include<stdio.h>
int main(){
    int arr[10]={0,10,20,30,40,50,60,70,80,90};
    int x;
    printf("Enter x:"); 
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]>x) count++;
    }
    printf("%2d\n",count);
    return 0;
}
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
