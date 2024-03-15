#include <stdio.h>

int main ()
{
    int arr1[3]={11,22,33},arr2[3]={44,55,66},arr3[6],j=0;

    for (int i=0;i<3;i++) 
    {
        arr3[j]=arr1[i];
        j++;
    }

    for (int i=0;i<3;i++) 
    {
        arr3[j]=arr2[i];
        j++;
    }
    for (int i=0;i<6;i++) 
    {
        printf("%d\n",arr3[i]);
    }

    return 0;
}