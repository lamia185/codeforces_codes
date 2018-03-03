#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int n,m,j=0,a=0,ara[3000],ara2[3000],i,cnt=0;
	cin>>n>>m;
	
	for(i=0;i<n;i++)
	{
		cin>>ara[i];
		if(ara[i]<0){
			ara2[j]=(-1)*ara[i];
			j++;
		}
	}
	
	
	sort(ara2,ara2+j);
	
	for(i=j-1;;i--){
		cnt++;
		a+=ara2[i];
		if(cnt==m)
		break;
	}
	
	cout<<a<<endl;
	
}
