#include "SqList.h"
#include <stdio.h>
// 初始化顺序表，设置长度为0
Status InitList(SqList* L) {
    L->length = 0;
    return OK;
}
// 插入元素e到顺序表第i个位置
Status ListInsert(SqList* L, int i, char e) {
    // 检查插入位置是否合法以及表是否已满
    if (i < 1 || i > L->length + 1 || L->length == MAXSIZE) {
        return ERROR;
    }
    // 将i之后的元素向后移动
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;  // 在位置i插入元素
    L->length++;          // 表长度加1
    return OK;
}
// 删除顺序表中第i个位置的元素，并将其赋值给e
Status ListDelete(SqList* L, int i, char* e) {
    // 检查删除位置是否合法
    if (i < 1 || i > L->length) {
        return ERROR;
    }
    *e = L->data[i - 1];  // 保存删除的元素
    // 将i后的元素前移
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    }
    L->length--;  // 表长度减1
    return OK;
}
// 打印顺序表中的所有元素
void PrintList(const SqList* L) {
    for (int i = 0; i < L->length; i++) {
        printf("%c ", L->data[i]);  // 打印每个元素
    }
    printf("\n");
}
// 差集操作：LA - LB，将结果存入LC
void Except(SqList LA, SqList LB, SqList* LC) {
    InitList(LC);  // 初始化LC为空表
    for (int i = 0; i < LA.length; i++) {
        int found = 0;  // 标志变量，用于判断LA[i]是否在LB中
        for (int j = 0; j < LB.length; j++) {
            if (LA.data[i] == LB.data[j]) {
                found = 1;  // LA[i]在LB中，标志为1
                break;
            }
        }
        if (!found) {  // 如果LA[i]不在LB中，插入到LC中
            ListInsert(LC, LC->length + 1, LA.data[i]);
        }
    }
}
// 删除顺序表中的重复元素
void DeleteDuplicate(SqList* L) {
    for (int i = 0; i < L->length; i++) {
        for (int j = i + 1; j < L->length;) {
            if (L->data[i] == L->data[j]) {
                char temp;
                ListDelete(L, j + 1, &temp);  // 删除重复元素
            } else {
                j++;
            }
        }
    }
}