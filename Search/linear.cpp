#include <iostream>
using namespace std;

int arr[10];

void setdata()
{
    for(int i=0;i<10;i++)
    {
        arr[i]=rand()%50+1;
    }

    for(int i=0;i<10;i++)
    {
        cout << arr[i] <<"\t";
    }
}

void checkdata()
{
    int n,temp=0;
    cout << "\nEnter the value of n :- ";
    cin >> n;

    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            temp=1;
            cout << n << " is present at index " << i << endl;
        }
       
    }
    if(temp==0)
    {
        cout << n << " is not present at any index " << endl;    
    }
}

int main()
{
    setdata();
    checkdata();

    return 0;
}