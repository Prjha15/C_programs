#include<stdio.h>
#include<string.h>
struct rectangle{
    int length;
    int breadth;
    int area;
}rectangle1;
int main(){
  struct rectangle *ptr1=&rectangle1;
  ptr1->length=7;
  ptr1->breadth=5;
  int area = ptr1->length * ptr1->breadth;
  printf("%d",area);
  return 0;
}