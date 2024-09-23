#include <stdio.h>
#include "triple.h"
int main() {
    Triple x,y,z;
    float a,b,c;
    printf("请输入第一个三元组的值 (a, b, c)：\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    InitialTriple(&x,a,b,c);
    printf("请输入第二个三元组的值 (a, b, c)：\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    InitialTriple(&y,a,b,c);
    add(x,y,&z);
    printf("加法结果:(%f,%f,%f)\n",z.a,z.b,z.c);
    sub(x,y,&z);
    printf("减法结果:(%f,%f,%f)\n",z.a,z.b,z.c);
    multi(x,y,&z);
    printf("乘法结果:(%f,%f,%f)\n",z.a,z.b,z.c);
    Status result = compare(x, y);
    if (result==MORE) {
        printf("比较结果为1\n");
    } else if (result==LESS) {
        printf("比较结果为-1\n");
    } else {
        printf("比较结果为0\n");
    }
    return 0;
}
