#include<bits/stdc++.h>
using namespace std;

int ara[10000006];
#define inf (1<<30)

int main(){
	string num;
	int i,j,k,l,m=-inf,n;
	
	cin>>num;
	
	l=num.length();
	
	for(i=0;i<l;i++){
		ara[i]=num.at(i)-48;
		m=max(m,ara[i]);
	}
	
	printf("%d\n",m);
	
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			if(ara[j]){
				for(;j<l;j++){
				printf("%d",(ara[j]==0)?0:1);
				ara[j]=max(0,ara[j]-1);
			}
			cout<<" ";
			}
		}
	}
}
