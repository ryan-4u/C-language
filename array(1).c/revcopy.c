#include<stdio.h>
void reverse(int arr[], int si,int ei){
    int i=si,j=ei;
    while(i<j){
    
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
reverse(arr,2,4);
for(int i=0;i<5;i++){
    printf("%d  ",arr[i]);
}
return 0;
}
