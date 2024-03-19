#include <iostream>
using namespace std;

class Simple_queue
{
    int f, r;
    int size;
    int *arr;

public:
    Simple_queue(int n)
    {
        f = -1;
        r = -1;
        arr = new int[n];
        size = n;
    }

    void insert_data(int data)
    {
        if (f == -1 && r == -1)
        {
            f++;
            r++;
            arr[r] = data;
        }
        else if (r >= size-1)
        {
            cout << "array is full ! " << endl;
        }
        else
        {
            r++;
            arr[r] = data;
        }
    }

    void display_data()
    {

        for (int i = f; i <= r; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void delete_data()
    {
        if (f >= 0)
        {
            f++;
            cout << f << " vlaue of " << endl;
        }
        else
        {
            cout << "Queue is Empty !" << endl;
        }
    }
};

int main()
{
    int n, number;

    cout << "Enter size of array : ";
    cin >> n;
    Simple_queue s1(n);
    int n1;

    do
    {

        cout << "1. insert " << endl;
        cout << "2. display " << endl;
        cout << "3. delete " << endl;
        cout << "4. Exit " << endl;
        cin >> n1;
        cout << endl;
        switch (n1)
        {
        case 1:
            cout << "Enter the value : " << endl;
            cin >> number;

            cout << endl;
            s1.insert_data(number);
            break;

        case 2:
            cout << "for dispaly : " << endl;
            s1.display_data();
            break;
        case 3:
            s1.delete_data();
            break;
        case 4:
            exit(0);
            break;
        }

    } while (1);
    // s1.displayata();
    return 0;
}