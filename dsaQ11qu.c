#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("this queue is full \n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element : %d\n" , val);
    }
}
int dequeue(struct queue *q, int val)
{
    int a= -1;
    if (isEmpty(q))
    {
        printf("this queue is empty \n");
    }
    else
    {
        q->f++;
        a=q->arr[q->f] ;
        printf("dequeue element : %d\n" , val);
    }
    return a;
}
int main()
{
    struct queue q;
    q.size=100;
    q.f=q.r=0;
    q.arr = (int*)malloc(q.size*sizeof(int));
    enqueue(&q,12);
    enqueue(&q,12);
    dequeue(&q,12);
    dequeue(&q,12);
    if (isEmpty(&q))
    {
        printf("queue is empty");
    }
    else if(isFull(&q)){
        printf("queue is full");
    }
    else{
        printf("you can add elemrnt in queuse ");
    }

    return 0;
}