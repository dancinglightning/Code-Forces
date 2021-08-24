#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float l, h, e;
    cin >> l >> h >> e;
    float ans = (l*h)/(h+e);
    cout << ans;
    return 0;
}