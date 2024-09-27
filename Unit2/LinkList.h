#define LINKLIST_H
#include "Common.h"
// 单链表节点结构
typedef struct LNode {
    char data;              // 节点数据域，存放字符
    struct LNode* next;     // 指向下一个节点的指针
} LNode, *LinkList;
// 初始化单链表，创建带头节点的空链表
Status InitList(LinkList* L);
// 插入元素e到单链表的第i个位置
Status ListInsert(LinkList L, int i, char e);
// 删除单链表中第i个位置的元素，并赋值给e
Status ListDelete(LinkList L, int i, char* e);
// 打印单链表中的所有元素
void PrintList(const LinkList L);
// 链表逆序操作
void Reverse(LinkList* L);