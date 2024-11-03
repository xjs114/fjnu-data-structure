#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SSTRING_H
#define MAXLEN 255
typedef struct{
    char ch[MAXLEN+1];  // 0号单元存放串的长度
}SString;
int StrAssignS(SString *T,const char *chars);
int StrCopyS(SString *T,const SString S);
int StrCompareS(SString S,SString T);
int StrLengthS(SString S);
int ConcatS(SString *T,SString S1,SString S2);
int SubStringS(SString *Sub,SString S,int pos,int len);
int Index(SString S,SString T,int pos);