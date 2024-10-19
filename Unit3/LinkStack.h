#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode;
typedef struct{
    LinkNode *top;
}LinkStack;
void InitLinkStack(LinkStack *S);
int LinkStackEmpty(LinkStack *S);
void PushLinkStack(LinkStack *S,ElemType e);
int PopLinkStack(LinkStack *S,ElemType *e);
