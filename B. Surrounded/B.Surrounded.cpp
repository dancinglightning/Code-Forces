#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double dist;
    double x1, y1, r1;
    double x2, y2, r2;

    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;

    dist = sqrt((pow((x1 - x2),2) + pow((y1 - y2),2)));
    cout<<fixed;
    cout<<setprecision(14);
    if (dist>=(r1+r2))
    {
        cout<<(dist-(r1+r2))/2;
    }
    else if (r1>=(dist+r2))
    {
        cout<<(r1-(dist+r2))/2;
    }
    else if (r2>=(r1+dist))
    {
        cout<<(r2-(r1+dist))/2;
    }
    else
    {
        cout<<0;
    }
    
    return 0;
}