#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,total=0;
	cin>>n;
	long long int ara[n+1];
	for(i=0;i<n;i++){
		cin>>ara[i];
	}
	sort(ara,ara+n);
	long long int max=ara[n-1];
	if(n==1) cout<<0<<endl;
	
	else{
		
	for(i=0;i<n;i++){
	    long long int x=max-ara[i];
	    total+=x;
	}
	cout<<total<<endl;
}
	return 0;
}
