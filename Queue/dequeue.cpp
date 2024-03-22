#include <iostream>
using namespace std;

class Double_queue
{

    int size;
    int *dque;
    int f, r;

public:
    Double_queue(int n)
    {
        size = n;
        dque = new int[n];
        f = -1;
        r = -1;
    }

    void rear_insert(int data)
    {
        if (r == size - 1)
        {
            cout << "Queue is full ! \n"
                 << endl;
        }
        else
        {
            if (f == -1)
            {
                f++;
                r++;
            }
            else
            {
                r++;
            }

            dque[r] = data;

            cout << "Data Inserted ! \n " << endl;
        }
    }

    void display_data()
    {
        if (f == -1)
        {
            f = r = -1;
            cout << "Queue is Empty ! \n"
                 << endl;
        }
        else
        {
            cout << "Data : ";
            for (int i = f; i <= r; i++)
            {
                cout << dque[i] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    void delete_data()
    {
        if (f == -1)
        {
            f = r = -1;
            cout << "Queue is Empty ! \n"
                 << endl;
        }
        else
        {
            f++;
            cout << "Data deleted ! \n"
                 << endl;
        }
    }

    void rear_delete()
    {

        r--;
        cout << "data deleted ! \n"
             << endl;
    }

    void front_insert(int n1)
    {
        if (f == size - 1)
        {
            cout << "Queue is full ! \n"
                 << endl;
        }
        else if (f == -1 && r == -1)
        {
            f++;
            r++;
            dque[f] = n1;
            cout << "data inserted ! \n " << endl;
        }
        else
        {

            for (int i = f; i <= r + 1; i++)
            {
                dque[r + 1] = dque[r];
                dque[r] = dque[r - 1];
            }
            f++;
            dque[f] = n1;
            cout << "Data Inserted ! \n " << endl;
        }
    }
};

int main()
{
    int n, num, number, n1;

    cout << "Enter the size of Queue : ";
    cin >> n;
    Double_queue d1(n);
    do
    {

        cout << " 1 | Insert \n 2 | Display \n 3 | Delete \n 4 | Rear Delete \n 5 | Front Insert \n 6 | Exit \n " << endl;
        cin >> num;
        cout << endl;

        switch (num)
        {
        case 1:
            cout << "Enter the data : ";
            cin >> number;
            cout << endl;
            d1.rear_insert(number);
            break;

        case 2:
            d1.display_data();
            break;

        case 3:
            d1.delete_data();
            break;

        case 4:
            d1.rear_delete();
            break;

        case 5:
            cout << "Enter the data : ";
            cin >> n1;
            cout << endl;
            d1.front_insert(n1);
            break;

        case 6:
            exit(0);
            break;
        }
    } while (1);
    return 0;
}