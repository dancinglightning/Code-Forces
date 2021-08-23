#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int ans = 0;
    int police = 0;
    int inputs;
    cin >> inputs;
    int i;
    for (size_t j = 0; j < inputs; j++)    
    {
        cin >> i;
        if (police>=0)
        {
            police+=i;
        }
        if (police<=0)
        {
            ans+=police;
            police=0;
        }
    }
    cout<<-ans;
    return 0;
}