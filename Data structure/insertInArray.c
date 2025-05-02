#include<stdio.h>

int main(){
    int arr[10] = { 2,4,6,8,10 } ;
    int item = 7 ,k = 3 , n = 5;
    int i = 0 , j = n ;

    printf("The original array: ");
    for( i = 0 ; i< n ; i++){
        printf("%d ",arr[i]) ;
    }
    printf("\n") ;

    // adding an element 
    n = n + 1 ;              // adding extra space
    while( j >= k){         // shifting elements
        arr[j+1] = arr[j] ;
        j-- ;
    }
    arr[k] = item ;         // inseting that element

    printf("The original array after insertion: ");
    for( i = 0 ; i< n ; i++){
        printf("%d ",arr[i]) ;
    }
    printf("\n") ;
}