#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ara[200],i,j,k,cnt=0,ara2[602];
	cin>>n;
	memset(ara2,0,sizeof(ara2));
	
	for(i=0;i<n;i++){
		cin>>ara[i];
		if(ara[i]!=0){
			k=ara[i];
			ara2[k]++;
		}
	}

	for(i=1;i<=601;i++){
		if(ara2[i]!=0)
		cnt++;
	}
	
	cout<<cnt<<endl;
	
}
