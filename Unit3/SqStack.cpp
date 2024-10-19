#include <stdio.h>
#include "SqStack.h"
// 初始化顺序栈
void InitSqStack(SqStack *S){
    S->top=-1; // 栈空时 top 为 -1
}
// 判断栈是否为空
int SqStackEmpty(SqStack *S){
    return S->top==-1;
}
// 入栈操作
int PushSqStack(SqStack *S,ElemType e){
    if(S->top==MAXSIZE-1){
        return 0;
    } // 栈满
    S->data[++S->top]=e; // 入栈
    return 1;
}
// 出栈操作
int PopSqStack(SqStack *S,ElemType *e){
    if(SqStackEmpty(S)){
        return 0;
    } // 栈空
    *e=S->data[S->top--]; // 出栈
    return 1;
}
// 获取栈顶元素
int GetTopSqStack(SqStack *S,ElemType *e){
    if(SqStackEmpty(S)){
        return 0;
    } // 栈空
    *e=S->data[S->top]; // 获取栈顶元素
    return 1;
}