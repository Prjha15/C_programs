#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof (int));
    if(ptr==NULL){
        printf("NO MEMORY AVAILABLE");
    }
    for(i=0;i<n;i++){
        printf("ENTER THE INTEGERS");
        scanf("%d",ptr+i);
    }
    ptr=(int *)realloc(ptr,2*n*sizeof(int));
    for(i=n;i<2*n;i++){
        printf("ENTER THE INTEGERS");
        scanf("%d",ptr+i);
    }
    for(int i=0;i<2*n;i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
    return 0;
}