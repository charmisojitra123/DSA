#include<iostream> 
using namespace std; 
int n; 
int arr[10]; 
void check() 
{ 
for (int i=0;i<10;i++) 
{ 
    arr[i]=rand()%50+1; 
    cout<<arr[i] << "\t"; 
} 
 
cout<<"\n";
for(int i=0;i<10-1;i++) 
{ 
    for(int j=0;j<10-i-1;j++) 
    { 
        if(arr[j]>arr[j+1]) 
        { 
            int temp=arr[j]; 
            arr[j]=arr[j+1]; 
            arr[j+1]=temp; 
        } 
    } 
     
} 
for(int i=0;i<10;i++) 
{ 
    cout<<arr[i]<<"\t"; 
} 
} 

int main() 
{ 
    check(); 
}