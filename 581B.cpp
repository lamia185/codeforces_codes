#include<bits/stdc++.h>
using namespace std;

int ara[100004],ara2[100004];

int main(){
	int n,i,j,k,l,ans=0;
	
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ara[i];
	
	for(i=n-1;i>=0;i--){
		ara2[i]=max(ara2[i+1],ara[i+1]);
	}
	
	for(i=0;i<n;i++){
		ans=max(ara2[i]-ara[i]+1,0);
		if(i==n-1)
		cout<<ans<<endl;
		else
		cout<<ans<<" ";
	}
}
