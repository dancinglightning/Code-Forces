#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int avg = (a+b)/2;

    if (abs(avg - a) < abs(avg - b))
    {
        cout << avg << " 0 " << (6 - avg);
    }

    else if (abs(avg - a) > abs(avg - b))
    {
        cout << (6 - avg) << " 0 " << avg;
    }

    else
    {
        if (a < b)
        {
            cout << avg - 1 << " 1 " << 6 - avg;
        }

        else if (a > b)
        {
            cout << 6 - avg << " 1 " << avg - 1;
        }

        else
        {
            cout << "0 6 0";
        }
    }

    return 0;
}