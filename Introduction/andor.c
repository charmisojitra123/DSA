#include <stdio.h>
int main ()
{
    int a = 1, b = 2, c;
    
    /* ------------ OR ------------ */
    // c = a || b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    // c = --a || b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    // c = --a || ++b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    // c = a || ++b;
    // printf("a: %d, b: %d, c: %d", a, b, c);


    /* ------------ AND ------------ */

    // c = a && b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    // c = a && ++b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    // c = --a && b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    // c = --a && ++b;
    // printf("a: %d, b: %d, c: %d", a, b, c);

    return 0;
}