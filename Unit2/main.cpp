#include <stdio.h>
#include "SqList.h"
#include "LinkList.h"
int main() {
    // 测试顺序表
    SqList LA, LB, LC;
    InitList(&LA);
    InitList(&LB);
    // 向LA和LB中插入元素
    ListInsert(&LA, 1, 'a');
    ListInsert(&LA, 2, 'b');
    ListInsert(&LA, 3, 'c');
    ListInsert(&LB, 1, 'b');
    ListInsert(&LB, 2, 'c');
    ListInsert(&LB, 3, 'd');
    printf("顺序表LA: ");
    PrintList(&LA);
    printf("顺序表LB: ");
    PrintList(&LB);
    // 差集操作
    Except(LA, LB, &LC);
    printf("LA - LB的差集: ");
    PrintList(&LC);
    // 删除重复元素
    printf("删除重复元素前: ");
    PrintList(&LA);
    DeleteDuplicate(&LA);
    printf("删除重复元素后: ");
    PrintList(&LA);
    // 测试单链表
    LinkList L;
    InitList(&L);
    // 插入元素到单链表
    ListInsert(L, 1, 'x');
    ListInsert(L, 2, 'y');
    ListInsert(L, 3, 'z');
    printf("单链表L: ");
    PrintList(L);
    // 逆序单链表
    Reverse(&L);
    printf("逆序后的单链表L: ");
    PrintList(L);
    return 0;
}
