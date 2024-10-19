#include <stdio.h>
#include <stdlib.h>
#include "LinkQueue.h"
void InitLinkQueue(LinkQueue *Q){
    Q->front=Q->rear=(QueuePtr)malloc(sizeof(QNode));
    Q->front->next=NULL;
}
int LinkQueueEmpty(LinkQueue *Q){
    return Q->front==Q->rear;
}
void EnQueue(LinkQueue *Q,ElemType e){
    QueuePtr newNode=(QueuePtr)malloc(sizeof(QNode));
    newNode->data=e;
    newNode->next=NULL;
    Q->rear->next=newNode;
    Q->rear=newNode;
}
int DeQueue(LinkQueue *Q,ElemType *e){
    if(LinkQueueEmpty(Q)) return 0;
    QueuePtr temp=Q->front->next;
    *e=temp->data;
    Q->front->next=temp->next;
    if(Q->rear==temp) Q->rear=Q->front;
    free(temp);
    return 1;
}