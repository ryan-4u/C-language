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
    for(i=0;i<5;i++)
        pr =pr*arr[i];
        printf("\nProduct of all elements of array: %d\n",pr);
     return 0;
}