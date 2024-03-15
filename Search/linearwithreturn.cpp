#include <iostream>

using namespace std;

void getdata()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=rand() % 50+1;
    }
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << "\t";
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
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    getdata();
    checkdata();
    
    return 0;
}