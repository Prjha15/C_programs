#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node*ptr){
    int count=0;
    while(ptr!=NULL){
     ptr=ptr->next;
     count++;
    }
    printf("length of linked list is %d ",count);
}
int main(){
    struct node*head=malloc(sizeof(struct node));
    struct node*second=malloc(sizeof(struct node));;
    struct node*third=malloc(sizeof(struct node));;
    head->data=90;
    head->next=second;
    second->data=96;
    second->next=third;
    third->data=99;
    third->next=NULL;
    traversal(head);
    return 0;
}