#include <stdio.h>

int main()
{
    int arr[5]={11,22,33,44,55};

    printf("Value before swapping\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nValue after swapped \n");
    for(int i=0;i<5;i++)
    {
        int a=arr[0];
        arr[0]=arr[4];
        arr[4]=a;
        printf("%d\t",arr[i]);
    }

    // printf("Value before swapped \n");  
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    
    // printf("\nValue after swapped \n");
    // for(int i=4; i>=0; i--)
    // {
    //     printf("%d\t", arr[i]);
    // }

    return 0;
}