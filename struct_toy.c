#include<stdio.h>
#include<string.h>
struct toybox{
    char name[50];
    int quantities;
}toy1,toy2;
int main(){
   struct toybox *ptr1=&toy1;
   struct toybox *ptr2=&toy2;
    strcpy(toy1.name,"ANABELLE");
    toy1.quantities=12;
    strcpy(toy2.name,"ROBERT");
    toy2.quantities=10;
    printf("%d",ptr1->quantities);
    return 0;
}