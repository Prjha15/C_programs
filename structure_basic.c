#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[100];
        float price;
        int number_of_pages;
    };
    struct book a;
    a.name[50]="THEORY_OF_EVERYTHING";
    a.price=200.5;
    a.number_of_pages=220;
    strcpy(a.name,"THEORY OF EVERYTHING");
    printf("%s\n",a.name);
    printf("%f\n",a.price);
    printf("%d\n",a.number_of_pages);

    return 0;
}