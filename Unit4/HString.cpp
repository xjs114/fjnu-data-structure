#include <stdio.h>
#include "HString.h"
// 1. 串赋值 StrAssign
int StrAssignH(HString *T,const char *chars){
    int len=strlen(chars);
    T->ch=(char*)malloc((len+1)*sizeof(char));
    if(!T->ch){
        return 0;
    }  // 分配失败
    T->length=len;
    strcpy(T->ch,chars);
    return 1;  // 成功赋值
}
// 2. 串复制 StrCopy
int StrCopyH(HString *T,const HString S){
    T->ch=(char*)malloc((S.length+1)*sizeof(char));
    if(!T->ch){
        return 0;
    }  // 分配失败
    T->length=S.length;
    strcpy(T->ch,S.ch);
    return 1;  // 成功复制
}
// 3. 串比较 StrCompare
int StrCompareH(HString S,HString T){
    for(int i=0;i<S.length&&i<T.length;i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;  // 比较长度
}
// 4. 求串长 StrLength
int StrLengthH(HString S){
    return S.length;
}
// 5. 串联接 Concat
int ConcatH(HString *T,HString S1,HString S2){
    T->ch=(char*)malloc((S1.length+S2.length+1)*sizeof(char));
    if(!T->ch)return 0;  // 分配失败
    T->length=S1.length+S2.length;
    strcpy(T->ch,S1.ch);
    strcat(T->ch,S2.ch);
    return 1;  // 成功联接
}
// 6. 求子串 SubString
int SubStringH(HString *Sub,HString S,int pos,int len){
    if(pos<1||pos>S.length||len<0||pos+len-1>S.length){
        return 0;
    }
    Sub->ch=(char*)malloc((len+1)*sizeof(char));
    if(!Sub->ch){
        return 0; 
    } 
    Sub->length=len;
    strncpy(Sub->ch,S.ch+pos-1,len);
    Sub->ch[len]='\0';  // 添加结束符
    return 1;  // 成功提取
}