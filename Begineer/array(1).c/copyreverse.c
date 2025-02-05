<<<<<<< HEAD
#include<stdio.h>
int main(){
    int i;
int arr[5]={0,1,2,3,4};
int brr[5];
for(i=0;i<5;i++){
brr[i]=arr[4-i];
}
for(i=0;i<5;i++){
    printf("%d  ",arr[i]);
}
printf("\n");
for(i=0;i<5;i++){
    printf("%d  ",brr[i]);
}
printf("\n");
return 0;
=======
#include<stdio.h>
int main(){
    int i;
int arr[5]={0,1,2,3,4};
int brr[5];
for(i=0;i<5;i++){
brr[i]=arr[4-i];
}
for(i=0;i<5;i++){
    printf("%d  ",arr[i]);
}
printf("\n");
for(i=0;i<5;i++){
    printf("%d  ",brr[i]);
}
printf("\n");
return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}