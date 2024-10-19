#include<stdio.h>
#define QUEUESIZE 10
typedef int ElemType;
typedef struct{
    ElemType data[QUEUESIZE];
    int front;
    int rear;
}SqQueue;
void InitSqQueue(SqQueue *Q);
int SqQueueEmpty(SqQueue *Q);
int SqQueueFull(SqQueue *Q);
int EnQueue(SqQueue *Q,ElemType e);
int DeQueue(SqQueue *Q,ElemType *e);
