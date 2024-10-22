#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node*ptr){
    while (ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
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