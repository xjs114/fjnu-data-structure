#include <stdio.h>
#include "triple.h"
void InitialTriple(Triple *x, float a, float b, float c) {
    x->a=a;
    x->b=b;
    x->c=c;
}
void add(Triple x, Triple y, Triple *z) {
    z->a=x.a+y.a;
    z->b=x.b+y.b;
    z->c=x.c+y.c;
}
void sub(Triple x, Triple y, Triple *z) {
    z->a=x.a-y.a;
    z->b=x.b-y.b;
    z->c=x.c-y.c;
}
void multi(Triple x, Triple y, Triple *z) {
    z->a=x.a*y.a;
    z->b=x.b*y.b;
    z->c=x.c*y.c;
}
Status compare(Triple x, Triple y) {
    if (x.a>y.a) return MORE;
    else if (x.a<y.a) return LESS;
    else {
        if (x.b>y.b) return MORE;
        else if (x.b<y.b) return LESS;
        else {
            if (x.c>y.c) return MORE;
            else if (x.c<y.c) return LESS;
            else return EQUAL;
        }
    }
}