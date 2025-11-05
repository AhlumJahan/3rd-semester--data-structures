#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size,f,r,*arr;
};

int isFull(struct queue *q){
if(q->r==q->size-1){
    return 1;
}
else{
    return 0;
}
}
int isEmpty(struct queue *q){
    if(q->r==q->f){
return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
    printf("full queue\n");

    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("enqueued element is %d\n",val);
    }
}
int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("empty queue\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}


int main(){
    struct queue q;
    q.size=3;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size * sizeof(int));
enqueue(&q,7);
enqueue(&q,9);
enqueue(&q,18);
printf("dequeue %d elemnent from a queue\n",dequeue(&q));
printf("dequeue %d elemnent from a queue\n",dequeue(&q));
printf("dequeue %d elemnent from a queue\n",dequeue(&q));
enqueue(&q,45);//this cant be enqueued as the queue shows still full after dequeing all 3 elements
if(isEmpty(&q)){
    printf("queue is empty\n");
}
if(isFull(&q)){
    printf("queue is full\n");
}
return 0;





    return 0;
}
