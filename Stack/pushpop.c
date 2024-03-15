#include <stdio.h>

int top=0,SIZE=5,arr[5];

void insert(int value)
{
    if(top > SIZE-1)
    {
        printf("\nStack is Full!!!");
    }
    else
    {
        top++;
        arr[top] = value;
        //printf("\n%d",arr[top]);
    }
}

void removeEle()
{
    if(top < 0)
    {
        printf("\nStack is Empty!!!");
    }
    else
    {
        top--;
        //printf("\n%d",arr[top]);
    }
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\n%d",arr[i]);
    }
}


int main()
{

    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    removeEle();
    removeEle();
    display();
    
    return 0;
}