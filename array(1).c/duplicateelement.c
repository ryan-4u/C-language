#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,3,5,6,7,6,9};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
             printf("duplicate element is :%d\n",arr[i]);   
             break; 
        } 
        }
    }
return 0;
}
