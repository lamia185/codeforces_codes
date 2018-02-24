#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,a,b,l=0,k=0,L=0,R=0,max,ans=0;
	cin>>n;
	
	pair<int,int>ara[100003];
	
	for(i=1;i<=n;i++){
     	cin>>ara[i].first>>ara[i].second;
        L+=ara[i].first;
		R+=ara[i].second;	
     }
		
	max=abs(L-R);
	
	for(i=1;i<=n;i++){
	    k=abs((L-ara[i].first+ara[i].second)-(R-ara[i].second+ara[i].first));
	    if(k>max){
	    max=k;
	    ans=i;
	}
	    
	}
		
		cout<<ans<<endl;
}

