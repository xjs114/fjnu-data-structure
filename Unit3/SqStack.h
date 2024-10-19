#include <stdio.h>
#define MAXSIZE 100
typedef int ElemType; // 栈中存储的数据类型
typedef struct{
    ElemType data[MAXSIZE]; // 数据数组
    int top; // 栈顶指针
}SqStack;
void InitSqStack(SqStack *S);
int SqStackEmpty(SqStack *S);
int PushSqStack(SqStack *S,ElemType e);
int PopSqStack(SqStack *S,ElemType *e);
int GetTopSqStack(SqStack *S,ElemType *e);
