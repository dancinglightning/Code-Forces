#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int ans = (k*(w*(w+1))/2)-n;

    if (ans>0)
    {
        cout<<ans;
    }

    else
    {
        cout<<0;
    }
    
    return 0;
}