<<<<<<< HEAD
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
     for(int i=2;i<=n;i++){
        nfact=nfact*i;
    }
     for(int i=2;i<=r;i++){
        rfact=rfact*i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact);
    printf("ncr value is %d \n",ncr);
    return 0;

=======
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
     for(int i=2;i<=n;i++){
        nfact=nfact*i;
    }
     for(int i=2;i<=r;i++){
        rfact=rfact*i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact);
    printf("ncr value is %d \n",ncr);
    return 0;

>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}