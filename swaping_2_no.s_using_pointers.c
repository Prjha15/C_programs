#include<stdio.h>
int main(){
    int x,y,temp;
    printf("ENTER THE VALUE OF x");
    scanf("%d",&x);
    printf("ENTER THE VALUE OF y");
    scanf("%d",&y);
    int *ptr1=&x;
    int *ptr2=&y;
    int *ptr3=&temp;
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    printf("x after swapping is %d\n",*ptr1);
    printf("y after swapping is %d\n",*ptr2);
    return 0;
}