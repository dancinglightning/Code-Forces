#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int main()
{
    int a, b, z, ans, lcm;
    cin>>a>>b>>z;
    if(a>b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }
    while (1) 
    {
        if ( lcm%a==0 && lcm%b==0 ) 
        {
            break;
        }
        lcm++;
    }
    ans = z/lcm;
    cout << ans;
    return 0;
}