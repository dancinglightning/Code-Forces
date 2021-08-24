#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n,d,max = 0,beats = 0;
    cin>>n>>d;
    for (size_t i = 0; i < d; i++)
    {
        string p;
        bool beat = false;
        cin>>p;
        for (char j : p)
        {
            if (j=='0')
            {
                beat = true;
            }
        }

        if (beat==true)
        {
            beats++;
        }

        else
        {
            beats = 0;
        }

        if (beats>max)
            {
                max = beats;
            }

    }

    cout << max;
    
    return 0;
}