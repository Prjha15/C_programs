#include<stdio.h>
    struct car{
        char *engine;
        int seating_cap;
    }Thar,Bolero;
    int main(){
        Thar.engine="2.2L mHawk Diesel Engine";
        Bolero.engine="1.5L 3-Cylinder mHawk Diesel Engine";
        Thar.seating_cap=4;
        Bolero.seating_cap=7;
        printf("%s\n",Thar.engine);
        printf("%d\n",Thar.seating_cap);
    return 0;
}