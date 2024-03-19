#include <stdio.h> 
#include <stdlib.h> 
#define count 14 
int array[count]; 
void insertData() 
{ 
    for (int i = 0; i < count; i++) 
        array[i] = rand() % 50 + 1; 
} 
void displayData() 
{ 
    for (int i = 0; i < count; i++) 
        printf("%d\t", array[i]); 
} 
void selectionsort() 
{ 
    for (int i = 0; i < count - 1; i++) 
    { 
        for (int j = i + 1; j < count; j++) 
        { 
            if (array[i] > array[j]) 
            { 
                int temp = array[i]; 
                array[i] = array[j]; 
                array[j] = temp; 
            } 
        } 
        //    printf("\n"); 
        // displayData(); 
    } 
} 
int main() 
{ 
    insertData(); 
    displayData(); 
    selectionsort(); 
    printf("\n\n"); 
    displayData(); 
    return 0; 
}