<<<<<<< HEAD
#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int x;
    printf("Enter x:"); 
    scanf("%d",&x);
    int triplet=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++)
            if(arr[i]+arr[j]+arr[k]==x) {
             triplet++;
             printf("(%d,%d,%d)  ",arr[i],arr[j],arr[k]);
            }
        }
    }
    printf("no of triplets :%2d\n",triplet);
    return 0;
}
=======
#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int x;
    printf("Enter x:"); 
    scanf("%d",&x);
    int triplet=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++)
            if(arr[i]+arr[j]+arr[k]==x) {
             triplet++;
             printf("(%d,%d,%d)  ",arr[i],arr[j],arr[k]);
            }
        }
    }
    printf("no of triplets :%2d\n",triplet);
    return 0;
}
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
