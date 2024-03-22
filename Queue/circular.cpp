
#include <iostream>
using namespace std;

class Circular_queue
{
    int f, r;
    int size;
    int *arr;

public:
    Circular_queue(int n)
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
        else if ((r + 1) % size == f)
        {
            cout << "Queue is full ! \n"
                 << endl;
        }
        else
        {
            r=(r+1)%size;
            arr[r] = data;
        }
    }

    void display_data()
    {
        if (f < 0)
        {

            cout << "Queue is Empty ! \n"
                 << endl;
          
        }
        else{
            int i;

        for ( i = f; i != r; i = (i + 1) % size)
        {
            cout << arr[i] << endl;
        }
         cout << arr[i] << endl;
    }
    }

    void delete_data()
    {
        if (f < 0)
        {

            cout << "Queue is Empty ! \n"
                 << endl;
          
        }

        else if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f = (f + 1) % size;
            cout << "data deleted ! \n"
                 << endl;
        }
    }
};

int main()
{
    int n, number;

    cout << "Enter size of Queue : ";
    cin >> n;
    Circular_queue c1(n);
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
            c1.insert_data(number);
            break;

        case 2:
            cout << "for dispaly : " << endl;
            c1.display_data();
            break;
        case 3:
            c1.delete_data();
            break;
        case 4:
            exit(0);
            break;
        }

    } while (1);
    // c1.displayata();
    return 0;
}