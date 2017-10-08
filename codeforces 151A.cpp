#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int x=k*l;
	int y=x/nl;
	int z=c*d;
	int a=p/np;
	int result=min(min(y,z),a)/n;
	cout<<result<<endl;
}
