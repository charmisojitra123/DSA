#include <stdio.h> 
#include <stdlib.h> 
#define count 10 
int array[count]; 
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n - 1; i++) 
    { 
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
void insertData() 
{ 
    for (int i = 0; i < count; i++) 
        array[i] = rand() % 50 + 1; 
    selectionSort(array, count); 
} 
void displayData() 
{ 
    for (int i = 0; i < count; i++) 
        printf("%d\t", array[i]); 
} 
int findData(int val, int l, int h) 
{ 
    // printf("l = %d h = %d", l, h); 
    if (l >= h) 
        return -1; 
    else if (array[l] == val) 
        return l; 
    else if (array[h] == val) 
        return h; 
    else 
    { 
        for (int i = l; i < h; i++) 
        { 
            int mid = (l + h) / 2; 
            if (array[mid] == val) 
                return mid; 
            else if (array[mid] > val) 
            { 
                l = 0; 
                h = mid - 1; 
                return findData(val, l, h); 
            } 
            else if (array[mid] < val) 
            { 
                l = mid + 1; 
                h = h; 
                return findData(val, l, h); 
            } 
        } 
    } 
    return -1; 
} 
int main() 
{ 
    int val; 
    int l = 0; 
    int h = count - 1; 
    insertData(); 
    displayData(); 
    printf("\nEnter value to search : "); 
    scanf("%d", &val); 
    int index = findData(val, l, h); 
    if (index == -1) 
        printf("Value is not in array"); 
    else 
        printf("Data @ index %d", index); 
    return 0; 
}