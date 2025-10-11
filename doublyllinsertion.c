#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void lltraverse(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}//1 case
struct node *initialinsertion(struct node *head,int data){
   struct node *newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->prev=NULL;
   newnode->next=head;
   if(head!=NULL){
    head->prev=newnode;
   }
   head=newnode;
    return head;
}
//2case
struct node *endinsertion(struct node * head,int data){
   struct node *newnode=(struct node *)malloc(sizeof(struct node));
   struct node *ptr=head;
   newnode->data=data;
   newnode->next=NULL;

   while(ptr->next!=NULL){
    ptr=ptr->next;
   }
   ptr->next=newnode;
   newnode->prev=ptr;
return head;
}
//case3
struct node *insertspecificpos(struct node *head,int data,int index){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
   struct node *ptr=head;
   newnode->data=data;
   int i=0;
   while(i<index-1&&ptr !=NULL){
    ptr=ptr->next;
    i++;
   }
   
   
    newnode->next=ptr->next;
    newnode->prev=ptr;
    ptr->next=newnode;
    return head;

   

}
int main(){
    struct node *head=NULL,*ptr=NULL,*newnode=NULL;
    int n,i,value;
    printf("enter no.of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));

printf("enter data for nodes:%d\n",i+1);
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
newnode->prev=NULL;

if(head==NULL){
    head=newnode;
    ptr=head;
}
else{
    ptr->next=newnode;
    newnode->prev=ptr;
    ptr=newnode;
}


    }

lltraverse(head);
printf("after insertion\n");
// head=initialinsertion(head,56);
// head=endinsertion(head,34);
head=insertspecificpos(head,67,3);
lltraverse(head);


    
    return 0;
}
