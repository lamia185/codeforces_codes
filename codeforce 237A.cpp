#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,m,h0,m0,count=1,cash=1;
    cin>>n;
    cin>>h0>>m0;
    n=n-1;
    while(n--){
        cin>>h>>m;
        if(h==h0 && m==m0){
            count+=1;
            if(count>cash){
                cash=count;
            }
        }
        else {
            count=1;
        }
        h0=h;
        m0=m;
    }
    cout<<cash<<endl;
    return 0;
}
