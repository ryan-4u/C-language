#include <stdio.h>
void main() 
{
    int arr[]={5,10,15,20,25};
     int n = sizeof(arr) / sizeof(arr[0]);
    for ( int i=0; i<n; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return ;
}
