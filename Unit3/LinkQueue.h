#include<stdio.h>
#include <stdlib.h>
typedef char ElemType;
typedef struct QNode{
    ElemType data;
    struct QNode *next;
}QNode,*QueuePtr;
typedef struct{
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;
void InitLinkQueue(LinkQueue *Q);
int LinkQueueEmpty(LinkQueue *Q);
void EnQueue(LinkQueue *Q,ElemType e);
int DeQueue(LinkQueue *Q,ElemType *e);