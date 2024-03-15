#include <stdio.h>

int main ()
{
    int arr[5]={11,22,33,44,55};

    printf("Value before swapping\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nValue after swapping\n");
    int a=arr[0];
    
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+1];
    } 
    
    arr[5-1]=a;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    } 
    

    return 0;    
}