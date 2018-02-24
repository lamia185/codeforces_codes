#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,x,ans,i,k=1,m=0;
	cin>>n;
	x=n;
	
	while(x){
		x/=10;
		m++;
	}
	
	ans=n*m+m-1;
	
	for(i=0;i<m-1;i++){
		k*=10;
		ans-=k;
	}
	
	cout<<ans<<endl;
}
