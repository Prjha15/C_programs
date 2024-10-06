#include<stdio.h>
int main(){
    int days;
    printf("WHICH DAY IS TO BE PRINTED");
    scanf("%d",&days);
    switch(days){
        case 1:printf("THE DAY IS SUNDAY");
        break;
        case 2:printf("THE DAY IS MONDAY");
        break;
        case 3:printf("THE DAY IS TUESDAY");
        break;
        case 4:printf("THE DAY IS WEDNESDAY");
        break;
        case 5:printf("THE DAY IS THURSDAY");
        break;
        case 6:printf("THE DAY IS FRIDAY");
        break;
        case 7:printf("THE DAY IS SATURDAY");
    }
    return 0;
}