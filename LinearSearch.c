#include <stdio.h>

int main() {
  int arr[] = {5, 3, 8, 2, 1};
    int n = 5;
    int i, j, temp,target,found=0;
    
    printf("enter the target element ");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(target == arr[i]){
            printf("target found at %d",i+1);
            found=1;
        }
        
    }
    if(found==0){
        printf("search element not found ");
    }
    
    
    return 0;
}
