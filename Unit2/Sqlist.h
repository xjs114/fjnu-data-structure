#define SQLIST_H
#include "Common.h"
// 定义顺序表结构
typedef struct {
    char data[MAXSIZE];  // 存放顺序表的元素，类型为char
    int length;          // 顺序表的当前长度
} SqList;
// 初始化顺序表
Status InitList(SqList* L);
// 插入元素
Status ListInsert(SqList* L, int i, char e);
// 删除顺序表中第i个位置的元素，并赋值给e
Status ListDelete(SqList* L, int i, char* e);
// 打印顺序表
void PrintList(const SqList* L);
// 差集操作：LA-LB
void Except(SqList LA, SqList LB, SqList* LC);
// 删除顺序表中的重复元素
void DeleteDuplicate(SqList* L);