#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define HSTRING_H
typedef struct{
    char *ch;
    int length;
}HString;
int StrAssignH(HString *T,const char *chars);
int StrCopyH(HString *T,const HString S);
int StrCompareH(HString S,HString T);
int StrLengthH(HString S);
int ConcatH(HString *T,HString S1,HString S2);
int SubStringH(HString *Sub,HString S,int pos,int len);