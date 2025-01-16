#include<stdio.h>
int main(){
    int arr[10]={4,6,2,9,1,2,3,7,5,0};
    int osum=0,esum=0;
    for(int i=0;i<10;i++){
      if(i%2==0)
      esum=esum+arr[i];
      else
      osum=osum+arr[i];
    }
    printf("sum of values at odd indices : %d\n",osum);
    printf("sum of values at even indices : %d\n",esum);
    int ans;
    ans=osum-esum;
    printf("The required ans is :%d\n",ans);
    return 0;
}