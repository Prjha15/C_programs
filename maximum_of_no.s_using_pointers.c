#include<stdio.h>
int main()
{
    int x,y;
    printf("ENTER THE NUMBER");
    scanf("%d",&x);
    printf("ENTER THE NUMBER");
    scanf("%d",&y);
    int *p;
    p=&x;
    int *n;
    n=&y;
    if(*p>*n) {
        printf("x IS MAXIMUM");
    }
        else if(*p==*n) {
            printf("x and y IS EQUAL");
        }
         else {
            printf("y IS MAXIMUM");
        }

    return 0;
}