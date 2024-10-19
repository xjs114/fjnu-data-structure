#include <stdio.h>
#include "SqStack.h"
void DecimalToHexadecimal(SqStack *S,int num){
    while(num){
        int remainder=num%16;
        PushSqStack(S,remainder);
        num/=16;
    }
}

void PrintHexadecimal(SqStack *S){
    while(!SqStackEmpty(S)){
        int e;
        PopSqStack(S,&e);
        if(e<10) printf("%d",e);
        else printf("%c",e-10+'A');
    }
}

int main(){
    SqStack stack;
    InitSqStack(&stack);
    DecimalToHexadecimal(&stack,10000);
    printf("10000的十六进制是:0x ");
    PrintHexadecimal(&stack);
    printf("\n");
    return 0;
}