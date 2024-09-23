#define TRIPLE_H
#include "common.h"
typedef struct{
    float a;
    float b;
    float c;
}Triple;
void InitialTriple(Triple *x,float a,float b,float c);
void add(Triple x,Triple y,Triple *z);
void sub(Triple x,Triple y,Triple *z);
void multi(Triple x,Triple y,Triple *z);
Status compare(Triple x,Triple y);