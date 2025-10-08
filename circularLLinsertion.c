#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    
};
void linkedlistTraversal(struct node* head){
    struct node *ptr=head;
    do{
         printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
        
    

}
struct node *insertatone(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}
struct node *insertatlast(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;

     while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    ptr=head;

    return head;

}
struct node *deleteinitial(struct node *head){
    struct node *ptr=head;
    struct node *p=head->next;
    while(p->next !=head){
        p=p->next;
    }
    p->next=head->next;
    head->next=p;
    p=head;
    free(ptr);
    return head;
}
struct node *insertinbetween(struct node *head,int index,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
ptr->next=p->next;
p->next=ptr;
return head;

}//4
struct node *insertatanynode(struct node *head,struct node *prevnode,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}
int main(){
struct node *head;
struct node *first;
struct node *second;
struct node *third;
head=(struct node *)malloc(sizeof(struct node));
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
head->data=1;
head->next=first;
first->data=9;
first->next=second;

second->data=7;
second->next=third;
third->data=4;
third->next=head;
printf("before insertion in cll");
linkedlistTraversal(head);
printf("after insertion in cll \n");
// head=insertatone(head,63);
// head=insertatlast(head,80);
// head=insertinbetween(head,2,45);
// head=insertatanynode(head,first,56);
head=deleteinitial(head);
linkedlistTraversal(head);


return 0;







}
