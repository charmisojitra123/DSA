#include <iostream>
using namespace std;

void merges(int arr[], int l, int mid, int h)
{
    int b[50], i, j, k;

    i = l;
    k = l;
    j = mid + 1;

    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        b[k++] = arr[i++];
    }

    while (j <= h)
    {
        b[k++] = arr[j++];
    }

    for (i = l; i <= h; i++)
    {
        arr[i] = b[i];
    }
}
void mergesort(int arr[], int l, int h)
{

    if (l >= h)
    {
        return;
    }
    else
    {

        int mid = (l + h) / 2;

        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);
        merges(arr, l, mid, h);
    }
}

int main()
{

    int arr[9] = {11, 5, 23, 40, 56, 49, 49, 29, 20};

    int size = 9;

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    mergesort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}