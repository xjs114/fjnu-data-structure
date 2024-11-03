#include <stdio.h>
#include "SString.h"
// 1. 串赋值 StrAssign
int StrAssignS(SString *T,const char *chars){
    int len=strlen(chars);
    if(len>MAXLEN){
        return 0;
    }  // 超过最大长度
    T->ch[0]=len;  // 存放串的长度
    for(int i=1;i<=len;i++){
        T->ch[i]=chars[i-1];
    }
    return 1;  // 成功赋值
}
// 2. 串复制 StrCopy
int StrCopyS(SString *T,const SString S){
    for(int i=0;i<=S.ch[0];i++){
        T->ch[i]=S.ch[i];
    }
    return 1;  // 成功复制
}
// 3. 串比较 StrCompare
int StrCompareS(SString S,SString T){
    for(int i=1;i<=S.ch[0]&&i<=T.ch[0];i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.ch[0]-T.ch[0];  // 比较长度
}
// 4. 求串长 StrLength
int StrLengthS(SString S){
    return S.ch[0];
}
// 5. 串联接 Concat
int ConcatS(SString *T,SString S1,SString S2){
    if(S1.ch[0]+S2.ch[0]>MAXLEN){
        return 0;
    }  // 长度溢出
    T->ch[0]=S1.ch[0]+S2.ch[0];
    for(int i=1;i<=S1.ch[0];i++){
        T->ch[i]=S1.ch[i];
    }
    for(int i=1;i<=S2.ch[0];i++){
        T->ch[S1.ch[0]+i]=S2.ch[i];
    }
    return 1;  // 成功联接
}
// 6. 求子串 SubString
int SubStringS(SString *Sub,SString S,int pos,int len){
    if(pos<1||pos>S.ch[0]||len<0||pos+len-1>S.ch[0]){
        return 0;
    }
    Sub->ch[0]=len;
    for(int i=1;i<=len;i++){
        Sub->ch[i]=S.ch[pos+i-1];
    }
    return 1;  // 成功提取
}