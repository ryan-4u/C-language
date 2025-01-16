#include<stdio.h>
void reverse(int arr[]){
    //whilw lopp
    int i=0,j=4;
    while(i<j){
        // for loop
        // for(int i=0,j=4;i<j;i++,j--)
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
         i++;
        j--;
    }
return;
}
int main(){
int arr[5]={0,1,2,3,4};
reverse(arr);
for(int i=0;i<5;i++){
    printf("%d  ",arr[i]);
}
return 0;
}


