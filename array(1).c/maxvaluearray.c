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
   int max=arr[0];
    for(i=0;i<5;i++){
        if (max<arr[i])
            max=arr[i];
        }
        printf("\nThe max value element of array : %d\n",max);
        return 0;
}
        
