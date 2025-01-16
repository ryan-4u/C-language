#include<stdio.h>
void fun(int x[]){
    x[0]=8;
    x[3]=9;
}
int main(){
    int arr[5]={1,2,3,4,5};
     for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    fun(arr);
    printf("\n");
     for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    // its call by reference without the help of pointers
return 0;
}