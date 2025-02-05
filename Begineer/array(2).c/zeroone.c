<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[4][3]={{0,0,0},{1,0,1},{1,1,1},{1,0,0}};
     int maxcount=0;
     int maxindex=0;
    for(int i=0;i<4;i++)
    {
      int count =0;
        for (int j=0;j<3;j++)
     {
          if (arr[i][j]==1)
          {
              count++;
          }
          if (maxcount<count)
         {
           maxcount=count;
           maxindex=i;
         }
      }
      printf("\n");
    }
    printf("no of max 1 is %d\n",maxcount); 
     printf("row with max 1 is %d\n",maxindex);
 return 0;
=======
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[4][3]={{0,0,0},{1,0,1},{1,1,1},{1,0,0}};
     int maxcount=0;
     int maxindex=0;
    for(int i=0;i<4;i++)
    {
      int count =0;
        for (int j=0;j<3;j++)
     {
          if (arr[i][j]==1)
          {
              count++;
          }
          if (maxcount<count)
         {
           maxcount=count;
           maxindex=i;
         }
      }
      printf("\n");
    }
    printf("no of max 1 is %d\n",maxcount); 
     printf("row with max 1 is %d\n",maxindex);
 return 0;
>>>>>>> 3d47cd6e02e5d805c305c245734aa3903e9099f1
}