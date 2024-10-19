#include<stdio.h>
#define QUEUESIZE 10
typedef int ElemType;
typedef struct{
    ElemType data[QUEUESIZE];
    int front;
    int rear;
}SqQueue;
void InitSqQueue(SqQueue *Q){
    Q->front=Q->rear=0;
}
int SqQueueEmpty(SqQueue *Q){
    return Q->front==Q->rear;
}
int SqQueueFull(SqQueue *Q){
    return (Q->rear+1)%QUEUESIZE==Q->front;
}
int EnQueue(SqQueue *Q,ElemType e){
    if(SqQueueFull(Q)) return 0;
    Q->data[Q->rear]=e;
    Q->rear=(Q->rear+1)%QUEUESIZE;
    return 1;
}
int DeQueue(SqQueue *Q,ElemType *e){
    if(SqQueueEmpty(Q)) return 0;
    *e=Q->data[Q->front];
    Q->front=(Q->front+1)%QUEUESIZE;
    return 1;
}
