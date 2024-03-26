#include <stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main ()
{
    struct node a,b;
    a.data=10;
    a.ch='A';
    a.ptr=NULL;

    b.data=20;
    b.ch='B';
    b.ptr=NULL;

    printf("A :---- Data : %d, Character : %c\n",a.data,a.ch);
    printf("B :---- Data : %d, Character : %c\n",b.data,b.ch);

    a.ptr = &b;
    b.ptr = &a;

    printf("B :---- Data : %d, Character : %c\n",a.ptr->data,a.ptr->ch);
    printf("A :---- Data : %d, Character : %c\n",b.ptr->data,b.ptr->ch);

}