#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int a, b, n;
    cin >> a >> b >> n;
    if (abs(a)+abs(b) <= n && ((abs(a)+abs(b))-n)%2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}