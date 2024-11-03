#include <stdio.h>
#include <stdlib.h>
#include "SString.h"
#include "HString.h"
int main(){
    // 测试 SString
    SString S,T,Sub,ConcatStr;
    StrAssignS(&S,"abcdefghijklmn");
    StrAssignS(&T,"hijklmn");
    printf("S串的长度: %d\n",StrLengthS(S));
    printf("T串的长度: %d\n",StrLengthS(T));
    SString CopyStr;
    if(StrCopyS(&CopyStr,S)){
        printf("复制的串: ");
        for(int i=1;i<=CopyStr.ch[0];i++){
            putchar(CopyStr.ch[i]);
        }
        printf("\n");
    }else{
        printf("复制失败\n");
    }
    int pos=Index(S,T,1);
    printf("子串T在S中的位置: %d\n",pos);
    
    if(SubStringS(&Sub,S,8,5)){
        printf("从S中提取的子串: ");
        for(int i=1;i<=Sub.ch[0];i++){
            putchar(Sub.ch[i]);
        }
        printf("\n");
    }else{
        printf("提取子串失败\n");
    }
    if(ConcatS(&ConcatStr,S,T)){
        printf("连接后的串: ");
        for(int i=1;i<=ConcatStr.ch[0];i++){
            putchar(ConcatStr.ch[i]);
        }
        printf("\n");
    }else{
        printf("连接失败\n");
    }
    // 测试 HString
    HString HS, HT, HSub, ConcatHStr;
    StrAssignH(&HS, "Hello,");
    StrAssignH(&HT, " World");
    printf("HS串的长度: %d\n",StrLengthH(HS));
    printf("HT串的长度: %d\n",StrLengthH(HT));
    HString CopyHStr;
    if(StrCopyH(&CopyHStr, HS)){
        printf("复制的HS串: %s\n",CopyHStr.ch);
    }else{
        printf("复制失败\n");
    }
    if(SubStringH(&HSub,HS,1,3)){
        printf("从HS中提取的子串: %s\n", HSub.ch);
    }else{
        printf("提取子串失败\n");
    }
    if (ConcatH(&ConcatHStr,HS,HT)){
        printf("拼接后的串: %s\n",ConcatHStr.ch);
    }else{
        printf("拼接失败\n");
    }
    free(HS.ch);
    free(HT.ch);
    free(HSub.ch);
    free(CopyHStr.ch);
    free(ConcatHStr.ch);
    return 0;
}
