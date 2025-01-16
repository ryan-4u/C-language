#include<stdio.h>
#include<stdbool.h>
int main(){
 int i,n,x;
 printf("Enter n : ");
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++){
        printf("enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
 }
 printf("\n");
 printf("Enter x : ");
 scanf("%d",&x);
 printf("\n");
 int idx;
 bool flag=false;
 for(i=0;i<n;i++){
    if(x==arr[i]){
     flag =true;
        idx=i;
        break;
    }
 }
 if(flag =false)
      printf("Element is not present in the array\n");
 else if( flag =true)
      printf("Element is present in array at index: %d\n",idx);     
 
 return 0;
}