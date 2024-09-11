#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER THE VALUE OF n:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("enter the elements:");
        scanf("%d",&arr[i]);
    }
       int ISINCREASING=1;
       int ISDECREASING=1;
        for(i=0;i<n-1;i++){
              if (arr[i]>arr[i+1])
        ISINCREASING=0;
       if (arr[i]<arr[i+1])
      ISDECREASING=0;
        }
        if (ISINCREASING) {
        printf("ARRAY IS SORTED IN INCREASING ORDER\n");
    } else if (ISDECREASING) {
        printf("ARRAY IS SORTED IN DECREASING ORDER\n");
    } else {
        printf("ARRAY IS NOT SORTED\n");
    }
        
return 0;
}
