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
int i,n,k;
printf("Enter n : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
        printf("enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
}
printf("Enter k : ");
scanf("%d",&k);
if(k>n){
k=k%n;
}
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);
for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
return 0;
}
