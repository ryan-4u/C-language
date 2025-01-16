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
       //method 1
    //  int max=arr[0];
    //  for(i=0;i<5;i++){
    //     if (max<arr[i])
    //         max=arr[i];
    //     }
    //   int smax=arr[0];
    //  for(i=0;i<5;i++){
    //     if(arr[i]!=max && smax<arr[i])
    //         smax=arr[i];
    //     }
    //     Method II
     int max=arr[0],smax=arr[0];
      for(i=0;i<5;i++){
         if (max<arr[i]){
             smax=max;
            max=arr[i];
         }
         else if(smax<arr[i] && max!=arr[i])
         smax=arr[i];
         }
        printf("\nThe  second max value element of array : %d\n",smax);
        return 0;
}