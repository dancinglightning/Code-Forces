#include <iostream>
using namespace std;

int main()
{
    long long int n, x, count = 0;
    cin >> n >> x;
    for (size_t i = 1; i <= n; i++)
    {
        if (x%i == 0)
        {
            if (x/i <= n)
            {
                count += 1;
            }
        }
        
    }
    cout << count;
    
    return 0;
}