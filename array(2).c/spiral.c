#include<stdio.h>
int main(){
    int m ,n,i,j;
    printf("Enter no of rows: ");
    scanf("%d",&m);
    printf("Enter no of columns: ",n);
    scanf("%d",&n);
    int arr[m][n];
    for( i=0;i<n;i++){
        for ( j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }   
    printf("spiral matrix:\n");
     int minr=0;
     int maxr=m-1;
     int minc=0;
     int maxc=n-1;
     int tne =m*n;
     int count=0;
     while(count<tne){
       //min row
       for(j=minc;j<=maxc &&count<=tne ;j++)
       {
           printf("%d ",arr[minr][j]);
           count++;
       }
       minr++;
       //if(count<=tne) break;
       //max column
       for(i=minr;i<=maxr &&count<=tne ;i++)
       {
           printf("%d ",arr[i][maxc]);
           count++;
       }
        maxc--;
         //if(count<=tne) break;
       //max row[reverse]
       for(j=maxc;j>=minc &&count<=tne ;j--)
       {
           printf("%d ",arr[maxr][j]);
           count++;
       }
       maxr--;
        //if(count<=tne) break;
       //min column[reverse]
         for(i=maxr;i>=minr &&count<=tne ;i--)
       {
           printf("%d ",arr[i][minc]);
           count++;
       }
       minc++;
        //if(count<=tne) break;
     }
    return 0;
}