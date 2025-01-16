#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int x;
    printf("Enter x:"); 
    scanf("%d",&x);
    int pair=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==x) {
             pair++;
             printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("no of pairs :%2d\n",pair);
    return 0;
}
