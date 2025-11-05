#include<stdio.h>
#include<stdlib.h>
struct node *f=NULL;
struct node *r=NULL;
struct node{
    int data;
    struct node*next;
};
void linkedlinktraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("elements are %d\n",ptr->data);
    ptr=ptr->next;

    }
}
void enqueue(int val){
    struct node *n=(struct node *)malloc(sizeof(struct node));
if(n==NULL){
    printf("full queue\n");
}
else{
    n->data=val;
    n->next=NULL;
    if(f==NULL){
        f=r=n;
    }
    else{
        r->next=n;
        r=n;
    }
}
}
int dequeue(){
    int val=-1;
    struct node *p=f;
    if(f==NULL){
        printf("Empty queue\n");
    }
    else{
        f=f->next;
        val=p->data;
        free(p);
    }
    return val;
}
int main(){
    linkedlinktraversal(f);
    printf("dequeue element %d\n",dequeue());

    enqueue(11);
    enqueue(2);
    enqueue(5);
    enqueue(34);
    enqueue(56);
linkedlinktraversal(f);

    printf("dequeue element %d\n",dequeue());
    printf("dequeue element %d\n",dequeue());
    printf("dequeue element %d\n",dequeue());
linkedlinktraversal(f);
return 0;

}
