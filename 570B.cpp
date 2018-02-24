#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,m,i,j,l;
	
	cin>>n>>m;
	
	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}
	
	else if(n-m>=m){
		m=m+1;
		cout<<m<<endl;
	}
	
	else if(n-m<m)
	{
		cout<<m-1<<endl;
	}
	
}
