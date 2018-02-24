#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int n,max=0,i,j;
	cin>>n;
	
	int ara[n+2];
	
	for(i=0;i<n;i++)
	cin>>ara[i];
	
	sort(ara,ara+n);
	
	max=ara[n-1];
	
	cout<<max<<endl;
}
