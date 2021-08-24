#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    string p = "";
    cin>>n;
    for (size_t i = 1; i < 400; i++)
    {
        p += to_string(i);
    }
    cout<<p[n-1];
    
    return 0;
}