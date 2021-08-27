#include <iostream>
#include <string>
using namespace std;

int main() 
{
    long long int n, x, dis = 0;
    cin >> n >> x;
    for (size_t i = 0; i < n; i++)
    {
        string p;
        long long int p1;
        cin >> p >> p1;
        if (p == "+")
        {
            x += p1;
        }

        else
        {
            if (p1 > x)
            {
                dis += 1;
            }

            else
            {
                x -= p1;
            }
        }

    }
    
    cout << x << " " << dis;
    
    return 0;
}