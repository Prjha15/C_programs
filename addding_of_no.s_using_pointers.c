#include<stdio.h>
int main(){
int x,y;
printf("ENTER THE NUMBER");
scanf("%d",&x);
printf("ENTER THE NUMBER");
scanf("%d",&y);
int *p;
p=&x;
int *n;
n=&y;
int sum = *p + *n;
printf("%d",sum);
return 0;
}