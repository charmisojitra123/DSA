#include <stdio.h>

int arr[10]={4,8,16,24,28,34,38,44,46,48},mid;

void getdata()
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
}

int finddata()
{
    int i,n,l=0,h=9,temp=0;
    mid = l+h/2;

    printf("\nEnter the value of n :- ");
    scanf("%d", &n);

    for (i = 0; i <= h; i++) {
        if (arr[mid] == n) {
            return mid;
        }
        if(arr[mid] > n)
        {
            h = mid-1;
        }
        if(arr[mid] < n)
        {
            l = mid+1;
        }
    }
}

int main()
{
    getdata();
    finddata();
    int fun;
    fun = finddata();
    printf("\nThe value of mid is %d\n", mid);

    return 0;
}