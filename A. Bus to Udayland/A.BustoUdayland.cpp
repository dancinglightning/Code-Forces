#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string row;
    string ans = "NO";
    string rows = "";
    for (int i = 0; i < n; i++)
    {
        cin>>row;
        if (row[0]=='O' && row[1]=='O' && ans!="YES")
        {
            string row1=row;
            row="";
            ans = "YES";
            row.append(1, '+');
            row.append(1, '+');
            row.append(1, '|');
            row.append(1, row1[3]);
            row.append(1, row1[4]);
        }

        if (row[3]=='O' && row[4]=='O' && ans!="YES")
        {
            string row1=row;
            row="";
            ans = "YES";
            row.append(1, row1[0]);
            row.append(1, row1[1]);
            row.append(1, '|');
            row.append(1, '+');
            row.append(1, '+');
        }
        
        rows += row;
    }
    cout<<ans<<"\n";
    if (ans=="YES")
    {
        for (long int j = 0; j < 5*n; j+=5)
        {
            cout<<rows[j]<<rows[j+1]<<rows[j+2]<<rows[j+3]<<rows[j+4]<<"\n";
        }
    }
    
    return 0;
    
}