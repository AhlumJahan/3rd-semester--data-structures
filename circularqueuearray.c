#include<stdio.h>
#include<stdlib.h>
struct circularqueue{
    int size,f,r,*arr;
};
int isEmpty(struct circularqueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int isFull(struct circularqueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q,int val){
    if(isFull(q)){
        printf("circularqueue is full\n");
    }
    else{
       q->r= (q->r+1)%q->size;
       q->arr[q->r]=val;
       printf("encircularqueued element: %d\n",val);

    }
}
int dequeue(struct circularqueue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("circularqueue is empty\n");
    }
    else{
       q->f= (q->f+1)%q->size;
       a=q->arr[q->f];

    }
    return a;
}
int main(){

struct circularqueue q;
q.size=4;
q.f=q.r=0;
q.arr=(int *)malloc(q.size *sizeof(int));

enqueue(&q,5);
enqueue(&q,7);
enqueue(&q,9);
enqueue(&q,18);
printf("dequeue %d elemnent from a circularqueue\n",dequeue(&q));
printf("dequeue %d elemnent from a circularqueue\n",dequeue(&q));
printf("dequeue %d elemnent from a circularqueue\n",dequeue(&q));
enqueue(&q,45);
enqueue(&q,67);
if(isEmpty(&q)){
    printf("circularqueue is empty\n");
}
if(isFull(&q)){
    printf("circularqueue is full\n");
}
return 0;





    return 0;
}
