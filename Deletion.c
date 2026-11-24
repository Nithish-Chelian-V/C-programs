#include <stdio.h>

 int main() {
int arr[50],i,n,value,pos;
    printf("enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
  printf("enter the position you want to delete");
  scanf("%d",&pos);
  for(i=pos-1;i<n-1;i++){
      arr[i]=arr[i+1];
  }
     n--;  
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
 }
