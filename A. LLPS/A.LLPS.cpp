#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() 
{
    string word_input;
    int max = 0;
    string ans = "";
    cin >> word_input;
    for (char i: word_input)
    {
        if (int(i) > max)
        {
            max = int(i);
            ans = "";
        }
        if (int(i) == max)
        {
            ans.append(1, i);
        }

    }
    cout << ans;

    return 0;
}