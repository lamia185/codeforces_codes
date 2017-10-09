#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1,d2,d3,x;
    cin>>d1>>d2>>d3;
    x=min(d1+d1+d2+d2,min(d1+d3+d3+d1,min(d1+d3+d2,d2+d3+d3+d2)));
    cout<<x;
    return 0;
}
