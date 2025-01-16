#include<stdio.h>
int main(){
    int arr[5];
    int i,sum=0;
    for(i=0;i<5;i++){
        printf("enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
    printf("%d  ",arr[i]);
    }
    for(i=0;i<5;i++)
        sum =sum +arr[i];
        printf("\nSum of all elements of array: %d\n",sum);
     return 0;
}