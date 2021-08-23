#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int n, val, first, last, sum = 0, max_sum = 0;
    list<int> dists = { };
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> val;
        dists.push_front(val);
    }

    dists.reverse();
    cin >> first;
    cin >> last;
    if (first > last)
    {
        int mid = first;
        first = last;
        last = mid;
    }
    list<int>::iterator it = dists.begin();
    list<int>::iterator it1 = dists.begin();
    advance(it, first-1);
    for (size_t j = first-1; j < last-1; j+=1)
    {
        sum += *it;
        advance(it, 1);
    }

    for (size_t k = 0; k < n; k+=1)
    {
        max_sum += *it1;
        advance(it1, 1);
    }

    if (max_sum-sum > sum)
    {
        cout<<sum;
    }
    else
    {
        cout<<max_sum-sum;
    }
    
    return 0;
    
}