#include<stdio.h>
#include<string.h>
int main(){
char str[15];
puts("enter a string:");
gets(str);
puts("your string is:");
puts(str);
int size=0;
int k=0;
while(str[k] != '\0'){
    size++;
    k++;
}
printf("%d\n",size);
int i,j;
for(i=0,j=size-1; i<=j;i++,j--){
    char temp= str[i];
    str[i]=str[j];
    str[j]=temp;
}
puts(str);
return 0;
}