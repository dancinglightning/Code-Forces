#include <iostream>
using namespace std;

int main()
{
    long long int n, p, count = 1, max_count = 1;
    cin >> n >> p;
    for (size_t i = 1; i < n; i++)
    {
        int p1;
        cin >> p1;
        if (p1 >= p)
        {
            count +=1;
        }
        else
        {
            if (count > max_count)
            {
                max_count = count;
            }
            count = 1;
        }
        p = p1;
    }
    if (count > max_count)
    {
        max_count = count;
    }
    cout << max_count;
    
    return 0;
}