#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr){

while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}



}
struct node *reverse(struct node *head){
    struct node *prev=NULL,*p=head,*q=NULL;
    while(p!=NULL){
q=p->next;
p->next=prev;
prev=p;
p=q;
    }
    return prev;
}
struct node *concatenate(struct node *head1,struct node *head2){

    struct node *p=head1;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=head2;
    return head1;
}
struct node *merge(struct node *head1,struct node *head2){
    struct node p;
    struct node*q=&p;
    p.next=NULL;
  while(head1!=NULL && head2 !=NULL){
    if(head1->data <=head2->data){
        q->next=head1;
        head1=head1->next;
    }
    else{
        q->next=head2;
        head2=head2->next;
    }
    q=q->next;
  }
  if(head1!=NULL){
    q->next=head1;
  }
  else{
    q->next=head2;
  }
  return p.next;
}
struct node *createlist(){
struct node *head=NULL,*ptr=NULL,*newnode=NULL,*head1,*head2;
int i,n,value;
printf("enter the no.of nodes");
scanf("%d",&n);
for(i=0;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter node %d\n",i+1);
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
if(head==NULL){
    head=newnode;
    ptr=head;
}
else{
    ptr->next=newnode;
    ptr=newnode;
}
}
return head;}
int main(){

struct node *concathead,*mergesort,*head1,*head2,*head=NULL;

printf("first linked list: \n");
head1=createlist();

printf("second linked list: \n");
head2=createlist();
// printf("concatenated linked list :\n");
// concathead=concatenate(head1,head2);
// linkedlistTraversal(concathead);

printf("mergesort linked list :\n");
mergesort=merge(head1,head2);
linkedlistTraversal(mergesort);

// head=reverse(head);




    return 0;
}
