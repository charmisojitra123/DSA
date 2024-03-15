#include <stdio.h>

int main ()
{
    int a = 11;

    // printf("a = %d, a = %d", a,a++);
    // printf("a = %d, a = %d", a,++a);
    // printf("a = %d, a = %d", a++,a++);
    // printf("a = %d, a = %d", a++,++a);  
    // printf("a = %d, a = %d", ++a,++a);
    // printf("a = %d, a = %d, a = %d", a,a++,++a);
    // printf("a = %d, a = %d, a = %d", a++,a++,++a);
    printf("a = %d, a = %d, a = %d", a++,++a,++a);

    return 0;
}