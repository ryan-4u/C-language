#include<stdio.h>
int main(){
    int arr[5];
    int i,pr=1;
    for(i=0;i<5;i++){
        printf("enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
    printf("%d  ",arr[i]);
    }
   int min=arr[0];
    for(i=0;i<5;i++){
        if (min>arr[i])
            min=arr[i];
        }
        printf("\nThe min value element of array : %d\n",min);
        return 0;
}