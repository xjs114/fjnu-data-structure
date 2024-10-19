#include <stdio.h>
#include "LinkStack.h"
#include "LinkQueue.h"
int IsPalindrome(char *str){
    LinkStack stack;
    InitLinkStack(&stack);
    LinkQueue queue;
    InitLinkQueue(&queue);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!=' '){
            PushLinkStack(&stack,str[i]);
            EnQueue(&queue,str[i]);
        }
    }
    while(!LinkStackEmpty(&stack)){
        char topChar;
        PopLinkStack(&stack,&topChar);
        char frontChar;
        DeQueue(&queue,&frontChar);
        if(topChar!=frontChar) return 0;
    }
    return 1;
}
int main(){
    char str[]="what can i say";
    if(IsPalindrome(str)) printf("是回文\n");
    else printf("不是回文\n");
    return 0;
}