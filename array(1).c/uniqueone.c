<<<<<<< HEAD
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={10,11,12,10,12,13,11};
    for(int i=0;i<7;i++){
        bool flag =false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
             flag=true; 
            }
        }
        if(flag==false){
         printf("the unique element is : %d\n",arr[i]);
         break; 
        }
    }    
return 0;
=======
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={10,11,12,10,12,13,11};
    for(int i=0;i<7;i++){
        bool flag =false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
             flag=true; 
            }
        }
        if(flag==false){
         printf("the unique element is : %d\n",arr[i]);
         break; 
        }
    }    
return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}