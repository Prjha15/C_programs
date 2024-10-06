#include<stdio.h>
int main(){
    int month;
    int year;
    printf("DAYS OF WHICH MONTH IS TO BE PRINTED");
    scanf("%d",&month);
    if(month>12){
        printf("INVALID");
    }
    switch(month){
        case 1:printf("THE DAYS IN JANUARY IS 31");
        break;
        case 2: printf("THE DAYS IN FEBRUARY IS 28 IF THE YEAR IS NOT LEAP");
        break;
        case 3:printf("THE DAYS IN MARCH IS 31");
        break;
        case 4:printf("THE DAYS IS APRIL IS 30");
        break;
        case 5:printf("THE DAYS IS MAY IS 31");
        break;
        case 6:printf("THE DAYS IS JUNE IS 30");
        break;
        case 7:printf("THE DAYS IS JULY IS 31");
        break;
        case 8:printf("THE DAYS IN AUGUST IS 31");
        break;
        case 9:printf("THE DAYS IN SEPTEMBER IS 30");
        break;
        case 10:printf("THE DAYS IN OCTOBER IS 31");
        break;
        case 11:printf("THE DAYS IS NOVEMBER IS 30");
        break;
        case 12:printf("THE DAYS IS DECEMBER IS 31");
        break;
    }
    return 0;
}