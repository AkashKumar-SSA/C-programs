#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void *createnode(struct node *head,int data){
    struct node *new=(struct node *)malloc(sizeof(node));
    new->data=data;
    new->next=NULL;
    head->next=new;
    head = head->next;
    return head;
}
void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void main(){
    struct node *head=(struct node *)malloc(sizeof(node));
    struct node *first=head;
    head=createnode(head,1);
    head=createnode(head,2);
    head=createnode(head,3);
    head=createnode(head,4);
    head=createnode(head,5);
    head=createnode(head,6);
    head=createnode(head,7);
    head=createnode(head,8);
    head=createnode(head,9);
    head=createnode(head,10);
    head=createnode(head,11);
    head=createnode(head,12);
    head=createnode(head,13);
    head=createnode(head,14);
    head=createnode(head,15);
    head=createnode(head,16);   

    traverse(first);
}