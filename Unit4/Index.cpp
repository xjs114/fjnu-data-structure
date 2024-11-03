#include <stdio.h>
#include "SString.h"
// 字串定位 Index
int Index(SString S,SString T,int pos){
    int i=pos;
    int j=1;
    while(i<=S.ch[0]&&j<=T.ch[0]){
        if(S.ch[i]==T.ch[j]){
            i++;
            j++;
        }else{
            i=i-j+2;
            j=1;
        }
    }
    if(j>T.ch[0]){
        return i-T.ch[0];
    }
    return 0;  // 未找到
}