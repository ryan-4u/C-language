#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
//method3
int combination(int n,int r){
    return  factorial(n)/(factorial(r)*factorial(n-r));
    
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    //method -1
    // int nfact=factorial(n);
    // int rfact=factorial(r);
    // int nrfact=factorial(n-r);

    // int ncr=nfact/(rfact*nrfact);
    // method-2
    // int ncr= factorial(n)/(factorial(r)*factorial(n-r));
    //method-3
    int ncr=combination(n,r);
    printf("ncr value is %d \n",ncr);
    return 0;
}