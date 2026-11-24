#include <stdio.h>

 int main() {
int arr[50],i,n,value,pos;
    printf("enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
  printf("enter the value");
  scanf("%d",&value);
  printf("enter the position ");
  scanf("%d",&pos);
  for(i=n;i>=pos;i--){
    arr[i]=arr[i-1];
  }
     arr[pos-1]=value;
     n++;




     
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
 }
