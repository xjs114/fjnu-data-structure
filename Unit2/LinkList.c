#include "LinkList.h"
#include <stdio.h>
#include <stdlib.h>
// 初始化单链表，创建带头节点的空链表
Status InitList(LinkList* L) {
    *L = (LinkList)malloc(sizeof(LNode));  // 分配头节点空间
    if (*L == NULL) {
        return ERROR;  // 分配失败
    }
    (*L)->next = NULL;  // 头节点的next指针设为NULL
    return OK;
}
// 插入元素e到单链表第i个位置
Status ListInsert(LinkList L, int i, char e) {
    LinkList p = L;
    int j = 0;
    // 找到第i-1个节点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL || j > i - 1) {
        return ERROR;  // 插入位置不合法
    }
    // 创建新节点
    LinkList s = (LinkList)malloc(sizeof(LNode));
    if (s == NULL) {
        return ERROR;  // 分配内存失败
    }
    s->data = e;       // 插入元素
    s->next = p->next; // 新节点指向第i个节点
    p->next = s;       // 第i-1个节点指向新节点
    return OK;
}
// 删除单链表中第i个位置的元素，并将其赋值给e
Status ListDelete(LinkList L, int i, char* e) {
    LinkList p = L;
    int j = 0;
    // 找到第i-1个节点
    while (p->next != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p->next == NULL || j > i - 1) {
        return ERROR;  // 删除位置不合法
    }
    // 删除节点
    LinkList q = p->next;
    *e = q->data;       // 保存被删除节点的数据
    p->next = q->next;  // 前一个节点指向后一个节点
    free(q);            // 释放被删除节点的内存
    return OK;
}
// 打印单链表中的所有元素
void PrintList(const LinkList L) {
    LinkList p = L->next;  // 跳过头节点
    while (p != NULL) {
        printf("%c ", p->data);  // 打印当前节点数据
        p = p->next;             // 移动到下一个节点
    }
    printf("\n");
}
// 链表逆序操作
void Reverse(LinkList* L) {
    LinkList prev = NULL;
    LinkList curr = (*L)->next;  // 当前节点，跳过头节点
    LinkList next;
    // 遍历链表，逆序每个节点
    while (curr != NULL) {
        next = curr->next;   // 保存下一个节点
        curr->next = prev;   // 当前节点指向前一个节点
        prev = curr;         // 移动prev和curr
        curr = next;
    }
    (*L)->next = prev;  // 最后将头节点指向逆序后的第一个节点
}