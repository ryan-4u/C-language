<<<<<<< HEAD
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}

int combination(int n,int r){
    return  factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        } 
    printf("\n");
    }
        return 0;
=======
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}

int combination(int n,int r){
    return  factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        } 
    printf("\n");
    }
        return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}