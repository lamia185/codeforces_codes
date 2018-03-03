#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t=0,i,j,k;
	int ara[300]={0};
	char str[100005];
	
	cin>>n>>str;
	
	for(i=0;i<n;i++){
		j=str[i]-48;
		ara[j]++;
	}
	
	for(i=0;i<300;i++){
		if(ara[i]){
			t++;
		}
	}
	
	if(n>26)
	cout<<"-1"<<endl;
	
	else
	cout<<n-t<<endl;
}
