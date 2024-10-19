#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"
void InitLinkStack(LinkStack *S){
    S->top=NULL; // 栈顶指针初始化为 NULL
}
// 判断栈是否为空
int LinkStackEmpty(LinkStack *S){
    return S->top==NULL; // 栈为空时返回 1
}
// 入栈操作
void PushLinkStack(LinkStack *S,ElemType e){
    LinkNode *node=(LinkNode *)malloc(sizeof(LinkNode)); // 动态分配新节点
    if(node==NULL){
        exit(1);
    } // 检查内存分配
    node->data=e; // 设置节点数据
    node->next=S->top; // 新节点指向当前栈顶
    S->top=node; // 更新栈顶
}
// 出栈操作
int PopLinkStack(LinkStack *S,ElemType *e){
    if (LinkStackEmpty(S)){
        return 0;
    } // 栈空时返回 0
    LinkNode *temp=S->top; // 临时保存栈顶节点
    *e=temp->data; // 返回节点数据
    S->top=temp->next; // 更新栈顶
    free(temp); // 释放节点内存
    return 1; // 成功出栈返回 1
}