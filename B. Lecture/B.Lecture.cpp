#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int n, m;
    list <int> a_list;
    list <int> b_list;
    for (size_t i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        a_list.push_back(a);
        b_list.push_back(b);
    }
    for (size_t j = 0; j < n; j++)
    {
        int c;
        cin >> c;
        auto pos = find (a_list.begin(), a_list.end(), c);
        cout << pos;
    }

    
    return 0;
}